#include<iostream>
#include <stack>
#include <queue>
#include <fstream>
#include <chrono>
using namespace std;


int limit;
string opt2;
string roomChoice;

class room {
public:
    string type;
};


void db1(){

    do{
    system("cls");
    std::cout<<R"(


           
                                                                                                                                                                            _____ 
                                _____                                                       _          _                                     _      _          _           _|___  |
                                |  |  |___ _ _ _    _____ ___ ___ _ _    ___ ___ ___ _____  / |___    _| |___    _ _ ___ _ _    _ _ _ ___ ___| |_   | |_ ___   | |_ ___ ___| |_|  _|
                                |     | . | | | |  |     | .'|   | | |  |  _| . | . |     |/ /|_ -|  | . | . |  | | | . | | |  | | | | .'|   |  _|  |  _| . |  | . | . | . | '_|_|  
                                |__|__|___|_____|  |_|_|_|__,|_|_|_  |  |_| |___|___|_|_|_|_/ |___|  |___|___|  |_  |___|___|  |_____|__,|_|_|_|    |_| |___|  |___|___|___|_,_|_|  
                                                                |___|                                          |___|                                                               





    )"<<std::endl;

    std::cout<<"                                                                                     Enter your answer: ";
    std::cin>>limit;

    }while(limit <=0);

}

void db2(){
std::cout<<R"(

                                                        ||==============================||     ||==============================||      ||==============================||     
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||          Regular             ||     ||           Advance            ||      ||          Premium             ||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||==============================||     ||==============================||      ||==============================||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||       Comfortable Bed        ||     ||      Enhanced Room Size      ||      ||        Luxury Bedding        || 
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||      ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||       Basic Amenities        ||     ||         Workstation          ||      ||        Lounge Area           ||  
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||      ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||       En-suite Bathroom      ||     ||           Minibar            ||      ||       Upgraded Bathroom      ||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||      ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||        Wi-Fi Access          ||     ||         In-room Safe         ||      ||       Exclusive Access       ||  
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||      ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||        Room Service          ||     ||         Enhanced View        ||      ||Personalized Concierge Service|| 
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||==============================||     ||==============================||      ||==============================||

                                                                    cost: 350/hr                          cost: 350/hr                            cost: 350/hr    
                                                                    ++++++++++++                          ++++++++++++                            ++++++++++++                                                                                                                                         

                                                                                                                        
        
        

    )"<<std::endl;
    std::cout<<"                                                     Enter your answer ;Regular, Advance, Premium: ";
    std::cin>>opt2;
}

void regularPanel(){
    std::cout<<R"(
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||          Regular             ||     
                                                                    ||                              ||     
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||       Comfortable Bed        ||      
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||       Basic Amenities        ||       
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||       En-suite Bathroom      ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||        Wi-Fi Access          ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||        Room Service          ||      
                                                                    ||                              ||     
                                                                    ||==============================||     

                                                                               cost: 350/hr                          
                                                                               ++++++++++++                           

    
        )"<<std::endl;

}

void advancePanel(){
    std::cout<<R"(
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||           Advance            ||     
                                                                    ||                              ||     
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||       Enhanced Room Size     ||      
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||        Workstation           ||       
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||        Minibar               ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||        In-room Safe          ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||        Enhanced View         ||      
                                                                    ||                              ||     
                                                                    ||==============================||     

                                                                              cost: 350/hr                          
                                                                              ++++++++++++                           

    
        )"<<std::endl;
}

void premiumPanel(){
    std::cout<<R"(
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||          Premium             ||     
                                                                    ||                              ||     
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||        Luxury Bedding        ||      
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||        Lounge Area           ||       
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||       Upgraded Bathroom      ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||       Exclusive Access       ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||Personalized Concierge Service||      
                                                                    ||                              ||     
                                                                    ||==============================||     

                                                                               cost: 350/hr                          
                                                                               ++++++++++++                           

    
        )"<<std::endl;
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
        std::cout<<R"(
                                    
                                                                    .______       _______   _______  __    __   __          ___      .______      
                                                                    |   _  \     |   ____| /  _____||  |  |  | |  |        /   \     |   _  \     
                                                                    |  |_)  |    |  |__   |  |  __  |  |  |  | |  |       /  ^  \    |  |_)  |    
                                                                    |      /     |   __|  |  | |_ | |  |  |  | |  |      /  /_\  \   |      /     
                                                                    |  |\  \----.|  |____ |  |__| | |  `--'  | |  `----./  _____  \  |  |\  \----.
                                                                    | _| `._____||_______| \______|  \______/  |_______/__/     \__\ | _| `._____|
                                                                                                                        
                                                                ==============    ==============    ==============    ==============    ==============             
                                                                ||          ||    ||          ||    ||          ||    ||          ||    ||          ||
                                                                ||    1     ||    ||    2     ||    ||    3     ||    ||    4     ||    ||    5     ||
                                                                ||          ||    ||          ||    ||          ||    ||          ||    ||          ||
                                                                ==============    ==============    ==============    ==============    ==============
                                                                

                                                                ==============    ==============    ==============    ==============    ==============
                                                                ||          ||    ||          ||    ||          ||    ||          ||    ||          ||
                                                                ||    6     ||    ||    7     ||    ||    8     ||    ||    9     ||    ||    10    ||
                                                                ||          ||    ||          ||    ||          ||    ||          ||    ||          ||
                                                                ==============    ==============    ==============    ==============    ==============



    )"<<std::endl;
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
        std::cout<<R"(
                                               
                                               

                                                                    ___       _______  ____    ____  ___      .__   __.   ______  _______ 
                                                                    /   \     |       \ \   \  /   / /   \     |  \ |  |  /      ||   ____|
                                                                    /  ^  \    |  .--.  | \   \/   / /  ^  \    |   \|  | |  ,----'|  |__   
                                                                    /  /_\  \   |  |  |  |  \      / /  /_\  \   |  . `  | |  |     |   __|  
                                                                    /  _____  \  |  '--'  |   \    / /  _____  \  |  |\   | |  `----.|  |____ 
                                                                    /__/     \__\ |_______/     \__/ /__/     \__\ |__| \__|  \______||_______|
                                                                                                                                                            
                                                                ==============    ==============    ==============    ==============    ==============             
                                                                ||          ||    ||          ||    ||          ||    ||          ||    ||          ||
                                                                ||    1     ||    ||    2     ||    ||    3     ||    ||    4     ||    ||    5     ||
                                                                ||          ||    ||          ||    ||          ||    ||          ||    ||          ||
                                                                ==============    ==============    ==============    ==============    ==============
                                                                

                                                                ==============    ==============    ==============    ==============    ==============
                                                                ||          ||    ||          ||    ||          ||    ||          ||    ||          ||
                                                                ||    6     ||    ||    7     ||    ||    8     ||    ||    9     ||    ||    10    ||
                                                                ||          ||    ||          ||    ||          ||    ||          ||    ||          ||
                                                                ==============    ==============    ==============    ==============    ==============



    )"<<std::endl;
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
        std::cout<<R"(



                                                                        .______   .______       _______ .___  ___.  __   __    __  .___  ___. 
                                                                        |   _  \  |   _  \     |   ____||   \/   | |  | |  |  |  | |   \/   | 
                                                                        |  |_)  | |  |_)  |    |  |__   |  \  /  | |  | |  |  |  | |  \  /  | 
                                                                        |   ___/  |      /     |   __|  |  |\/|  | |  | |  |  |  | |  |\/|  | 
                                                                        |  |      |  |\  \----.|  |____ |  |  |  | |  | |  `--'  | |  |  |  | 
                                                                        | _|      | _| `._____||_______||__|  |__| |__|  \______/  |__|  |__| 
                                                                                                                                                        
                                                                ==============    ==============    ==============    ==============    ==============             
                                                                ||          ||    ||          ||    ||          ||    ||          ||    ||          ||
                                                                ||    1     ||    ||    2     ||    ||    3     ||    ||    4     ||    ||    5     ||
                                                                ||          ||    ||          ||    ||          ||    ||          ||    ||          ||
                                                                ==============    ==============    ==============    ==============    ==============
                                                                

                                                                ==============    ==============    ==============    ==============    ==============
                                                                ||          ||    ||          ||    ||          ||    ||          ||    ||          ||
                                                                ||    6     ||    ||    7     ||    ||    8     ||    ||    9     ||    ||    10    ||
                                                                ||          ||    ||          ||    ||          ||    ||          ||    ||          ||
                                                                ==============    ==============    ==============    ==============    ==============



    )"<<std::endl;
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
    std::cout<<R"(


                                              
                                                                ______     ______     ______     ______     __     ______   ______  
                                                                /\  == \   /\  ___\   /\  ___\   /\  ___\   /\ \   /\  == \ /\__  _\ 
                                                                \ \  __<   \ \  __\   \ \ \____  \ \  __\   \ \ \  \ \  _-/ \/_/\ \/ 
                                                                 \ \_\ \_\  \ \_____\  \ \_____\  \ \_____\  \ \_\  \ \_\      \ \_\ 
                                                                  \/_/ /_/   \/_____/   \/_____/   \/_____/   \/_/   \/_/       \/_/ 
                                                                     


    )"<<std::endl;
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
        for(int i=0; i<limit;i++){
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
       }
            flag = false;
            continue;
        }while(flag == true);

    }else if(opt2 == "Advance" || opt2 == "advance"){
        bool flag=true;
        do{
         system("cls");
         advancePanel();
        for(int i=0; i<limit;i++){
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
       }
            flag = false;
            continue;
        }while(flag == true);
    

    }else if(opt2 == "Premium" || opt2 == "premium"){
        bool flag=true;
        do{
         system("cls");
         premiumPanel();
        for(int i=0; i<limit;i++){
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
       }
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
    cout << "Enter the name of the booker to delete the booking: ";
    cin.ignore();
    getline(cin, name);

    // Open the "allbookings.txt" file for reading
    ifstream inFile("allbookings.txt");
    if (inFile.is_open()) {
        string line;
        string fileContent;
        bool bookingFound = false;
        while (getline(inFile, line)) {
            if (line.find("Name of the booker: " + name) != string::npos) {
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
                cout << "Booking for " << name << " has been deleted." << endl;
            } else {
                cout << "Unable to update 'allbookings.txt'." << endl;
            }
        } else {
            cout << "Booking not found for " << name << "." << endl;
        }
    } else {
        cout << "Unable to open 'allbookings.txt' for reading." << endl;
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
            cout <<"\t\t\t\t\t\t\t\t"<< line << endl;
        }
        allBookingsFile.close();
    } else {
        cout << "Unable to open 'allbookings.txt' for reading." << endl;
    }

    cout << "Do you want to delete a specific booking? [Y/N]: ";
    cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        deleteBooking();
        cout << "\n\t\t\t\t\t\t\t\tPress any key to go back to the main menu...";
        cin.ignore();
        cin.get();
    } else {
        cout << "\n\t\t\t\t\t\t\t\tPress any key to go back to the main menu...";
        cin.ignore();
        cin.get();
    }
    
   
}


void modifyBooking() {
    system("cls");
    string bookerName;
    cout << "\t\t\t\t\t\t\t\tEnter the name of the booker: ";
    cin.ignore();
    getline(cin, bookerName);

    // Open the "allbookings.txt" file for reading
    ifstream inFile("allbookings.txt");
    if (inFile.is_open()) {
        string line;
        string fileContent;
        bool bookingFound = false;
        while (getline(inFile, line)) {
            if (line.find("Name of the booker: " + bookerName) != string::npos) {
                // Modify the specific booking information
                bookingFound = true;
                fileContent += line + "\n";
                getline(inFile, line); // Read the No. Of individuals line
                cout << "\t\t\t\t\t\t\t\tWhat information would you like to modify?\n";
                cout << "\t\t\t\t\t\t\t\t1. Name of the booker\n";
                cout << "\t\t\t\t\t\t\t\t2. No. of individuals\n";
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
                        cout << "\t\t\t\t\t\t\t\tEnter the new value for Name of the booker: ";
                        string newValue;
                        getline(cin, newValue);
                        fileContent += "Name of the booker: " + newValue + "\n";
                        break;
                        
                    }
                    case 2: {
                        cout << "\t\t\t\t\t\t\t\tEnter the new value for No. of individuals: ";
                        string newValue;
                        getline(cin, newValue);
                        fileContent += "No. Of individuals: " + newValue + "\n";
                        break;
                    }
                    case 3: {
                        cout << "\t\t\t\t\t\t\t\tEnter the new value for No. of beds to be used: ";
                        string newValue;
                        getline(cin, newValue);
                        fileContent += "NO. of bed to be used: " + newValue + "\n";
                        break;
                    }
                    case 4: {
                        cout << "\t\t\t\t\t\t\t\tEnter the new value for Staying time: ";
                        string newValue;
                        getline(cin, newValue);
                        fileContent += "Staying time: " + newValue + "\n";
                        break;
                    }
                    case 5: {
                        cout << "\t\t\t\t\t\t\t\tEnter the new value for Room category: ";
                        string newValue;
                        getline(cin, newValue);
                        fileContent += "Room Category: " + newValue + "\n";
                        break;
                    }
                    case 6: {
                        cout << "\t\t\t\t\t\t\t\tEnter the new value for Room number: ";
                        string newValue;
                        getline(cin, newValue);
                        fileContent += "Room Number: " + newValue + "\n";
                        break;
                    }
                    default:
                        cout << "\t\t\t\t\t\t\t\tInvalid choice.\n";
                        break;
                }
            } else {
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
                cout << "\t\t\t\t\t\t\t\tModification successful.\n";
            } else {
                cout << "Unable to update 'allbookings.txt'." << endl;
            }
        } else {
            cout << "\t\t\t\t\t\t\t\tBooking not found for the given name.\n";
        }
    } else {
        cout << "Unable to open 'allbookings.txt' for reading." << endl;
    }

    cout << "\t\t\t\t\t\t\t\tPress any key to go back to the main menu...";
    cin.ignore();
    cin.get();
}




struct Feedback {
    string user;
    string comment;
};

// Function to allow the user to give feedback
void giveFeedback(stack<Feedback>& feedbackStack, queue<Feedback>& feedbackQueue) {
    Feedback newFeedback;
    cin.ignore();
    cout << "\t\t\t\t\t\t\t\tEnter your name: ";
    getline(cin, newFeedback.user);
    cout << "\t\t\t\t\t\t\t\tEnter your comment: ";
    getline(cin, newFeedback.comment);

    feedbackStack.push(newFeedback);
    feedbackQueue.push(newFeedback);

    cout << "\t\t\t\t\t\t\t\tFeedback submitted successfully!\n";
}

// Function to view feedback using a stack
void viewFeedbackUsingStack(stack<Feedback>& feedbackStack) {
    cout << "\t\t\t\t\t\t\t\tFeedbacks (Last to First):\n";
    stack<Feedback> tempStack = feedbackStack;
    while (!tempStack.empty()) {
        Feedback currentFeedback = tempStack.top();
        tempStack.pop();
        cout << "\t\t\t\t\t\t\t\tUser: " << currentFeedback.user << endl;
        cout << "\t\t\t\t\t\t\t\tComment: " << currentFeedback.comment << endl;
        cout << endl;
    }
}

// Function to view feedback using a queue
void viewFeedbackUsingQueue(queue<Feedback>& feedbackQueue) {
    cout << "\t\t\t\t\t\t\t\tFeedbacks (First to Last):\n";
    queue<Feedback> tempQueue = feedbackQueue;
    while (!tempQueue.empty()) {
        Feedback currentFeedback = tempQueue.front();
        tempQueue.pop();
        cout << "\t\t\t\t\t\t\t\tUser: " << currentFeedback.user << endl;
        cout << "\t\t\t\t\t\t\t\tComment: " << currentFeedback.comment << endl;
        cout << endl;
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
                viewFeedbackUsingStack(feedbackStack);
                break;
            case 3:
                viewFeedbackUsingQueue(feedbackQueue);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);
}