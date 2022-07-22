#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // int num = 10;
    // float pi = 3.14;
    // cout << "Pi is " << num;

    // bool isAway = true;
    // int num;
    // char symbol = 'd';

    // cout << symbol;

    // cin >> num;
    // cout << "User wrote - " << num;

    int num_1, num_2, result;

    cin >> num_1;
    cin >> num_2;
    result = num_1 + num_2;
    cout << num_1 << " + " << num_2 << " = " << result << endl;

    result++;
    cout << result << endl;

    cin.get();
    return 0;
}