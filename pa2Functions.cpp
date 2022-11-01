#include <iostream>
#include <math.h>    
#include <cstring>
#include <string>
#include <time.h>
#include <fstream>

using namespace std;

void initialize(){
    cout << "EC327: Introduction to Software Engineering \n"
             "Fall 2022\n"
             "Programming Assignment 2 \n"
             "Value of Entries is: 10" << endl;
}

bool checkCode(char a){
    char codelist[16] = {'f','b','r','u','c','e','k','s','n','x','l','y','d','i','o','q'};
    int counter = 0;
    tolower(a);
    for (int i = 0; i < 16; i++){
        if(codelist[i] == a){
            counter = counter + 1;
        }
    }
    if (counter == 1){
        return true;
    } else{
        return false;
    }
}

int factorial(int num){
    int sum = 1;
    for (int i = 1; i <= num; ++i){
        sum *= i;
    }
    return sum;
}

int fibonacci(int n)
{
if (n <= 1)
    return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

double findSqrtValue(double num){
    return sqrt(num);
}

double naturalLog(double num){
    return log(num);
}

double areaCircle(double radius){
    double area = radius * radius * 3.14;
    return area;
}

double areaSquare(double length){
    return length * length;
}

int findNextOddValue(int num){
    if (num%2 == 0){
        return num + 1;
    }else{
        return num + 2;
    }
}

int findNextEvenValue(int num){
    if (num%2 == 1){
        return num + 1;
    }else{
        return num + 2;
    }
}

double findNyanCatValue(double num){
    return (pow((4 * num), num) + num + 10); 
}

double doMath(double num, char a){
    if(a == 's'){
        return sin(num);
    }else if( a == 'c'){
        return cos(num);
    }else{
        return exp(num);
    }
}

double lucky(double num){
    srand(time(NULL));
    return rand();
}

void writeDataToFile(const char *name){
    ifstream f;
    f.open(name);
    cout << f.is_open() <<endl;
}

void readDataFromFile(const char *name){
    ifstream r;
    r.open(name);
    string line;
    while(!r.eof()){
        r >> line;
        if(r.eof()){
            break;
        }
        cout << line <<endl;
    }
    r.close();
}
