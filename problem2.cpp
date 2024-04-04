#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int sum2(int a){
    if (a==1){
        return 3;
    }else{
        return pow(sum2(a-1),2)+3;
    }
}
int main() {
    int a;
    cin>>a;
    cout<<sum2(a);
    return 0;
}
