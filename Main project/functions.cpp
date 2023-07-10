#include<iostream>
using namespace std;


int limit;
string opt2;

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

  void db4(){
    string noInd,name, noBed, stayTime;
    if(opt2 == "Regular" || opt2 == "regular"){
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
       
        std::cout<<"                                                 No. of individuals that will use the room: ";
        std::cin>>noInd;
        std::cout<<"                                                 Name of the booker: ";
        std::cin>>name;
        std::cout<<"                                                 How many beds to be use? ";
        std::cin>>noBed;
        std::cout<<"                                                 How many hrs to stay? ";
        std::cin>>stayTime;

    }else if(opt2 == "Advance" || opt2 == "advance"){
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
       
        std::cout<<"                                                 No. of individuals that will use the room: ";
        std::cin>>noInd;
        std::cout<<"                                                 Name of the booker: ";
        std::cin>>name;
        std::cout<<"                                                 How many beds to be use? ";
        std::cin>>noBed;
        std::cout<<"                                                 How many hrs to stay? ";
        std::cin>>stayTime;

    }else if(opt2 == "Premium" || opt2 == "Premium"){
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
       
        std::cout<<"                                                 No. of individuals that will use the room: ";
        std::cin>>noInd;
        std::cout<<"                                                 Name of the booker: ";
        std::cin>>name;
        std::cout<<"                                                 How many beds to be use? ";
        std::cin>>noBed;
        std::cout<<"                                                 How many hrs to stay? ";
        std::cin>>stayTime;
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

}