#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create an output file stream (ofstream) object
    ofstream file("example.txt");

    // Check if the file is open
    if (file.is_open()) {
        // Write some content to the file
        file << "Hello, this is a sample text file!\n";
        file << "This file was created using C++.\n";
        
        // Close the file after writing
        file.close();
        cout << "File created and written successfully." << endl;
    } else {
        cout << "Unable to create or open the file." << endl;
    }

    return 0;
}