#include <iostream>
#include <string>

using namespace std;

// Recursive function to check if a string is a palindrome
bool isPalindrome(const string& str, int start, int end) {
    // Base case: if start >= end, then the substring is either empty or has only one character
    if (start >= end) {
        return true;
    }
    // Recursive case: compare characters at start and end positions
    if (str[start] != str[end]) {
        return false;
    }
    // Move the start index forward and the end index backward
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string input;
    
    getline(cin, input);

    // Call the isPalindrome function to check if the input string is a palindrome
    if (isPalindrome(input, 0, input.length() - 1)) {
        cout <<1<< endl;
    } else {
        cout <<0<< endl;
    }

    return 0;
}
