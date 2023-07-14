#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    string userInput;

    cin>>userInput;

    cout << "+===================+" << endl;
    cout << "+                   +" << endl;
    cout << "+ ";
    cout << left << setw(10) << userInput;
    cout << " +" << endl;
    cout << "+                   +" << endl;
    cout << "+===================+" << endl;

    return 0;
}
