#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char *argv[]) {

    char text[50];  

    // ofstream textfile("text2.txt");
    // // file.open("text.txt");
    // textfile << "Hi! Everything is pretty";
    // textfile.close();

    ifstream file("text.txt");
    if (file.is_open()) 
        cout << "Error: Cannot open file " << endl;
    else {
        file >> text;
        cout << "Text: " << text << endl;

        file.getline(text, 50);
        file.close();
    }

    cin.get();
    return 0;
}
