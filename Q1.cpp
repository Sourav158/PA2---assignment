#include<iostream>
#include <cstring>
#include<math.h>
#include <cstdlib> 
#include <fstream>
#include <ctime>
#include "pa2Functions.h"
using namespace std;

extern ofstream file;
extern ifstream read;
extern const int Entries = 10;

int main(){
    initialize();

    int counter = 1;    
    char choice;
    bool running = true;

    double first, last, delta;

    while(running == true){
        cout << "Please enter command code: ";
        if(read.is_open()){
            read >> choice;
            cout << choice << endl;
        }
        else if(!read.is_open()){
            cin >> choice;
        }
        running = checkCode(choice);
        if(running == true){
            if(file.is_open()){
                file<<choice<<endl;
            }

            switch (choice){
                case 'f': case 'F':
                    cout << "Enter one parameter: ";
                    if(read.is_open()){
                        if(read.eof() && read >> first){
                            read.close();
                        }
                        cout << first << endl;
                    }
                    else if(!read.is_open()){
                        cin >> first;
                    }
                    if(file.is_open()){
                        file << first << endl;
                        cout << file.is_open()<<endl;
                    }
                    cout << "The factorial of: "<< first << " is "<< factorial(first)<<endl;
                    break;

                case 'b': case 'B':
                    cout << "Enter first parameter: ";
                    if(read.is_open()){
                        if(read.eof() && read >> first){
                            read.close();
                        }
                        cout << first << endl;
                    }
                    else if(!read.is_open()){
                        cin >> first;
                    }
                    if(file.is_open()){
                        file << first << endl;
                    }
                    cout << "The fib num at "<< first << " is " << fibonacci(first) << endl;
                    break;

                case 'r': case 'R':
                    cout << "Enter first last delta: ";
                    if(read.is_open()){
                        if(read.eof() && read >> first >> last >> delta){
                            read.close();
                        }
                        cout << first << " " << last << " " << delta<<endl;
                    }
                    else if(!read.is_open()){
                        cin >> first >> last >> delta;
                    }
                    if(file.is_open()){
                        file << first << " " << last << " "<< delta <<endl;
                    }
                    while(counter <= Entries && first <= last){
                        cout << findSqrtValue(first) << " ";
                        first = first + delta;
                        counter = counter + 1;
                    }
                    cout<<endl;
                    break;

                case 'u': case 'U':
                    cout << "Enter first last delta: ";
                    if(read.is_open()){
                        if(read.eof() && read >> first >> last >> delta){
                            read.close();
                        }
                        cout << first << " " << last << " " << delta <<endl;
                    }
                    else if(!read.is_open()){
                        cin >> first >> last >> delta;
                    }
                    if(file.is_open()){
                        file << first << " " << last << " " << delta << endl;
                    }
                    while(counter <= Entries && first <= last){
                        cout << areaSquare(first) << " ";
                        first = first + delta;
                        counter = counter + 1;
                    }
                    cout << endl;
                    break;

                case 'c': case 'C':
                    cout << "Enter first last delta: ";
                    if(read.is_open()){
                        if(read.eof() && read >> first >> last >> delta){
                            read.close();
                        }
                        cout << first << " " << last << " " << delta << endl;
                    }
                    else if(!read.is_open()){
                        cin >> first >> last >> delta;
                    }
                    if(file.is_open()){
                        file << first  << " " << last << " " << delta << endl;
                    }
                    while(counter <= Entries && first <= last){
                        cout <<areaCircle(first) << " ";
                        first = first + delta;
                        counter = counter + 1;
                    }
                    cout<<endl;
                    break;

                case 'e': case 'E':
                    cout << "Enter first and last: ";
                    if(read.is_open()){
                        if(read.eof() && read >> first >> last){
                            read.close();
                        }
                        cout << first <<" "<< last << endl;
                    }
                    else if(!read.is_open()){
                        cin >> first >> last;
                    }
                    if(file.is_open()){
                        file << first << " " << last << endl;
                    }
                    while(counter <= Entries && first < last){
                        cout << findNextEvenValue(first) << " ";
                        first = first + 2;
                        counter = counter + 1;
                    }
                    cout << endl;
                    break;

                case 'k': case 'K':
                    cout << "Enter first last delta: ";
                    if(read.is_open()){
                        
                        if(read.eof() && read >> first >> last >> delta){
                            read.close();
                        }
                        cout << first <<" "<< last <<" "<< delta << endl;
                    }
                    else if(!read.is_open()){
                        cin >> first >> last >> delta;
                    }
                    if(file.is_open()){
                        file<<first<< " " << last << " "<<delta<<endl;
                    }
                    while(counter <= Entries && first <= last){
                        cout <<lucky(first) <<" ";
                        first = first + delta;
                        counter = counter + 1;
                    }
                    cout<<endl;
                    break;

                case 's': case 'S':
                    cout << "Enter first last delta: ";
                    if(read.is_open()){
                        if(read.eof() && read >> first >> last >> delta){
                            read.close();
                        }
                        cout << first <<" "<< last <<" "<< delta<<endl;
                    }
                    else if(!read.is_open()){
                        cin >> first >> last >> delta;
                    }
                    if(file.is_open()){
                        file<<first<< " " << last << " "<<delta<<endl;
                    }
                    while(counter <= Entries && first <= last){
                        cout <<doMath(first,choice) <<" ";
                        first = first + delta;
                        counter = counter + 1;
                    }
                    cout<<endl;
                    break;

                case 'n': case 'N':
                    cout << "Enter first last delta: ";
                    if(read.is_open()){
                        if(read.eof() && read >> first >> last >> delta){
                            read.close();
                        }
                        cout << first <<" "<< last <<" "<< delta<<endl;
                    }
                    else if(!read.is_open()){
                        cin >> first >> last >> delta;
                    }
                    if(file.is_open()){
                        file<< first << " " << last << " "<<delta<<endl;
                    }
                    while(counter <= Entries && first <= last){
                        cout << doMath(first,choice) <<" ";
                        first = first + delta;
                        counter = counter + 1;
                    }
                    cout<<endl;
                    break;

                case 'x': case 'X':
                    cout << "Enter first last delta: ";
                    if(read.is_open()){
                        if(read.eof() && read >> first >> last >> delta){
                            read.close();
                        }
                        cout << first <<" "<< last <<" "<< delta<<endl;
                    }
                    else if(!read.is_open()){
                        cin >> first >> last >> delta;
                    }
                    if(file.is_open()){
                        file<<first<< " " << last << " "<<delta<<endl;
                    }
                    while(counter <= Entries && first <= last){
                        cout <<doMath(first,choice) <<" ";
                        first = first + delta;
                        counter = counter + 1;
                    }
                    cout<<endl;
                    break;

                case 'l': case 'L':
                    cout << "Enter first last delta: ";
                    if(read.is_open()){
                        if(read.eof() && read >> first >> last >> delta){
                            read.close();
                        }
                        cout << first <<" "<< last << " " << delta << endl;
                    }
                    else if(!read.is_open()){
                        cin >> first >> last >> delta;
                    }
                    if(file.is_open()){
                        file<<first<< " " << last << " " << delta << endl;
                    }
                    while(counter <= Entries && first <= last){
                        cout << naturalLog(first) <<" ";
                        first = first + delta;
                        counter = counter + 1;
                    }
                    cout << endl;
                    break;

                case 'y': case 'Y':
                    cout << "Enter first last delta: ";
                    if(read.is_open()){
                        if(read.eof() && read >> first >> last >> delta){
                            read.close();
                        }
                        cout << first <<" "<< last <<" "<< delta<<endl;
                    }
                    else if(!read.is_open()){
                        cin >> first >> last >> delta;
                    }
                    if(file.is_open()){
                        file << first << " " << last << " " << delta <<endl;
                    }
                    while(counter <= Entries && first <= last){
                        cout << findNyanCatValue(first) << " ";
                        first = first + delta;
                        counter = counter + 1;
                    }
                    cout<<endl;
                    break;

                case 'd': case 'D':
                    cout << "Enter first and last: ";
                    if(read.is_open()){  
                        if(read.eof() && read >> first >> last){
                            read.close();
                        }
                        cout << first << " " << last << endl;
                    }
                    else if(!read.is_open()){
                        cin >> first >> last;
                    }
                    if(file.is_open()){
                        file << first << " " << last <<endl;
                    }
                    while(counter <= Entries && first < last){
                        cout << findNextOddValue(first) << " ";
                        first = first + 2;
                        counter = counter + 1;
                    }
                    cout<<endl;
                    break;

                case 'q': case 'Q':
                    if(file.is_open()){
                        file.close();
                    }
                    valid = false;
                    break;
            }

        }
            
    }
}
