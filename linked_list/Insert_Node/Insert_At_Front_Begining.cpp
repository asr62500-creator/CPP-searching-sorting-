// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node * next;
// };

// void insertFront(Node*& Head, int value){
//     Node* newNode = new Node;
//     newNode->data = value;
//     newNode ->next = NULL; // newNode → [value | NULL]

//     //If List Empty
//       if (Head == NULL){
       
//         Head = newNode;
//         return;
//     }
//     // if List is not Empty
//        Node* temp = Head;

//     while (temp->next != NULL){
//         temp = temp->next;
//     }

//     newNode->next = temp->next; //Attach New Node
//     temp->next = newNode;
// }
 
// void displayList(Node*Head){
//     Node* temp = Head;
//     while(temp != NULL)
//     {
//         cout << temp->data << " -> ";
//         temp = temp->next; // shift ponter to the next node value
//     }
//     cout << "NULL" << endl; // When list end we print NULL and Stop
// }

// int main(){
//     Node*Head=NULL;

//     insertFront(Head,10);
//     insertFront(Head,20);
//     insertFront(Head,30);
//     insertFront(Head,40);

//     cout<<"Linked List:";
//     displayList(  Head  );
    
//     return 0;
// }

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void displayList(Node*Head){
    Node*temp=Head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null";
}
void insertBegining(Node*&Head,int value){
    //Firstly create a NewNode then insert data in it and then set its pointer as well as shift head to newNode;
    Node*newNode=new Node;
    newNode->data=value;
    newNode->next=Head;
    Head=newNode;
}
void insertEnd(Node*&Head,int value){

}

int countNodes(Node* head){
    int count = 0;
    Node* temp = head;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    return count;
}
int main(){
    //Create a List
    Node*Head=new Node();
    Node*second=new Node();
    Node*third=new Node();

    //Enter Data in it
    Head->data=20;
    second->data=30;
    third->data=40;

    //Set pointers 
    Head->next=second;
    second->next=third;
    third->next=NULL;

    //fuction call to Print/display the list
    cout<<"Original Link List: ";
    displayList(Head);

    cout << "\nNumber of nodes = " << countNodes(Head);

    //Add newNOde
    //function call to enter the newNode at the Begining
    insertBegining(Head,10);

    cout<<"\n After linking newNode: ";
    displayList(Head);

    cout << "\nNumber of nodes = " << countNodes(Head);
    
    return 0;
}