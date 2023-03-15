#include<iostream>
using namespace std;

int main(){
    //Declare the variables
    double n,x;

    //Input the number n
    cin >> n;

    //Calculate the nth number of the sequence using for loop
    for (double i; i<(n+1); i++) {
        x += i;

    }

    //Show the result
    cout << x;

    return 0;
}