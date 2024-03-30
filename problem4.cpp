#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double sum(double a){
    if(a==1){
        return 1;
    }else{
        return 1.0000/a*pow(-1,a-1)+sum(a-1);
    }

}
int main() {
    int a;
    cin>>a;
    cout<<setprecision(4)<<sum(a);

    return 0;
}
