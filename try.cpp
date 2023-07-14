#include <iostream>
#include <string>
using namespace std;

class room {
public:
    string type;
};

int main() {
    int numItems;
    cout << "Enter the number of items to add: ";
    cin >> numItems;

    if (numItems <= 0) {
        cout << "Invalid number of items. Exiting the program." << endl;
        return 0;
    }

    room category;
    string items[numItems];

    for (int i = 0; i < numItems; i++) {
        cout << "Enter an item for category.type (or 'q' to quit): ";
        cin >> category.type;

        if (category.type == "q" || category.type == "Q") {
            break; // Exit the loop if 'q' is entered
        }

        items[i] = category.type;
    }

    cout << "Items added to category.type:\n";
    for (int i = 0; i < numItems; i++) {
        if (!items[i].empty()) {
            cout << items[i] << endl;
        }
    }

    return 0;
}
