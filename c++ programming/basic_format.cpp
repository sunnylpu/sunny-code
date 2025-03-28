#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <string>

void testThread() {
    std::cout << "Thread is running successfully!" << std::endl;
}

int main() {
    try {
        // 1. Print C++ Standard Version
        std::cout << "C++ Standard Version: " << __cplusplus << std::endl;

        // 2. Test basic arithmetic
        int a = 10, b = 20;
        std::cout << "Addition Test: " << a << " + " << b << " = " << (a + b) << std::endl;

        // 3. Create and write to a file
        std::ofstream tempFile("test_file.txt");
        if (tempFile.is_open()) {
            tempFile << "Hello, C++ Environment Test!" << std::endl;
            tempFile.close();
            std::cout << "File 'test_file.txt' created and written successfully!" << std::endl;
        } else {
            std::cerr << "Failed to create file!" << std::endl;
        }

        // 4. Read the file
        std::ifstream inputFile("test_file.txt");
        if (inputFile.is_open()) {
            std::string line;
            std::cout << "File content:" << std::endl;
            while (getline(inputFile, line)) {
                std::cout << line << std::endl;
            }
            inputFile.close();
        } else {
            std::cerr << "Failed to read file!" << std::endl;
        }

        // 5. Test threading
        std::thread testThreadObj(testThread);
        testThreadObj.join();

        // 6. Pause to test delays
        std::cout << "Pausing for 2 seconds..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));

        std::cout << "All tests passed successfully!" << std::endl;

    } catch (const std::exception &e) {
        std::cerr << "An error occurred during the test: " << e.what() << std::endl;
    }

    return 0;
}