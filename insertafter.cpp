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
     Node* start=n1;
     Node* ptr=start;
    n1->data=1;
    n1->next=n2;
    n2->data=3;
    n2->next=n3;
    n3->data=3;
    n3->next=n4;
    n4->data=4;
    n4->next=start;
    if (start==NULL)
    {
        cout<<"Overflow"<<endl;
        return 1;
    }
Node* n5=new Node();
n5->data=5;
n5->next=start;
while(ptr->next!=start)
{
    ptr=ptr->next;
}
ptr=n5;
}

