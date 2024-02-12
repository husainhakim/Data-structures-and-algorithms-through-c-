// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     Node *prev;
//     int data;
//     Node *next;
// };

// int main()
// {
//     Node *start;
//     Node *n1=new Node();
//     start=n1;
//     Node *n2=new Node();
//     Node *n3=new Node();
//     Node *n4=new Node();

//     n1->prev=NULL;
//     n1->data=1;
//     n1->next=n2;

//     n2->prev=n1;
//     n2->data=2;
//     n2->next=n3;

//     n3->prev=n2;
//     n3->data=3;
//     n3->next=n4;

//     n4->prev=n3;
//     n4->data=4;
//     n4->next=NULL;

//    Node *ptr=n1;
// cout<<"Before inserting the node after value 3"<<endl;
// while(ptr!=NULL)
// {
//     cout<<ptr->data<<endl;
//     ptr=ptr->next;
// }
// int value=3;
// Node* n5=new Node();
// n5->data=5;
// ptr=n1;
// while(ptr->data!=value)

// {
//     ptr=ptr->next;
// }
// n5->prev=ptr;
// n5->next=ptr->next;
// ptr->next=n5;
// ptr->next->prev=n5;
// ptr=n1;
// cout<<"After inserting "<<endl;
// while(ptr!=NULL)
// {
//     cout<<ptr->data<<endl;
//     ptr=ptr->next;
// }
// }
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
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
    n4->prev=n3;
    n4->next=NULL;
    Node* ptr=n1;
    cout<<"Before inserting"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    Node* preptr=n1;
    ptr=n1;
    int value=3;
    while(ptr->data!=value)
    {
        preptr=ptr;
ptr=ptr->next;
    }
    Node* n5=new Node();
    n5->data=5;
    n5->prev=preptr;
    n5->next=ptr;
    preptr->next=n5;
    ptr->prev=n5;
    ptr=n1;
    cout<<"After inserting"<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}