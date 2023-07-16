#include<iostream>
#include <stack>
#include <queue>
#include <fstream>
#include <chrono>
#include <sstream>
using namespace std;

string opt2;
string roomChoice;


void db1(){

    system("cls");
    cout << "\t\t\t\t\t\t\t\tPress any key to continue....";
    cin.ignore();
    cin.get();

}

void db2(){
    
    std::cout<<"                                                     Enter your answer ;Regular, Advance, Premium: ";
    std::cin>>opt2;
}

void regularPanel(){

}

void advancePanel(){
  
}

void premiumPanel(){
}

void db3(){
    
    if(opt2 == "Regular" || opt2 == "regular"){
        char c;
        bool flag=false;
        do{
         system("cls");
         regularPanel();
        std::cout<<"                                                 Is this the room category that you want?[Y][N]";
        std::cin>>c;
        if(c == 'y' || c == 'Y'){
            flag = true;
            continue;
        } else if(c == 'N' || c == 'n'){
            system("cls");
            db2();
        } else {
            std::cout << "Invalid Choice!";
            flag = false;
        }
        }while(flag==false);

    }else if(opt2 == "Advance" || opt2 == "advance"){
        char c;
        bool flag=false;
        do{
         system("cls");
         advancePanel();
        std::cout<<"                                                 Is this the room category that you want?[Y][N]";
        std::cin>>c;
        if(c == 'y' || c == 'Y'){
            flag = true;
            continue;
        } else if(c == 'N' || c == 'n'){
            system("cls");
            db2();
        } else {
            std::cout << "Invalid Choice!";
            flag = false;
        }
            }while(flag==false);

    }else if(opt2 == "Premium" || opt2 == "Premium"){
        char c;
        bool flag=false;
        do{
         system("cls");
         premiumPanel();
        std::cout<<"                                                 Is this the room category that you want?[Y][N]";
        std::cin>>c;
        if(c == 'y' || c == 'Y'){
            flag = true;
            continue;
        } else if(c == 'N' || c == 'n'){
            system("cls");
            db2();
        } else {
            std::cout << "Invalid Choice!";
            flag = false;
        }
            }while(flag==false);
    }


  }


  struct Node {
    string noInd;
    string name;
    string noBed;
    string stayTime;
    string roomChoice;
    string roomCategory;
    Node* next;
};

Node* head = NULL;

void InsertNode(string noInd, string name, string noBed, string stayTime, string roomChoice) {
    Node* n = new Node();
    n->noInd = noInd;
    n->name = name;
    n->noBed = noBed;
    n->stayTime = stayTime;
    n->roomChoice = roomChoice;
    n->next = head;
    head = n;

    // Generate a unique filename using timestamp
    auto timestamp = chrono::system_clock::now();
    auto timestampSeconds = chrono::duration_cast<chrono::seconds>(timestamp.time_since_epoch()).count();
    string filename = "booking_" + to_string(timestampSeconds) + ".txt";

    // Open the file for writing
    ofstream outFile(filename);
    ofstream allBookingsFile("allbookings.txt", ios::app); // Open "allbookings.txt" in append mode

    if (outFile.is_open() && allBookingsFile.is_open()) {
        // Write the information to the unique file
        outFile << "Name of the booker: " << n->name << endl;
        outFile << "No. Of individuals: " << n->noInd << endl;
        outFile << "NO. of bed to be used: " << n->noBed << endl;
        outFile << "Staying time: " << n->stayTime << endl;
        outFile << "Room Category: " << opt2 << endl;
        outFile << "Room Number: " << n->roomChoice << endl;

        int x = stoi(n->stayTime);
        if(opt2 == "regular" || opt2 == "Regular"){
            int cost = x * 350;
            outFile << "Total cost: " << cost << endl;

            outFile << endl;

            // Write the information to "allbookings.txt"
            allBookingsFile << "Name of the booker: " << n->name << endl;
            allBookingsFile << "No. Of individuals: " << n->noInd << endl;
            allBookingsFile << "NO. of bed to be used: " << n->noBed << endl;
            allBookingsFile << "Staying time: " << n->stayTime << endl;
            allBookingsFile << "Room Category: " << opt2 << endl;
            allBookingsFile << "Room Number: " << n->roomChoice << endl;
            allBookingsFile << "Total cost: " << cost << endl;

            allBookingsFile << endl;

            outFile.close();
            allBookingsFile.close();
        }else if(opt2 == "advance" || opt2 == "Advance"){
            int cost = x * 750;
            outFile << "Total cost: " << cost << endl;

            outFile << endl;

            // Write the information to "allbookings.txt"
            allBookingsFile << "Name of the booker: " << n->name << endl;
            allBookingsFile << "No. Of individuals: " << n->noInd << endl;
            allBookingsFile << "NO. of bed to be used: " << n->noBed << endl;
            allBookingsFile << "Staying time: " << n->stayTime << endl;
            allBookingsFile << "Room Category: " << opt2 << endl;
            allBookingsFile << "Room Number: " << n->roomChoice << endl;
            allBookingsFile << "Total cost: " << cost << endl;

            allBookingsFile << endl;

            outFile.close();
            allBookingsFile.close();
        }else if(opt2 == "premium" || opt2 == "Premium"){
            int cost = x * 1000;
            outFile << "Total cost: " << cost << endl;

            outFile << endl;

            // Write the information to "allbookings.txt"
            allBookingsFile << "Name of the booker: " << n->name << endl;
            allBookingsFile << "No. Of individuals: " << n->noInd << endl;
            allBookingsFile << "NO. of bed to be used: " << n->noBed << endl;
            allBookingsFile << "Staying time: " << n->stayTime << endl;
            allBookingsFile << "Room Category: " << opt2 << endl;
            allBookingsFile << "Room Number: " << n->roomChoice << endl;
            allBookingsFile << "Total cost: " << cost << endl;

            allBookingsFile << endl;

            outFile.close();
            allBookingsFile.close();
        }

    } else {
        cout << "Unable to open file for writing." << endl;
    }
}

void storeItemsToArray(std::string* items, int size) {
    Node* curr = head;
    int index = 0;

    while (curr != nullptr && index < size) {
        items[index] = curr->name;
        curr = curr->next;
        index++;
    }

}

bool isRoomAvailable(string roomChoice) {
    Node* curr = head;
    while (curr != nullptr) {
        if (curr->roomChoice == roomChoice) {
            return false;  // Room is already claimed
        }
        curr = curr->next;
    }
    return true;  // Room is available
}

void roomPanelReg() {
    system("cls");
    bool flag = true;
    do {

        cout << "\t\t\t\t\tInsert the room that you want to claim: ";
        cin >> roomChoice;
        if (isRoomAvailable(roomChoice)) {
            flag = false;
        } else {
            cout << "\t\t\t\t\tRoom is already claimed. Please choose another room." << endl;
        }
    } while (flag);
}

void roomPanelAdv() {
    system("cls");
    bool flag = true;
    do {
        cout << "\t\t\t\t\tInsert the room that you want to claim: ";
        cin >> roomChoice;
        if (isRoomAvailable(roomChoice)) {
            flag = false;
        } else {
            cout << "\t\t\t\t\tRoom is already claimed. Please choose another room." << endl;
        }
    } while (flag);
}

void roomPanelPrem() {
    system("cls");
    bool flag = true;
    do {
        system("cls");
        cout << "\t\t\t\t\tInsert the room that you want to claim: ";
        cin >> roomChoice;
        if (isRoomAvailable(roomChoice)) {
            flag = false;
        } else {
            cout << "\t\t\t\t\tRoom is already claimed. Please choose another room." << endl;
        }
    } while (flag);
}


void receipt() {
    system("cls");
    cout << "\n\n\t\t\t\t\t\t\t\tRECEIPT" << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------" << endl;

    // Read and display the receipt from the specific transaction's text file
    auto timestamp = chrono::system_clock::now();
    auto timestampSeconds = chrono::duration_cast<chrono::seconds>(timestamp.time_since_epoch()).count();
    string filename = "booking_" + to_string(timestampSeconds) + ".txt";

    ifstream inFile(filename);
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << "\t\t\t\t\t\t\t\t" << line << endl;
        }

        inFile.close();
    } else {
        cout << "Unable to open receipt file for reading." << endl;
    }

    cout << "\n\n\t\t\t\t\tPress any key to continue....";
    cin.ignore();
    cin.get();
}

  void db4(){
    string noInd,name, noBed, stayTime;
    if(opt2 == "Regular" || opt2 == "regular"){
        bool flag=true;
        do{
         system("cls");
         regularPanel();
                std::cout << "\t\t\t\t\tName of the booker: ";
                std::cin >> name;
                std::cin.ignore();  // Ignore the newline character
                std::cout << "\t\t\t\t\tNo. of individuals that will use the room: ";
                getline(std::cin, noInd);
                std::cout << "\t\t\t\t\tHow many beds to be used? ";
                getline(std::cin, noBed);
                std::cout << "\t\t\t\t\tHow many hours to stay? ";
                getline(std::cin, stayTime);

                roomPanelReg();
                InsertNode(noInd, name, noBed, stayTime, roomChoice);
            flag = false;
            continue;
        }while(flag == true);

    }else if(opt2 == "Advance" || opt2 == "advance"){
        bool flag=true;
        do{
         system("cls");
         advancePanel();
                std::cout << "\t\t\t\t\tName of the booker: ";
                std::cin >> name;
                std::cin.ignore();  // Ignore the newline character
                std::cout << "\t\t\t\t\tNo. of individuals that will use the room: ";
                getline(std::cin, noInd);
                std::cout << "\t\t\t\t\tHow many beds to be used? ";
                getline(std::cin, noBed);
                std::cout << "\t\t\t\t\tHow many hours to stay? ";
                getline(std::cin, stayTime);

                roomPanelAdv();
                InsertNode(noInd, name, noBed, stayTime, roomChoice);

            flag = false;
            continue;
        }while(flag == true);
    

    }else if(opt2 == "Premium" || opt2 == "premium"){
        bool flag=true;
        do{
         system("cls");
         premiumPanel();

                std::cout << "\t\t\t\t\tName of the booker: ";
                std::cin >> name;
                std::cin.ignore();  // Ignore the newline character
                std::cout << "\t\t\t\t\tNo. of individuals that will use the room: ";
                getline(std::cin, noInd);
                std::cout << "\t\t\t\t\tHow many beds to be used? ";
                getline(std::cin, noBed);
                std::cout << "\t\t\t\t\tHow many hours to stay? ";
                getline(std::cin, stayTime);

                roomPanelPrem();
                InsertNode(noInd, name, noBed, stayTime, roomChoice);
            flag = false;
            continue;
        }while(flag == true);
    
    }
    

}


void doBooking() {
    system("cls");
    db1();
    system("cls");
    db2();
    system("cls");
    db3();
    system("cls");
    db4();
    system("cls");
    receipt();
}

void deleteBooking() {
    string name;
    cout << "\t\t\t\t\t\t\t\tEnter the name of the booker to delete the booking: ";
    cin.ignore();
    getline(cin, name);

    // Open the "allbookings.txt" file for reading
    ifstream inFile("allbookings.txt");
    if (inFile.is_open()) {
        string line;
        string fileContent;
        bool bookingFound = false;
        while (getline(inFile, line)) {
            if (line.find("\t\t\t\t\t\t\t\tName of the booker: " + name) != string::npos) {
                // Skip the lines corresponding to the booking with the inputted name
                for (int i = 0; i < 7; i++) {
                    getline(inFile, line);
                }
                bookingFound = true;
            } else {
                // Append the lines to the updated file content
                fileContent += line + "\n";
            }
        }
        inFile.close();

        if (bookingFound) {
            // Rewrite the "allbookings.txt" file with the updated content
            ofstream outFile("allbookings.txt");
            if (outFile.is_open()) {
                outFile << fileContent;
                outFile.close();
                cout << "\t\t\t\t\t\t\t\tBooking for " << name << " has been deleted from the database" << endl;
            } else {
                cout << "Unable to update 'allbookings.txt'." << endl;
            }

            // Open the "modified_booking.txt" file for reading
            ifstream modifiedFile("modified_booking.txt");
            if (modifiedFile.is_open()) {
                string modifiedContent;
                bool modifiedBookingFound = false;
                while (getline(modifiedFile, line)) {
                    if (line.find("\t\t\t\t\t\t\t\tName of the booker: " + name) != string::npos) {
                        // Skip the lines corresponding to the modified booking with the inputted name
                        for (int i = 0; i < 3; i++) {
                            getline(modifiedFile, line);
                        }
                        modifiedBookingFound = true;
                    } else {
                        // Append the lines to the updated modified booking content
                        modifiedContent += line + "\n";
                    }
                }
                modifiedFile.close();

                if (modifiedBookingFound) {
                    // Rewrite the "modified_booking.txt" file with the updated content
                    ofstream modifiedOutFile("modified_booking.txt");
                    if (modifiedOutFile.is_open()) {
                        modifiedOutFile << modifiedContent;
                        modifiedOutFile.close();
                        cout << "\t\t\t\t\t\t\t\tBooking modifications for " << name << " have been deleted from the database" << endl;
                    } else {
                        cout << "\t\t\t\t\t\t\t\tUnable to update 'modified_booking.txt'." << endl;
                    }
                }
            } else {
                cout << "\t\t\t\t\t\t\t\tUnable to open 'modified_booking.txt' for reading." << endl;
            }
        } else {
            cout << "\t\t\t\t\t\t\t\tBooking not found for " << name << "." << endl;
        }
    } else {
        cout << "\t\t\t\t\t\t\t\tUnable to open 'allbookings.txt' for reading." << endl;
    }
}



void viewBookings() {
    char choice;
    system("cls");
    cout << "\t\t\t\t\t\t\t\tBookings:\n";
    // Read and display the contents of "allbookings.txt"
    ifstream allBookingsFile("allbookings.txt");
    if (allBookingsFile.is_open()) {
        string line;
        while (getline(allBookingsFile, line)) {
            cout << "\t\t\t\t\t\t\t\t" << line << endl;
        }
        allBookingsFile.close();
    } else {
        cout << "\t\t\t\t\t\t\t\tUnable to open 'allbookings.txt' for reading." << endl;
    }

    cout << "\t\t\t\t\t\t\t\tDo you want to view modifications made to a booking? [Y/N]: ";
    cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        string bookerName;
        cout << "\t\t\t\t\t\t\t\tEnter the name of the booker: ";
        cin.ignore();
        getline(cin, bookerName);

        // Open the "modified_booking.txt" file for reading
        ifstream modifiedFile("modified_booking.txt");
        if (modifiedFile.is_open()) {
            string line;
            bool bookingFound = false;
            cout << "\n\t\t\t\t\t\t\t\tModifications for " << bookerName << ":\n";
            while (getline(modifiedFile, line)) {
                if (line.find("\t\t\t\t\t\t\t\tName of the booker: " + bookerName) != string::npos) {
                    bookingFound = true;
                    cout << line << endl;
                    // Display the subsequent lines as well
                    while (getline(modifiedFile, line) && !line.empty()) {
                        cout << line << endl;
                    }
                    break;
                }
            }
            modifiedFile.close();

            if (!bookingFound) {
                cout << "\t\t\t\t\t\t\t\tNo modifications found for " << bookerName << "." << endl;
            }
        } else {
            cout << "\t\t\t\t\t\t\t\tUnable to open 'modified_booking.txt' for reading." << endl;
        }
    }

    cout << "\n\t\t\t\t\t\t\t\tDo you want to delete a specific booking? [Y/N]: ";
    cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        deleteBooking();
    }

    cout << "\n\t\t\t\t\t\t\t\tPress any key to go back to the main menu...";
    cin.ignore();
    cin.get();
}





void modifyBooking() {
    system("cls");
    string bookerName;
    cout << "\t\t\t\t\t\t\t\tEnter the name of the booker to modify the booking: ";
    cin.ignore();
    getline(cin, bookerName);

    // Open the "allbookings.txt" file for reading
    ifstream inFile("allbookings.txt");
    if (inFile.is_open()) {
        string line;
        string modifiedInfo;
        bool bookingFound = false;
        while (getline(inFile, line)) {
            if (line.find("Name of the booker: " + bookerName) != string::npos) {
                // Update the specific booking information
                bookingFound = true;
                cout << "\t\t\t\t\t\t\t\tWhat information would you like to modify?\n";
                cout << "\t\t\t\t\t\t\t\t1. No. of individuals\n";
                cout << "\t\t\t\t\t\t\t\t2. Name of the booker\n";
                cout << "\t\t\t\t\t\t\t\t3. No. of beds to be used\n";
                cout << "\t\t\t\t\t\t\t\t4. Staying time\n";
                cout << "\t\t\t\t\t\t\t\t5. Room category\n";
                cout << "\t\t\t\t\t\t\t\t6. Room number\n";
                cout << "\t\t\t\t\t\t\t\tChoose an option (1-6): ";
                int choice;
                cin >> choice;
                cin.ignore();

                switch (choice) {
                    case 1: {
                        cout << "\t\t\t\t\t\t\t\tEnter the new value for No. of individuals: ";
                        string newValue;
                        getline(cin, newValue);
                        modifiedInfo = "\t\t\t\t\t\t\t\tNo. Of individuals: " + newValue;
                        break;
                    }
                    case 2: {
                        cout << "\t\t\t\t\t\t\t\tEnter the new value for Name of the booker: ";
                        string newValue;
                        getline(cin, newValue);
                        modifiedInfo = "\t\t\t\t\t\t\t\tName of the booker: " + newValue;
                        break;
                    }
                    case 3: {
                        cout << "\t\t\t\t\t\t\t\tEnter the new value for No. of beds to be used: ";
                        string newValue;
                        getline(cin, newValue);
                        modifiedInfo = "\t\t\t\t\t\t\t\tNO. of bed to be used: " + newValue;
                        break;
                    }
                    case 4: {
                        cout << "\t\t\t\t\t\t\t\tEnter the new value for Staying time: ";
                        string newValue;
                        getline(cin, newValue);
                        modifiedInfo = "\t\t\t\t\t\t\t\tStaying time: " + newValue;
                        break;
                    }
                    case 5: {
                        cout << "\t\t\t\t\t\t\t\tEnter the new value for Room category: ";
                        string newValue;
                        getline(cin, newValue);
                        modifiedInfo = "\t\t\t\t\t\t\t\tRoom Category: " + newValue;
                        break;
                    }
                    case 6: {
                        cout << "\t\t\t\t\t\t\t\tEnter the new value for Room number: ";
                        string newValue;
                        getline(cin, newValue);
                        modifiedInfo = "\t\t\t\t\t\t\t\tRoom Number: " + newValue;
                        break;
                    }
                    default:
                        cout << "\t\t\t\t\t\t\t\tInvalid choice.\n";
                        break;
                }
            }
        }
        inFile.close();

        if (bookingFound && !modifiedInfo.empty()) {
            // Open the "modified_booking.txt" file in append mode
            ofstream outFile("modified_booking.txt", ios::app);
            if (outFile.is_open()) {
                outFile << "\t\t\t\t\t\t\t\tName of the booker: " << bookerName << endl;
                outFile << modifiedInfo << endl << endl;
                outFile.close();
                cout << "\t\t\t\t\t\t\t\tModification successful.\n";
            } else {
                cout << "\t\t\t\t\t\t\t\tUnable to update the modified booking file." << endl;
            }
        } else {
            cout << "\t\t\t\t\t\t\t\tBooking not found for the given name or no modification was made.\n";
        }
    } else {
        cout << "\t\t\t\t\t\t\t\tUnable to open 'allbookings.txt' for reading." << endl;
    }

    cout << "\t\t\t\t\t\t\t\tPress any key to go back to the main menu...";
    cin.ignore();
    cin.get();
}



class Feedback {
public:
    string user;
    string comment;

    // Default constructor
    Feedback() : user(""), comment("") {}

    // Parameterized constructor
    Feedback(const string& user, const string& comment) : user(user), comment(comment) {}
};

// Function to allow the user to give feedback
void giveFeedback(stack<Feedback>& feedbackStack, queue<Feedback>& feedbackQueue) {
    cin.ignore();
    cout << "\t\t\t\t\t\t\t\tEnter your name: ";
    string user;
    getline(cin, user);
    cout << "\t\t\t\t\t\t\t\tEnter your comment: ";
    string comment;
    getline(cin, comment);

    Feedback newFeedback(user, comment);

    feedbackStack.push(newFeedback);
    feedbackQueue.push(newFeedback);

    ofstream stackFile("feedback_stack.txt", ios::app);
    if (stackFile.is_open()) {
        stackFile << "User: " << newFeedback.user << endl;
        stackFile << "Comment: " << newFeedback.comment << endl;
        stackFile << endl;
        stackFile.close();
    } else {
        cout << "\t\t\t\t\t\t\t\tUnable to open 'feedback_stack.txt' for writing." << endl;
    }

    ofstream queueFile("feedback_queue.txt");
    if (queueFile.is_open()) {
        queue<Feedback> tempQueue = feedbackQueue;

        while (!tempQueue.empty()) {
            Feedback currentFeedback = tempQueue.front();
            queueFile << "User: " << currentFeedback.user << endl;
            queueFile << "Comment: " << currentFeedback.comment << endl;
            queueFile << endl;
            tempQueue.pop();
        }
        queueFile.close();
    } else {
        cout << "\t\t\t\t\t\t\t\tUnable to open 'feedback_queue.txt' for writing." << endl;
    }

    cout << "\t\t\t\t\t\t\t\tFeedback submitted successfully!\n";
}

// Function to view feedback using a stack
void viewFeedbackUsingStack() {
    cout << "\t\t\t\t\t\t\t\tFeedbacks (Last to First):\n";
    ifstream stackFile("feedback_stack.txt");
    if (stackFile.is_open()) {
        stack<string> feedbackStack;
        string line;
        while (getline(stackFile, line)) {
            feedbackStack.push(line);
        }
        stackFile.close();

        while (!feedbackStack.empty()) {
            cout << "\t\t\t\t\t\t\t\t" << feedbackStack.top() << endl;
            feedbackStack.pop();
        }
    } else {
        cout << "\t\t\t\t\t\t\t\tUnable to open 'feedback_stack.txt' for reading." << endl;
    }
}

void viewFeedbackUsingQueue(queue<Feedback>& feedbackQueue) {
    cout << "\t\t\t\t\t\t\t\tFeedbacks (First to Last):\n";

    // Read the existing feedback from the file and store it in a temporary queue
    queue<Feedback> tempQueue;
    ifstream inFile("feedback_queue.txt");
    if (inFile.is_open()) {
        string line;
        Feedback tempFeedback;
        while (getline(inFile, line)) {
            if (line.find("User: ") != string::npos) {
                tempFeedback.user = line.substr(6);
            } else if (line.find("Comment: ") != string::npos) {
                tempFeedback.comment = line.substr(9);
                tempQueue.push(tempFeedback);
            }
        }
        inFile.close();

        // Display the feedbacks from the temporary queue (first to last order)
        while (!tempQueue.empty()) {
            Feedback currentFeedback = tempQueue.front();
            tempQueue.pop();
            cout << "\t\t\t\t\t\t\t\tUser: " << currentFeedback.user << endl;
            cout << "\t\t\t\t\t\t\t\tComment: " << currentFeedback.comment << endl;
            cout << endl;
        }
    } else {
        cout << "\t\t\t\t\t\t\t\tUnable to open 'feedback_queue.txt' for reading." << endl;
    }
}


void feedbackSystem() {
    stack<Feedback> feedbackStack;
    queue<Feedback> feedbackQueue;
    int choice;

    system("cls");

    do {
        cout << "\n\t\t\t\t\t\t\t\tFeedback System\n";
        cout << "\t\t\t\t\t\t\t\t1. Give Feedback\n";
        cout << "\t\t\t\t\t\t\t\t2. View Feedback (using Stack)\n";
        cout << "\t\t\t\t\t\t\t\t3. View Feedback (using Queue)\n";
        cout << "\t\t\t\t\t\t\t\t4. Exit\n";
        cout << "\t\t\t\t\t\t\t\tEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                giveFeedback(feedbackStack, feedbackQueue);
                break;
            case 2:
                viewFeedbackUsingStack();
                break;
            case 3:
                viewFeedbackUsingQueue(feedbackQueue);
                break;
            case 4:
                cout << "\t\t\t\t\t\t\t\tExiting...\n";
                break;
            default:
                cout << "\t\t\t\t\t\t\t\tInvalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);
}

