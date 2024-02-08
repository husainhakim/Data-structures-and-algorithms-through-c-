//demonstration of circular linked list
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
  
};

int main()
{
    
    Node* n1=new Node();
    Node* n2=new Node();
    Node* n3=new Node();
    Node* n4=new Node();
    n1->data=1;
    n1->next=n2;
    n2->data=2;
    n2->next=n3;
    n3->data=3;
    n3->next=n4;
    n4->data=4;
    n4->next=n1;
    Node* start=n1;
    Node* ptr=n1;
    Node* preptr=ptr;
    cout<<"Before inserting in the end"<<endl;
    while(preptr->next!=start)
    {
        cout<<ptr->data<<endl;
        preptr=ptr;
        ptr=ptr->next;
    }
    Node* n5=new Node();
    n5->data=5;
    n5->next=n1;
    ptr=n1;

    while(ptr->next!=start)

    {
        ptr=ptr->next;
    }
    ptr->next=n5;
    start=n5;
     ptr=start;
    preptr=ptr;
    cout<<"After insertion: "<<endl;
    while (preptr->next!=start)
    {
        preptr=ptr;
        cout<<preptr->data<<endl;
        ptr=ptr->next;
}
}