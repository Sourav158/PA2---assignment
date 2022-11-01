#include <iostream>
#include <math.h>    
using namespace std;

double series(int n){
    if (n == 1)
    return (2.0/5.0);
    else
    return (series(n-1) + ((2.0*n)/(3.0*n + 2.0)));
}

int main(){
    int num;
    cout << "Enter a number"<< endl;
    cin >> num;
    cout << series(num);
}

