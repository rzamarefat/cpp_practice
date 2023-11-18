#include <iostream>

using namespace std; 

int main(){

    int firstNum = 10;
    int secondNum = 20;

    int holder;

    holder = firstNum;
    firstNum = secondNum;
    secondNum = holder;


    cout << "The first number is " << firstNum << " and the second number is " << secondNum;
    
    return 0;

    
}
