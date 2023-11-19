#include <iostream>

using namespace std;


int main() {
    string name;
    cout << "Please enter your name: ";

    // If instead of getline you use 'cin' then when user enters his/her name with a space, cpp will ignore space and the anything after it.
    getline(cin, name);

    cout << "Hi, " << name << endl;

    return 0;
}