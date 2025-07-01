#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string text = "this is a test this is only a test";
    map<string, int> wordCount;

    string word = "";
    for (char ch : text) {
        if (ch != ' ') {
            word += ch; 
        } else {
            if (!word.empty()) {
                wordCount[word]++;
                word = "";
            }
        }
    }

    if (!word.empty()) {
        wordCount[word]++;
    }

    for (auto it = wordCount.begin(); it != wordCount.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}