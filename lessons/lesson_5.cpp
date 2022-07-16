#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    // int counter;

    // можно также в обратном порядке сделать
    for ( int counter = 0; counter < 10; counter++) {
        cout << " " << counter;
    }

    // цикл while
    int i = 0;

    while (i < 20)
    {
        cout << " " << i;
        i++;
    }
    
    // цикл do while
    int i = 0;

    do {
        cout << " " << i;
        i++;
    } while (i < 0);

    // continue(продолжение цикла) and break(остановка цикла)
    for ( int counter = 1; counter <= 10; counter++) {
        if (counter % 5 == 0)
            continue;
        cout << " " << counter;
    }


    cin.get();
    return 0;
}    
