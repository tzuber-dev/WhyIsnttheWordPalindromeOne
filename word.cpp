#include <iostream>
#include "word.h"
#include<string>

using namespace std;

int main() {
    
    cout << "Provide a word: ";
    string word;
    cin >> word;

    if (is_palindrome(word))
        cout << word << " is a palindrome." << std::endl;
    else
        cout << word << " is not a palindrome." << std::endl;

    return 0;
}
