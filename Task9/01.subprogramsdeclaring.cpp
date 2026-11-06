// File: 01.subprogramsdeclaring.cpp
// Author: Guillermo Torres Sanchez
// Date: mié 04 nov 2026
// Time: 11:46
// Description: 'Declares subprograms, tests each one and prints any returned values'
// Distribution: CachyOS

#include <iostream>
#include <array>

const int INT_MIN = -2147483648;

const int N = 3;
typedef array<int, N> TVec;
using namespace std;

int main()
{
    void initArr0(TVec& a);
    void printArr(TVec a);
    void readArr(TVec& a);
    TVec readArr();
    int sumArr(TVec a);
    bool isIn(TVec a, int x);
    int indexOf(TVec a, int x);
    int count(TVec a, int x);
    bool anyReps(TVec a);
    int findPosFirstMax(TVec a);

    TVec v = {1, 2, 3};

    cout << "Initial v: ";
    printArr(v);
    cout << endl;

    cout << "Testing initArr0:" << endl;
    initArr0(v);
    cout << "After initArr0, v: ";
    printArr(v);
    cout << endl;

    cout << "Testing readArr(TVec&):" << endl;
    readArr(v);
    cout << "After readArr(TVec&), v: ";
    printArr(v);
    cout << endl;

    cout << "Testing readArr():" << endl;
    v = readArr();
    cout << "After v = readArr(), v: ";
    printArr(v);
    cout << endl;

    cout << "sumArr({1, 2, 3}): " << sumArr(TVec{1, 2, 3}) << endl;
    cout << "isIn({1, 2, 3}, 2): " << isIn(TVec{1, 2, 3}, 2) << endl;
    cout << "isIn({1, 2, 3}, 5): " << isIn(TVec{1, 2, 3}, 5) << endl;
    cout << "indexOf({1, 2, 3}, 2): " << indexOf(TVec{1, 2, 3}, 2) << endl;
    cout << "count({1, 2, 1}, 1): " << count(TVec{1, 2, 1}, 1) << endl;
    cout << "anyReps({1, 2, 3}): " << anyReps(TVec{1, 2, 3}) << endl;
    cout << "findPosFirstMax({1, 5, 3}): " << findPosFirstMax(TVec{1, 5, 3}) << endl;

    return 0;
}

void initArr0(TVec &a){
    a = {};
}

void printArr(TVec a){
    for (int i = 0; i<N; i++)
        cout << a[i] << " ";
}

void readArr(TVec& a){
    int value;
    for (int i = 0; i < N; i++){
        cout << "Enter value " << i << ": ";
        cin >> value;

        a[i] = value;
    }
}

TVec readArr(){
    TVec a;
    int value;
    for (int i = 0; i < N; i++){
        cout << "Enter value " << i << ": ";
        cin >> value;

        a[i] = value;
    }
    return a;
}

int sumArr(TVec a){
    int sum = 0;
    for (int i = 0; i < N; i++){
        sum+=a[i];
    }
    return sum;
}

bool isIn(TVec a, int x){
    bool isInside = false;
    for (int i = 0; i < N; i++) {
        if (a[i] == x)
            isInside = true;
    }
    return isInside;
}

int indexOf(TVec a, int x){
    bool firstOcurrence = true;
    int num;
    for (int i = 0; i < N; i++) {
        if (a[i] == x and firstOcurrence){
            num = i;
            firstOcurrence = false;
        }
    }

    if (not firstOcurrence)
        return num;
    else 
        return -1;
    
}

int count(TVec a, int x){
    int counter = 0;
    for (int i = 0; i < N; i++){
        if (a[i]== x)
            counter++;
    }
    return counter;
}

bool anyReps(TVec a){
    int number;
    bool rep = false;
    for(int i = 0; i < N; i++){
        number = a[i];
        for (int j = i; j < N; j++){
            if (number == a[j]){
                rep = true;
            }
        }
    }
    return rep;
}

int findPosFirstMax(TVec a){
    int maxNum = INT_MIN; // Min Limit C
    int max; // Max position
    for (int i = 0; i < N; i++){
        if (a[i] > maxNum){
            max = i;
        }
    }

    return max;
}