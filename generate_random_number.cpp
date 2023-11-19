# include <iostream>
# include <cstdlib>


using namespace std;

int main() {
    long elapsedTime = time(nullptr);
    srand(elapsedTime);
    
    int number = rand() % 10;


    cout << "The random num is: " << number << endl;

    return 0;
}