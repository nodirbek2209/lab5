#include <iostream>
#include <string>
using namespace std;

string substring_recursive(const string& str, int i, int j) {
    // Base case: if i and j are equal, return the character at position i
    if (i == j) {
        return string(1, str[i]);
    } else {
        // Recursive case: append the character at position i and call the function with incremented i
        return str[i] + substring_recursive(str, i + 1, j);
    }
}

int main() {
    string input_string;
    cin>>input_string;
    int start_index;
    int end_index;
    cin>>start_index>>end_index;
    cout << substring_recursive(input_string, start_index, end_index) << endl; 

    

    return 0;
}
