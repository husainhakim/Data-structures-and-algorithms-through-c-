#include <iostream>
using namespace std;
class Node
{
public:
int data;
Node* next;
};
int main()
{
    Node* n1=new Node();
    Node* n2=new Node();
    Node* n3=new Node();
    Node* n4=new Node();
    Node* ptr=n1;
    n1->data=1;
    n1->next=n2;
    n2->data=2;
    n2->next=n3;
    n3->data=3;
    n3->next=n4;
    n4->data=4;
    n4->next=NULL;
    cout<<"Before insertion in the end"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    Node*n5=new Node();
    n4->next=n5;
    n5->data=5;
    n5->next=NULL;
    ptr=n1;
    cout<<"After insertion in the end"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}