#include<iostream>
#include "fpage.cpp"
#include "mMenu.cpp"
#include "functions.cpp"
using namespace std;

int main() {
    char back1;
    char opt;

    fpage();
    cout << "\t\t\t\tPress any key to continue....";
    cin.ignore();
    cin.get();

    do {
        system("cls");
        mMenu();
        cout << "                                                                                                               Your answer: ";
        cin >> opt;

        switch (opt) {
            case '1':
                doBooking();
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                break;
            case '6':
                break;
        }

        cout << "Do you want to go back to the main menu? [Y/N]: ";
        cin >> back1;
    } while (back1 == 'y' || back1 == 'Y');

    return 0;
}
