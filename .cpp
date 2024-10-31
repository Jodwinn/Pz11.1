#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int* number = new int;

    cout << "Введіть число: ";
    cin >> *number;

    *number += 10;

    cout << "Число після +10: " << *number << endl;

    delete number;

    return 0;
}
