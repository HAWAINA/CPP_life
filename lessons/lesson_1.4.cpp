#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
        // строки просто так в С++ нельзя использовать  
    // cout << "1-random number = " << 1 + rand() % 80 << endl;
    // cout << "2-random number = " << 1 + rand() % 80 << endl;
    // cout << "3-random number = " << 1 + rand() % 80 << endl;
    // cout << "4-random number = " << 1 + rand() % 80 << endl;
    // cout << "5-random number = " << 1 + rand() % 80 << endl;
    // cout << "6-random number = " << 1 + rand() % 80 << endl;
    // cout << "7-random number = " << 1 + rand() % 80 << endl;
    // cout << "8-random number = " << 1 + rand() % 80 << endl;

    // string name = "HAWAINA";

    string name, name_1;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your name_1: ";
    getline(cin, name_1);

    cout << name + name_1;
    
    // if (name == name_1)
    //     cout << "equal";
    // else
    //     cout << "not equal";
    // if (name.length() != 0)
    //     cout << "Your name is " << name;
    // else
    //     cout << "Error";


    cin.get();
    return 0;
} 