#include <iostream>
#include <iomanip>
using namespace std;
int factorial(int a,int b){
    if(a==b){
        return b;
    }else{
        return a*factorial(a-1,b);
    }

}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<factorial(a,b+1)/ factorial(a-b,1);

    return 0;
}
