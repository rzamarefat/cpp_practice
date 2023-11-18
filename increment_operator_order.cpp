# include <iostream> 

using namespace std;

int main(){
    int x = 10;


    // Please beware of the difference between the following lines
    int y = x++;
    int z = ++x;

    cout << "The postfix: " << y << endl;
    cout << "The prefix: " << z << endl;

    return 0;

}