#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {

    int i = 0;
    i = 12;

    const float pi = 3.141592653589793;

    cout << pi << endl;

    int value = 0;
    int *ptrvalue = &value;
    int **ptr_ptrvalue = &ptrvalue;

    cin >> **ptr_ptrvalue;
    cout << &value << " - " << ptrvalue << endl;

    int value = 0;
    int &reference = value;
    
    cin >> reference;
    cout << value << endl;

    cin.get();
    return 0;
}
