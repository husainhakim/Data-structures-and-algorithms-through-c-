#include <iostream>
using namespace std;
class Node{
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

n1->data=1;
n1->next=n2;
n2->data=2;
n2->next=n3;
n3->data=3;
n3->next=n4;
n4->data=4;
n4->next=NULL;
Node* ptr=n1;
//traversing in the nodes and printing theri values
while (ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
//insertion in the begijning
Node* n5=new Node();
n5->data=5;
n5->next=n1;
ptr=n5;
cout<<"After inserting 5 in the start"<<endl;
while(ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
ptr=n5;
//insertion in the end
Node* n6=new Node();
n6->data=6;
n6->next=NULL;
n4->next=n6;
cout<<"After inserting 6 in the end"<<endl;
while (ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
ptr=n5;
//searching for a node whose value is 3;
int value=3;
int pos=1;
while(ptr!=NULL)
{
    
    if (value==ptr->data)
    {
        break;
    }
    else{
        ptr=ptr->next;
        pos++;
    }
}
cout<<"Value "<<value<<" is at found at position "<<pos<<endl;
//insertion anywhere in the middle after a node whose data is set as 4
int valueinsertafter=4;
ptr=n5;
while(ptr!=NULL &&ptr->data!=valueinsertafter)
{
    ptr=ptr->next;
}
Node* n7=new Node();
n7->data=7;
if(ptr!=NULL)
{
    n7->next=ptr->next;
    ptr->next=n7;
}
ptr=n5;
cout<<"After insertion in the middle after the value 4"<<endl;
while (ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
}
