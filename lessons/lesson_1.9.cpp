#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {

    // int *ptrnum = new int;
    // *ptrnum = 7;

    // cout << *ptrnum << endl;
    // delete ptrnum;

    float *ptrarray = new float[10]; 

    for (int i = 0; i < 10; i++) 
        ptrarray[i] = rand () % 80 + i;
    for (int i = 0; i < 10; i++)
        cout << ptrarray[i] << " ";

    delete [] ptrarray;   

    cin.get();
    return 0;
}
