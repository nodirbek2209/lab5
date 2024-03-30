#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
using namespace std;
string reverse(string n){
    string b;
    int len=n.length();
    for(int i=len-1;i>=0;i--){
        b=b+n[i];
    }
    return b;
}



int main() {
    string n;
    cin>>n;
    if (reverse(n)==n){
        cout<<1;
    }else{
        cout<<0;
    }




    return 0;
}
