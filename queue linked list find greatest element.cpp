//IMPLEMENT QUEUE USING LINKED LIST. FIND THE GREATEST ELEMENT IN THE QUEUE:

#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* front;
        Node* rear;
        Node* next;
        Node()
        {
          front=NULL;
          rear=NULL;
        }
        void Display(){
        if (front == NULL){
            cout << "Queue is Empty\n";
            return;
        }
        Node* n = front;
        cout<<"QUEUE: ";
        while (n != NULL){
            cout << n->data << " ";
            n = n->next;
        }
        cout << endl;
        }

        void EnQueue(int new_data){

            Node* new_node = new Node();;
            new_node->data = new_data;
            new_node->next = NULL;
            if (rear == NULL){
                front = new_node;
                rear = new_node;
            }
            else
            {
              rear->next=new_node;
              rear=new_node;
            }
            cout<<"Element inserted\n";
            Display();
        }

        void DeQueue(){
            Node* temp = front;
            if (temp == NULL){
                cout << "Queue is Empty\n";
                return;
            }
            front = temp->next;
            delete temp;
            cout<<"Element deleted\n";
            Display();
        }

        void perform()
        {
            int ch, a;
            do{
            cout << "\nEnter your choice : ";
            cin >> ch;

            switch(ch){

                case 1:
                    cout << "Enter the value to be insert to the Queue : ";
                    cin >> a;
                    EnQueue(a);
                    break;

                case 2:
                    DeQueue();
                    break;

                case 3:
                    cout<<"\nQueue Created\n";
                    break;

                default:
                    cout << "Enter a value between 1 and 4";
            }
        }while(ch != 3);
       }

       void greatest()
       {
        if(front==NULL)
        {
           cout<<"NONE";
        }
        else
        {
          Node* max=front;
          Node* t=front;
          while(t!=NULL)
          {
           if(max->data<t->data)
             max = t;
            t=t->next;
          }
          cout<<max->data;
        }
       }

};

int main(){
    cout <<"---QUEUE OPERATIONS---\n\n";
    cout << "1.Insert element in Queue \n";
    cout << "2.Delete element in Queue \n";
    cout << "3.Stop implementing Queue\n";
    Node n;
    n.perform();
    cout <<"\nTHE GREATEST ELEMENT IN THE QUEUE: ";
    n.greatest();
    return 0;
}

