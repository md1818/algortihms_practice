#include <iostream>
using namespace std;

double fact(int n) {

    if (n == 1) {
        return 1;
    }
    else
        return n * fact(n - 1); 
}

int calculateFact(){

    int num; 
    cout<<"Please enter a number for factorial : ";
    cin >> num; 
    cout << "\nFactorial of Number is : " << fact(num) << endl; 
    return 0;
}
