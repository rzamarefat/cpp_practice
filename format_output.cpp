#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    cout << setw(10) << "Stream" << endl;
    cout << left << setw(10) << "Stream" << endl;
    cout << setw(10) << "Video" << endl;


    cout << fixed << setprecision(10) << 12.3456 << endl;
    
    return 0;
}