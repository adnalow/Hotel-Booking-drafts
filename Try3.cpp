#include <iostream>







using namespace std;



int mSize = 10;



class Queue{

private:

    int queue[10], rear, front;



public:

    Queue(){

    front = -1;

    rear = -1;

    }



    void qinsert(int item){



        if(rear==mSize-1){

            cout<<"\nCAUTION!!! QUEUE OVERFLOW";

        }else if(front==-1 && rear==-1){

            front=rear=0;

            queue[rear]=item;

            cout<<"\nITEM INSERTED: "<<item;

            cout << endl;

        }else{

            rear++;

            queue[rear]=item;

            cout<<"\nITEM INSERTED: "<<item;

            cout << endl;

        }

    }



    void qdelete(){



        int item;



        if(rear==-1){

            cout<<"\nQUEUE UNDERFLOW";

        }else if(front==0 && rear==0){

            item=queue[front];

            front=rear=-1;

            cout<<"\n\nITEM DELETED: "<<item;

            cout << endl;

        }else{

            item=queue[front];

            front++;

            cout<<"\n\nITEM DELETED: "<<item;

            cout << endl;

        }

    }



    void qtraverse(){



        if(front==-1){

            cout<<"\n\nQUEUE IS EMPTY\n";

        }else{

            cout<<"\n\nQUEUE ITEMS\n";

            for(int i=front;i<=rear;i++){

            cout<<queue[i]<<" ";

        }

            cout<<endl;

    }

    }

    };



int main(){

    int choice, num;

    Queue myqueue;

    cout << "\nInsert the no. of numbers you want to input: ";

    cin >> choice;



    while(choice!=0){

            cout << "Insert Number: ";

            cin >> num;

            myqueue.qinsert(num);

            cout << endl;

            choice--;

        }

    myqueue.qtraverse();



    myqueue.qdelete();

    myqueue.qtraverse();



    return 0;

}
