#include <iostream>
using namespace std;

struct Node{
    int data;
    Node * next;
};
//function for displaying
void printList(Node*head){
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}
int main (){ 
    //creating nodes
    Node*head= new Node();
    Node*second= new Node();
    Node*third= new Node();
    //assigining data
    head->data=10;
    second->data=20;
    third->data=30;
    //linking nodes
    head->next=second;
    second->next=third;
    third->next=NULL;
    //function call
    printList(head);
    return 0;
}