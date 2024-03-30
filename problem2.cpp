#include <iostream>
#include <iomanip>
using namespace std;
int sum2(int a){
    if (a==1){
        return 3;
    }else{
        return sum2(a-1)*sum2(a-1)+3;
    }
}
int main() {
    int a;
    cin>>a;
    cout<<sum2(a);
    return 0;
}
