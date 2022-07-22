#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {

    int arr[3][2] = {{23, 34}, {1, 2}, {5, 7}};

    int arr[] = {3, 7, 5};

    int arr [2] = {34};

    cout << arr[0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << " " << arr [i][j];
    }
        cout << " " << arr[i];

    for (int i = 0; i < 3; i++)
        cin >> arr [i]; 

    for (int i = 0; i < 3; i++)
        cout << " " << arr[i];

    cin.get();
    return 0;
}
