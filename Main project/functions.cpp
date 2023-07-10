#include<iostream>
using namespace std;


int limit;
string opt2;
int roomChoice;


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

                                                        ||==============================||     ||==============================||
                                                        ||                              ||     ||                              ||
                                                        ||          Regular             ||     ||          Advance             ||
                                                        ||                              ||     ||                              ||
                                                        ||==============================||     ||==============================||
                                                        ||                              ||     ||                              ||
                                                        ||                              ||     ||                              || 
                                                        ||                              ||     ||                              ||
                                                        ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||
                                                        ||                              ||     ||                              ||
                                                        ||                              ||     ||                              ||  
                                                        ||                              ||     ||                              ||
                                                        ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||
                                                        ||                              ||     ||                              ||
                                                        ||                              ||     ||                              ||   
                                                        ||                              ||     ||                              ||
                                                        ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||
                                                        ||                              ||     ||                              ||
                                                        ||                              ||     ||                              ||   
                                                        ||                              ||     ||                              ||
                                                        ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||     ||\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\||
                                                        ||                              ||     ||                              ||
                                                        ||                              ||     ||                              || 
                                                        ||                              ||     ||                              ||
                                                        ||==============================||     ||==============================||

                                                                    cost: 350/hr                          cost: 350/hr
                                                                    ++++++++++++                          ++++++++++++                                                                                                                                                  

                                                                                                                        
        
        

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



  void roomPanelReg(){
    bool flag=true;
    do{

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

    std::cout<<"                                                 Insert the room that you want to claim: ";
    std::cin>>roomChoice;
    flag=false;
    continue;
    }while(flag==true);
}

void roomPanelAdv(){

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

    std::cout<<"                                                 Insert the room that you want to claim: ";
    std::cin>>roomChoice;
}

void roomPanelPrem(){

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

    std::cout<<"                                                 Insert the room that you want to claim: ";
    std::cin>>roomChoice;
}





  struct Node {
    string noInd;
    string name;
    string noBed;
    string stayTime;
    Node* next;
};

Node* head = NULL;

void InsertNode(string noInd, string name, string noBed, string stayTime) {
    Node* n = new Node();
    n->noInd = noInd;
    n->name = name;
    n->noBed = noBed;
    n->stayTime = stayTime;
    n->next = head;
    head = n;
}

void displayList() {
    Node* curr = head;
    while (curr != NULL) {
        cout << "\n\n\n\nNo. Of individuals: " << curr->noInd << endl;
        cout << "\n\n\n\nName of the booker: " << curr->name << endl;
        cout << "\n\n\n\nNO. of bed to be use: " << curr->noBed << endl;
        cout << "\n\n\n\nStaying time: " << curr->stayTime << endl;

        int x = std::stoi(curr->stayTime);
        int cost = x/2;
        cout<<"Total cost: "<<cost<<endl;

        cout << endl;
        curr = curr->next;
    }
}

void storeItemsToArray(std::string* items, int size) {
    Node* curr = head;
    int index = 0;

    while (curr != nullptr && index < size) {
        // Store the desired data from the node into the array
        items[index] = curr->name;
        curr = curr->next;
        index++;
    }

}

void receipt(){

    std::cout<<R"(


                                                 ██████╗ ███████╗ ██████╗███████╗██╗██████╗ ████████╗
                                                ██╔══██╗██╔════╝██╔════╝██╔════╝██║██╔══██╗╚══██╔══╝
                                                ██████╔╝█████╗  ██║     █████╗  ██║██████╔╝   ██║   
                                                ██╔══██╗██╔══╝  ██║     ██╔══╝  ██║██╔═══╝    ██║   
                                                ██║  ██║███████╗╚██████╗███████╗██║██║        ██║   
                                                ╚═╝  ╚═╝╚══════╝ ╚═════╝╚══════╝╚═╝╚═╝        ╚═╝ 

    )"<<std::endl;
    displayList();
    cout<<"\n\n\n\nPress any key to continue....";
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
            system("cls");
            std::cout<<"                                                 No. of individuals that will use the room: ";
            std::cin>>noInd;
            std::cout<<"                                                 Name of the booker: ";
            std::cin>>name;
            std::cout<<"                                                 How many beds to be use? ";
            std::cin>>noBed;
            std::cout<<"                                                 How many hrs to stay? ";
            std::cin>>stayTime;

            InsertNode(noInd, name, noBed, stayTime);
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
            std::cout<<"                                                 No. of individuals that will use the room: ";
            std::cin>>noInd;
            std::cout<<"                                                 Name of the booker: ";
            std::cin>>name;
            std::cout<<"                                                 How many beds to be use? ";
            std::cin>>noBed;
            std::cout<<"                                                 How many hrs to stay? ";
            std::cin>>stayTime;

            InsertNode(noInd, name, noBed, stayTime);
       }
       flag = false;
       continue;
       
       }while(flag==true);

    

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
            std::cout<<"                                                 No. of individuals that will use the room: ";
            std::cin>>noInd;
            std::cout<<"                                                 Name of the booker: ";
            std::cin>>name;
            std::cout<<"                                                 How many beds to be use? ";
            std::cin>>noBed;
            std::cout<<"                                                 How many hrs to stay? ";
            std::cin>>stayTime;

            InsertNode(noInd, name, noBed, stayTime);
       }
       flag = false;
       continue;

         }while(flag==true);
    }
    

  }


void doBooking(){
    system("cls");
    db1();
    system("cls");
    db2();
    system("cls");
    db3();
    system("cls");
    db4();
    bool flag=true;
    do{
    system("cls");
    if(opt2 == "Regular" || opt2 == "regular"){
        roomPanelReg();
    }else if(opt2 == "Advance" || opt2 == "advance"){
        roomPanelAdv();
    }else if((opt2 == "Premium" || opt2 == "premium")){
        roomPanelPrem();
    }
    }while(flag=true);
    system("cls");
    receipt();



}