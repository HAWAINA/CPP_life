#include <iostream>

using namespace std;

struct Date
{
    int year;
};



struct Auto {
    int wheels;
    float speed;
    char color;

    Date since;
};

int main(int argc, const char * argv[]) {

    Auto shkoda;
    shkoda.color = 'r';
    shkoda.wheels = 4;
    shkoda.speed = 315.23;
    shkoda.since.year = 1999;
    
    Auto audi = {4, 300.23, 'b'};

    cout << "Audi speed: " << audi.speed << "\n" << "Shkoda speed: " << shkoda.speed << endl;

    cin.get();
    return 0;
}
