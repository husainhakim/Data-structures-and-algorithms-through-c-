#include <iostream>
using namespace std;
class Node
{
public:
int data;
Node* prev;
Node* next;
};
int main()
{
    Node* n1=new Node();
    Node* n2=new Node();
    Node* n3=new Node();
    Node* n4=new Node();
    n1->data=1;
    n1->prev=NULL;
    n1->next=n2;
    n2->data=2;
    n2->prev=n1;
    n2->next=n3;
    n3->data=3;
    n3->prev=n2;
    n3->next=n4;
    n4->data=4;
    n4->next=NULL;
    n4->prev=n3;
    Node* ptr=n1;
    cout<<"Before deleting "<<endl;
    while(ptr!=NULL)
{
    cout<<ptr->data<<endl;
ptr=ptr->next;
}
    
    n2->prev=NULL;
Node* start=n1;
delete start;
ptr=n2;
cout<<"After deleting the first node"<<endl;
while(ptr!=NULL)
{ cout<<ptr->data<<endl;
ptr=ptr->next;

}

}