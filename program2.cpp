#include<iostream>
using namespace std;

int main() {
    //Declare the variables
    int a,b,c,d;
    int first,second,diff;

    //Input values to variables
    cout << "Input the first hour data \n";
    cin >> a;
    cout << "Input the first minute data \n";
    cin >> b;
    cout << "Input the second hour data \n";
    cin >> c;
    cout << "Input the second minute data \n";
    cin >> d;

    //Calculate the time difference
    first = a*60 + b;
    second = c*60 + d;

    diff = abs(first-second);

    //Print the result
    cout << "The difference between the two times is " << diff << " minutes";


    return 0;
}
