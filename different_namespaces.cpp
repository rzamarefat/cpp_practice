#include <iostream>

using namespace std;


namespace spaceOne{
    float x = 1.6;
}

namespace spaceTwo{
    bool x = true;

}

int main() {
    float x = 8.0;
    cout << "The x in main namespace is: " << x << endl;

    cout << "The x in spaceOne is: " << spaceOne::x << endl;
    cout << "The x in spaceTwo is: " << spaceTwo::x << endl;


    return 0;
}