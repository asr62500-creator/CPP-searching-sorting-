#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
};

void insertFront(Node*& Head, int value){
    Node* newNode = new Node;
    newNode->data = value;
    newNode ->next = NULL; // newNode → [value | NULL]

    //If List Empty
      if (Head == NULL){
       
        Head = newNode;
        return;
    }
    // if List is not Empty
       Node* temp = Head;

    while (temp->next != NULL){
        temp = temp->next;
    }

    newNode->next = temp->next; //Attach New Node
    temp->next = newNode;
}
 
void displayList(Node*Head){
    Node* temp = Head;
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next; // shift ponter to the next node value
    }
    cout << "NULL" << endl; // When list end we print NULL and Stop
}

int main(){
    Node*Head=NULL;

    insertFront(Head,10);
    insertFront(Head,20);
    insertFront(Head,30);
    insertFront(Head,40);

    cout<<"Linked List:";
    displayList(  Head  );
    
    return 0;
}