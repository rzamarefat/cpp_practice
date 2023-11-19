# include <iostream>
# include <cmath>

using namespace std;

int main() {
    double x = 3.14;
    double y = floor(x);
    double z = ceil(x);

    cout << "The org number is: " << x << " and after floor " << y << endl; 
    cout << "The org number is: " << x << " and after ceil " << z << endl; 
    
    return 0;

    
}