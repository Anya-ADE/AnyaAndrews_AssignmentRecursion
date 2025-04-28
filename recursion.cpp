#include <iostream>
using namespace std;

int sumN(int n);
int fibonacci(int n);
void printBinary(int n);
int sumDigits(int n);
void printReverse(int arr[], int size);

int main() {
    int arr[]= {1, 2, 3, 4, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "The sum is: "  << sumN(10) << endl;
    cout << "The fibonacci number is: "<< fibonacci(12)<< endl;
    printBinary(23);
    cout << endl;
    cout << "The sum of the digits of a number is: " << sumDigits(17) << endl;
    printReverse(arr, size);
    cout << endl;

    return 0;
}

int sumN(int n) {
    if(n > 0) {
     return n + sumN(n - 1);
    }
    else {
        return 0;
    }
}

int fibonacci(int n){
    if (n <= 0) {
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else{
    return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printBinary(int n){
    if (n == 0) {
      return;
    }
    else {    
    printBinary(n / 2); 
        cout << n % 2;   
      } 
    }

int sumDigits(int n){
    if (n > 0) {
    return (n % 10) + sumDigits(n / 10);
    }
    else {
        return 0;
    }
}

void printReverse(int arr[], int size){
    if (size <= 0) {
        return;
      } 
      else {
        cout << arr[size - 1] << " "; 
        printReverse(arr, size - 1);  
      }
    }
