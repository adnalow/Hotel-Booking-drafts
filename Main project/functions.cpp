#include<iostream>
#include <stack>
#include <queue>
using namespace std;


int limit;
string opt2;
string roomChoice;


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
                                                        ||          Regular             ||     ||          Advance             ||      ||          Premium             ||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||==============================||     ||==============================||      ||==============================||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||                              ||     ||                              ||      ||                              || 
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||      ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||                              ||     ||                              ||      ||                              ||  
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||      ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||      ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||                              ||     ||                              ||      ||                              ||  
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||      ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||                              ||     ||                              ||      ||                              || 
                                                        ||                              ||     ||                              ||      ||                              ||
                                                        ||==============================||     ||==============================||      ||==============================||

                                                                    cost: 350/hr                          cost: 350/hr                            cost: 350/hr    
                                                                    ++++++++++++                          ++++++++++++                            ++++++++++++                                                                                                                                         

                                                                                                                        
        
        

    )"<<std::endl;
    std::cout<<"                                                     Enter your answer ;Regular, Advance, Premium: ";
    std::cin>>opt2;
}

void db3(){
    
    if(opt2 == "Regular" || opt2 == "regular"){
        char c;
        bool flag=false;
        do{
         system("cls");
         std::cout<<R"(
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||          Regular             ||     
                                                                    ||                              ||     
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||                              ||      
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||       
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||      
                                                                    ||                              ||     
                                                                    ||==============================||     

                                                                                cost: 350/hr                          
                                                                                ++++++++++++                           

    
        )"<<std::endl;
       
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
         std::cout<<R"(
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||           Advance            ||     
                                                                    ||                              ||     
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||                              ||      
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||       
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||      
                                                                    ||                              ||     
                                                                    ||==============================||     

                                                                                cost: 350/hr                          
                                                                                ++++++++++++                           

    
        )"<<std::endl;
       
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
         std::cout<<R"(
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||          Premium             ||     
                                                                    ||                              ||     
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||                              ||      
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||       
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||      
                                                                    ||                              ||     
                                                                    ||==============================||     

                                                                                cost: 350/hr                          
                                                                                ++++++++++++                           

    
        )"<<std::endl;
       
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
}

void displayList(Node* start) {
    Node* curr = start;
    while (curr != nullptr) {
        cout << "\t\t\tNo. Of individuals: " << curr->noInd << endl;
        cout << "\t\t\tName of the booker: " << curr->name << endl;
        cout << "\t\t\tNO. of bed to be used: " << curr->noBed << endl;
        cout << "\t\t\tStaying time: " << curr->stayTime << endl;
        cout << "\t\t\tRoom Category: " << opt2 << endl;
        cout << "\t\t\tRoom Number: " << curr->roomChoice << endl;

        int x = stoi(curr->stayTime);
        int cost = x * 350;
        cout << "\t\t\tTotal cost: " << cost << endl;

        cout << endl;
        curr = curr->next;
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
        cout << "Insert the room that you want to claim: ";
        cin >> roomChoice;
        if (isRoomAvailable(roomChoice)) {
            flag = false;
        } else {
            cout << "Room is already claimed. Please choose another room." << endl;
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
        cout << "Insert the room that you want to claim: ";
        cin >> roomChoice;
        if (isRoomAvailable(roomChoice)) {
            flag = false;
        } else {
            cout << "Room is already claimed. Please choose another room." << endl;
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
        cout << "Insert the room that you want to claim: ";
        cin >> roomChoice;
        if (isRoomAvailable(roomChoice)) {
            flag = false;
        } else {
            cout << "Room is already claimed. Please choose another room." << endl;
        }
    } while (flag);
}

void receipt() {
    system("cls");
    std::cout<<R"(


                                              
                                                                ______     ______     ______     ______     __     ______   ______  
                                                                /\  == \   /\  ___\   /\  ___\   /\  ___\   /\ \   /\  == \ /\__  _\ 
                                                                \ \  __<   \ \  __\   \ \ \____  \ \  __\   \ \ \  \ \  _-/ \/_/\ \/ 
                                                                \ \_\ \_\  \ \_____\  \ \_____\  \ \_____\  \ \_\  \ \_\      \ \_\ 
                                                                \/_/ /_/   \/_____/   \/_____/   \/_____/   \/_/   \/_/       \/_/ 
                                                                     


    )"<<std::endl;
    cout << "\n\n\t\t\t\tRECEIPT" << endl;
    cout << "\t\t\t--------------------------------" << endl;

    int numBookings = 0;  // Counter for the number of bookings made in the current transaction
    Node* curr = head;    // Starting node for the current transaction

    while (curr != nullptr) {
        numBookings++;
        cout << "\t\t\tNo. Of individuals: " << curr->noInd << endl;
        cout << "\t\t\tName of the booker: " << curr->name << endl;
        cout << "\t\t\tNO. of bed to be used: " << curr->noBed << endl;
        cout << "\t\t\tStaying time: " << curr->stayTime << endl;
        cout << "\t\t\tRoom Category: " << opt2 << endl;
        cout << "\t\t\tRoom Number: " << curr->roomChoice << endl;

        int x = stoi(curr->stayTime);
        int cost = x * 350;
        cout << "\t\t\tTotal cost: " << cost << endl;

        cout << endl;
        curr = curr->next;
    }

    cout << "\n\t\t\t--------------------------------" << endl;
    cout << "\t\t\tNumber of Bookings: " << numBookings << endl;
    cout << "\n\n\nPress any key to continue....";
    cin.ignore();
    cin.get();
}

  void db4(){
    string noInd,name, noBed, stayTime;
    if(opt2 == "Regular" || opt2 == "regular"){
        bool flag=true;
        do{
         system("cls");
         std::cout<<R"(
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||          Regular             ||     
                                                                    ||                              ||     
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||                              ||      
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||       
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||      
                                                                    ||                              ||     
                                                                    ||==============================||     

                                                                                cost: 350/hr                          
                                                                                ++++++++++++                           

    
        )"<<std::endl;
       
        for(int i=0; i<limit;i++){
                std::cout << "\t\t\t\t\tNo. of individuals that will use the room: ";
                std::cin >> noInd;
                std::cin.ignore();  // Ignore the newline character

                std::cout << "\t\t\t\t\tName of the booker: ";
                getline(std::cin, name);
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
         std::cout<<R"(
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||           Advance            ||     
                                                                    ||                              ||     
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||                              ||      
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||       
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||      
                                                                    ||                              ||     
                                                                    ||==============================||     

                                                                                cost: 350/hr                          
                                                                                ++++++++++++                           

    
        )"<<std::endl;

        for(int i=0; i<limit;i++){
                std::cout << "\t\t\t\t\tNo. of individuals that will use the room: ";
                std::cin >> noInd;
                std::cin.ignore();  // Ignore the newline character

                std::cout << "\t\t\t\t\tName of the booker: ";
                getline(std::cin, name);
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
    

    }else if(opt2 == "Premium" || opt2 == "Premium"){
        bool flag=true;
         do{
         system("cls");
         std::cout<<R"(
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||          Premium             ||     
                                                                    ||                              ||     
                                                                    ||==============================||     
                                                                    ||                              ||     
                                                                    ||                              ||      
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||       
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||        
                                                                    ||                              ||     
                                                                    ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     
                                                                    ||                              ||     
                                                                    ||                              ||      
                                                                    ||                              ||     
                                                                    ||==============================||     

                                                                                cost: 350/hr                          
                                                                                ++++++++++++                           

    
        )"<<std::endl;
       for(int i=0; i<limit;i++){
                std::cout << "\t\t\t\t\tNo. of individuals that will use the room: ";
                std::cin >> noInd;
                std::cin.ignore();  // Ignore the newline character

                std::cout << "\t\t\t\t\tName of the booker: ";
                getline(std::cin, name);
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

void viewBookings(){
    system("cls");
    cout << "Bookings:\n";
    displayList(head);
  
    cout << "\nPress any key to go back to the main menu...";
    cin.ignore();
    cin.get();
}

void modifyBooking() {
    system("cls");
    string bookerName;
    cout << "Enter the name of the booker: ";
    cin.ignore();
    getline(cin, bookerName);

    Node* curr = head;
    Node* foundNode = nullptr;
    
    // Find the booking based on the booker's name
    while (curr != nullptr) {
        if (curr->name == bookerName) {
            foundNode = curr;
            break;
        }
        curr = curr->next;
    }
    
    if (foundNode == nullptr) {
        cout << "Booking not found for the given name.\n";
        cout << "Press any key to go back to the main menu...";
        cin.ignore();
        cin.get();
        return;
    }

    system("cls");
    cout << "Booking found for the name: " << foundNode->name << "\n\n";
    cout << "What information would you like to modify?\n";
    cout << "1. No. of individuals\n";
    cout << "2. Name of the booker\n";
    cout << "3. No. of beds to be used\n";
    cout << "4. Staying time\n";
    cout << "5. Room category\n";
    cout << "6. Room number\n";
    cout << "Choose an option (1-6): ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1: {
            cout << "Enter the new value for No. of individuals: ";
            string newValue;
            cin.ignore();
            getline(cin, newValue);
            foundNode->noInd = newValue;
            break;
        }
        case 2: {
            cout << "Enter the new value for Name of the booker: ";
            string newValue;
            cin.ignore();
            getline(cin, newValue);
            foundNode->name = newValue;
            break;
        }
        case 3: {
            cout << "Enter the new value for No. of beds to be used: ";
            string newValue;
            cin.ignore();
            getline(cin, newValue);
            foundNode->noBed = newValue;
            break;
        }
        case 4: {
            cout << "Enter the new value for Staying time: ";
            string newValue;
            cin.ignore();
            getline(cin, newValue);
            foundNode->stayTime = newValue;
            break;
        }
        case 5: {
            cout << "Enter the new value for Room category: ";
            string newValue;
            cin.ignore();
            getline(cin, newValue);
            foundNode->roomCategory = newValue;
            break;
        }
        case 6: {
            cout << "Enter the new value for Room number: ";
            string newValue;
            cin.ignore();
            getline(cin, newValue);
            foundNode->roomChoice = newValue;
            break;
        }
        default:
            cout << "Invalid choice.\n";
            break;
    }

    cout << "Modification successful.\n";
    cout << "Press any key to go back to the main menu...";
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
    cout << "Enter your name: ";
    getline(cin, newFeedback.user);
    cout << "Enter your comment: ";
    getline(cin, newFeedback.comment);

    feedbackStack.push(newFeedback);
    feedbackQueue.push(newFeedback);

    cout << "Feedback submitted successfully!\n";
}

// Function to view feedback using a stack
void viewFeedbackUsingStack(stack<Feedback>& feedbackStack) {
    cout << "Feedbacks (Last to First):\n";
    stack<Feedback> tempStack = feedbackStack;
    while (!tempStack.empty()) {
        Feedback currentFeedback = tempStack.top();
        tempStack.pop();
        cout << "User: " << currentFeedback.user << endl;
        cout << "Comment: " << currentFeedback.comment << endl;
        cout << endl;
    }
}

// Function to view feedback using a queue
void viewFeedbackUsingQueue(queue<Feedback>& feedbackQueue) {
    cout << "Feedbacks (First to Last):\n";
    queue<Feedback> tempQueue = feedbackQueue;
    while (!tempQueue.empty()) {
        Feedback currentFeedback = tempQueue.front();
        tempQueue.pop();
        cout << "User: " << currentFeedback.user << endl;
        cout << "Comment: " << currentFeedback.comment << endl;
        cout << endl;
    }
}

void feedbackSystem() {
    stack<Feedback> feedbackStack;
    queue<Feedback> feedbackQueue;
    int choice;

    system("cls");

    do {
        cout << "Feedback System\n";
        cout << "1. Give Feedback\n";
        cout << "2. View Feedback (using Stack)\n";
        cout << "3. View Feedback (using Queue)\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
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