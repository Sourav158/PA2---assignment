#include <iostream>
#include <math.h>    
using namespace std;

int gcd(int m, int n){
    int divider;
    for (int i = 1; i <= n; ++i){
        if(m%i == 0 && n%i == 0){
            divider = i;
        }
    }
    return divider;
}

int main(){
    int num1, num2;
    cout << "Enter the smaller number first and the larger number second"<< endl;
    cin >> num1;
    cin >> num2;
    cout << gcd(num1, num2);

}
