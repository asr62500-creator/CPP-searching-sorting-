#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};
// ********************************************* DISPLAYlist **********************************************************//
void displayList(Node*Head){
    Node*temp=Head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null";
}
// ******************************************** INSERT at BEGINING *****************************************************//
void insertBegining(Node*&Head,int value){
    //Firstly create a NewNode then insert data in it and then set its pointer as well as shift head to newNode;
    Node*newNode=new Node;
    newNode->data=value;
    newNode->next=Head;
    Head=newNode;

    //If list is empty
    if(Head==NULL){
        Head=newNode;
    }
}
// ******************************************** INSERT at LAST *******************************************************//
void insertEnd(Node*&Head,int value){
     Node*newNode=new Node;
    newNode->data=value;
    newNode->next=NULL;

    //If list is empty
    if(Head==NULL){
        Head=newNode;
    }
    
    Node* temp = Head;
    // move to last node
    while(temp->next != NULL){
        temp = temp->next;
    }
    // attach new node
    temp->next = newNode;

}
// ********************************************* COUNTnodes **********************************************************//
int countNodes(Node* head){
    int count = 0;
    Node* temp = head;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
// ********************************************* MAIN **************************************************************//
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

    //count the no of Nodes
    cout << "\nNumber of nodes  = " << countNodes(Head);

    //Add newNOde at Front
    //function call to enter the newNode at the Begining
    insertBegining(Head,10);

    //count the no of Nodes
    cout<<"\nList after Link newNode at FRONT: ";
    displayList(Head);

    //count the no of Nodes
    cout << "\nNumber of nodes * = " << countNodes(Head);

    //Add newNOde at LAST
    insertEnd(Head,50);

    cout<<"\nList after Linking newNode at LAST: ";
    displayList(Head);

    cout << "\nNumber of nodes ** = " << countNodes(Head);

    return 0;
}