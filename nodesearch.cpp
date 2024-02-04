#include <iostream>
using namespace std;
class Node
{
public:
int data;
Node*next;
};
int main()
{
Node*n1=new Node();
Node*n2=new Node();
Node*n3=new Node();
Node*n4=new Node();
n1->data=1;
n1->next=n2;
n2->data=2;
n2->next=n3;
n3->data=3;
n3->next=n4;
n4->data=4;
n4->next=NULL;
Node*ptr=n1;
int value=4;
int pos=1;
while (ptr!=NULL)
{
    if(value==ptr->data)
    {
        break;
    }
    else{
        ptr=ptr->next;
        pos++;
    }
}


cout<<"value: "<<value<<" found at position "<<pos<<" in the linked list"<<endl;
}