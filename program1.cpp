#include<iostream>
using namespace std;

int main() {
    //Declare the variables
    double v, d, t;

    //Input values to variables
    cout << "Input the velocity (in km/h) \n";
    cin >> v;
    cout << "Input the distance (in km) \n";
    cin >> d;

    //Calculate the elapsed time
    t = d/v;

    //Print the result
    cout << "Elapsed time is  " << t << " hour";


    return 0;
}