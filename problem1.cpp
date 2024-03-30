#include <iostream>
#include <iomanip>
using namespace std;
double sum(double a){
    if (a==1){
        return 4;
    }else{
        return 0.5000000000*sum(a-1)-1;
    }
}
int main() {
    double a;
    cin>>a;
    cout<<setprecision(10)<<sum(a);
    return 0;
}
