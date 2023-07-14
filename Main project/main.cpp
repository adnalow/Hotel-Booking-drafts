#include<iostream>
#include <stack>
#include <queue>
#include "fpage.cpp"
#include "mMenu.cpp"
#include "functions.cpp"
using namespace std;

int main() {
    char back1;
    char opt;

    fpage();
    cout << "\t\t\t\t\t\t\t\tPress any key to continue....";
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
                viewBookings();
                break;
            case '3':
                modifyBooking();
                break;
            case '4':
                feedbackSystem();
                break;
            default:
                break;
        }

        cout << "\t\t\t\t\t\t\t\tDo you want to go back to the main menu? [Y/N]: ";
        cin >> back1;
    } while (back1 == 'y' || back1 == 'Y');

    return 0;
}
