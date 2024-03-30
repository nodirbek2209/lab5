#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
using namespace std;
int fiba(int n){

    if(n<=1){
        return n;
    }else{
        return fiba(n-1)+fiba(n-2);
    }


}
int main() {
    int n;
    cin>>n;

    for(int i=n;i>=0;i--){
        cout<<fiba(i)<<" ";
    }

    return 0;
}
