#include<iostream>
#include "fpage.cpp"
#include "mMenu.cpp"
#include "functions.cpp"
using namespace std;






int main(){

   char back1;
   char opt;
   
   fpage();
   cout<<"Press any key to continue....";
   cin.get();

    

   do{
    system("cls");
    mMenu();
    cout<<"                                                                                                               Your answer: ";
    cin>>opt;

    switch(opt){
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

   }while (back1 == 'y' || back1 == 'Y');

   
}



