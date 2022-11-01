#include<iostream>
#include<math.h>
using namespace std;

int *ReverseMultiply(int *list, int size){
    int *sec_array = new int[(size * 2) + 1];
    int index;
    int product = 1;

    for (int i = 0; i <= (size * 2); i++){
        if (i <= (size - 1)){
            *(sec_array + i) = *(list + i);
            product = product*(*(sec_array + i));  
        }
        else if ((i >= size) && (i < (size*2))){
            *(sec_array + i) = *(list + i - index);
            product = product*(*(sec_array + i));
            index = index + 2;
        }
    }
    *(sec_array + (size * 2)) = product;
    return sec_array;
}

int *ReverseAdd(int *list, int size){
    int *sec_array = new int[(size * 2) - 1];
    int index1 = 1, index2 = 2;

    for (int i = 0; i < ((size * 2) -1); i++){
        if (i <= (size - 1)){
            *(sec_array + i) = *(list + i);
        }
        else if((i >= size) && (i < ((size * 2) -1))){
            *(sec_array + i) = *(list + i - index1) + *(list + i - index2);
            index1 = index1 + 2;
            index2 = index2 + 2;
        }
    }
    return sec_array;
}

int main(){
    int arraysize;

    cout << "How many entries: " << endl;
    cin >> arraysize;

    int *numarray = new int[arraysize];
    int *sec_array;
    sec_array = numarray;

    for (int i = 0; i < arraysize; i++){
        cout << "Enter item number " << i << ": " << endl;
        cin >> *(numarray + i);
    }

    int *product = ReverseMultiply(numarray, arraysize);
    int *sum = ReverseAdd(numarray, arraysize);
    cout << " _______ " << endl;

    cout << "The original array is :";
    for(int i = 0; i < arraysize; i++){
        cout << *(numarray + i) << " ";
    }
    cout << ".The address of the first item is: " << numarray << endl;

    cout << "One array is: ";
    for (int i = 0; i < ((arraysize * 2) + 1); i++){
        cout << *(product + i) << " ";
    }
    cout << ".The address of the first item is: " << product << endl;

    cout << "One array is: ";
    for(int i = 0; i < ((arraysize * 2) - 1); i++){
        cout << *(sum + i)<<" ";
    }
    cout << ".The address of the first item is: " << sum << endl; 
}
