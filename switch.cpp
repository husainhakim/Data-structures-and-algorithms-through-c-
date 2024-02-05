#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

void search()
{
Node* n1=new Node();
Node* n2=new Node();
Node* n3=new Node();
n1->data=1;
n1->next=n2;
n2->data=2;
n2->next=n3;
n3->data=3;
n3->next=NULL;
Node*ptr=n1;
int value=2;
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
cout<<value<<" found at position "<<pos<<" in the linked list"<<endl;
}
void insertioninstart()
{
Node* n1=new Node();
Node* n2=new Node();
Node* n3=new Node();
n1->data=1;
n1->next=n2;
n2->data=2;
n2->next=n3;
n3->data=3;
n3->next=NULL;
Node*ptr=n1;
cout<<"Before insertion in the start"<<endl;
while(ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
Node* n4=new Node();
n4->data=4;
n4->next=n1;
ptr=n4;
cout<<"After insertion in the start"<<endl;
while(ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
}
void insertinmiddle()
{ 
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();
    Node* n4 = new Node();

    n1->data = 1;
    n1->next = n3;
    n2->data = 2;
    n2->next = n3;
    n3->data = 3;
    n3->next = n4;
    n4->data = 4;
    n4->next = NULL;

    Node* ptr = n1;

    cout << "Before insertion in the middle:" << endl;
    while (ptr != NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

    ptr = n1;
    int value = 3;

    
    while (ptr != NULL && ptr->data != value) {
        ptr = ptr->next;
    }
Node* n5 = new Node();
        n5->data = 5;
    if (ptr != NULL) {
        

        n5->next = ptr->next;
        ptr->next = n5;
    }

    
    ptr = n1;

    cout << "After insertion in the middle:" << endl;
    while (ptr != NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}
void traverse()
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
Node*ptr=n1;  
while(ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
}
void insertioninend()
{
Node* n1=new Node();
Node* n2=new Node();
Node* n3=new Node();
n1->data=1;
n1->next=n2;
n2->data=2;
n2->next=n3;
n3->data=3;
n3->next=NULL;
Node*ptr=n1;
cout<<"Before insertion in the end"<<endl;
while(ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
Node* n4=new Node();
n4->data=4;
n4->next=NULL;
n3->next=n4;
ptr=n1;
cout<<"After insertion in the end"<<endl;
while(ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
}
#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "What do you want to perform \n1) Traverse\n2) Search\n3) Insert new node in start\n4) Insert new node in end\n5) Insert new node in middle\nWhat do you perform (1-5): " << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            traverse();
            break;

        case 2:
            search();
            break;

        case 3:
            insertioninstart();
            break;

        case 4:
            insertioninend();
            break;

        case 5:
            insertinmiddle();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
    return 0;
}
//deleting first node
//deleting last node
//deleting a node after a given node