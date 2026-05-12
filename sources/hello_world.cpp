#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Введите текст: ";
    getline(cin, text);

    cout << "Echo: " << text << endl;

    return 0;
}