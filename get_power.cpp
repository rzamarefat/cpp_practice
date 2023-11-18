#include <iostream>
#include <math.h>

using namespace std;


int main() {

    double baseNumber;
    double powerNumber;

    cout << "Please enter the base number: " << endl;
    cin >> baseNumber;
    cout << "Please enter the power number: " << endl;
    cin >> powerNumber;

    double result = pow(baseNumber, powerNumber);

    cout << "The base number is: " << baseNumber << " and the power number is: " << powerNumber << endl;
    cout << "The result is: " << result << endl;

    return 0;
}