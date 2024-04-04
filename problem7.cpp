#include <iostream>
#include <string>

using namespace std;

string substring(const string& str, int i, int j) {
    // Base case: if i is greater than j or j is out of range, return an empty string
    if (i > j || j >= str.length()) {
        return "";
    }
    // Base case: if i is 0, return the substring up to position j
    if (i == 0) {
        return str.substr(0, j + 1);
    }
    // Recursive case: return substring excluding the first character
    return substring(str.substr(1), i - 1, j - 1);
}

int main() {
    string s;
    
    getline(cin, s);
    int a,b;
    cin>>a>>b;
    
    cout<<substring(s,a,b);
    return 0;
}
