#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int count_words_in_file(const string& file_name) {
    ifstream file(file_name);
    if (!file) {
        cerr << "File '" << file_name << "' not found." << endl;
        return 0;
    }

    string word;
    int word_count = 0;
    while (file >> word) {
        ++word_count;
    }

    return word_count;
}

int main() {
    string file_path = "Example_text_file.txt";
    int total_words = count_words_in_file(file_path);
    cout << "Total number of words in the file: " << total_words << endl;
    return 0;
}
