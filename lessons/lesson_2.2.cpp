#include <iostream>

using namespace std;

// enum tree {tree_1, tree_2, tree_3};

enum mall {praking = -1, hall, many_shops, roof};


int main(int argc, const char *argv[]) {

    // cout <<tree_1 << " " << tree_2 << " " << tree_3 << endl;

    int floor;
    bool exit;

    while(!exit) { 
        cout << "Enter your floor(from -1 to 2): ";
        cin >> floor;
        switch(floor) {
            case praking:
                cout << "We on the -1 floor in the parking" << endl;
                break;
            case hall:
                cout << "We on the 0 floor in the hall" << endl;
                break;
            case many_shops:
                cout << "We on the 1 floor in the many shops" << endl;
                break;
            case roof:
                cout << "We on the 2 floor in the roof" << endl;
                break;
            default:
                cout << "Floors only from -1 to 2" << endl;
        }
        cout << "If you want to play again press 0 or press 1 to exit this game" << endl;
        cin >> exit;
    }
    cin.get();
    return 0;
}