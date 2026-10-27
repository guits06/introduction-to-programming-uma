// File: 02.computeEnumber.cpp
// Author: Guillermo Torres Sanchez
// Date: mar 27 oct 2026
// Time: 18:09
// Description: 'prints the first n prime numbers'
// Distribution: CachyOS

#include <iostream>
using namespace std;

int main()
{
    void printFirstNPrimes(int n); 
    printFirstNPrimes(100);   
}

void printFirstNPrimes(int n) {
    int numPrimes = 0;
    int number = 2;
    bool isPrime = true;
    while (numPrimes < n){

        for (int i = 2; i<number;i++){
            if (number % i == 0){
                isPrime = false;
            }
        }
        
        if (isPrime){
            if (number == 2){
                cout << "2";
                numPrimes++;
            }else{
                cout << ", " << number;
                numPrimes++;
        }}
        
        isPrime = true;
        number++;
    }
        
    } 

