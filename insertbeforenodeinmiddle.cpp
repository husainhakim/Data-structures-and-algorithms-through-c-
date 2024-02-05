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
    n1->data=21;
    n1->next=n2;
    n2->data=28;
    n2->next=n3;
    n3->data=61;
    n3->next=n4;
    n4->next=NULL;
    n4->data=78;
    Node* ptr=n1;
    Node* n5=new Node();
   Node* preptr=ptr;
    int num=78;
    while(ptr->data!=num)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=n5;
    n5->next=ptr;
    n5->data=91;
    ptr=n1;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }


}

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
// };

// int main() {
//     Node* n1 = new Node();
//     Node* n2 = new Node();
//     Node* n3 = new Node();
//     Node* n4 = new Node();

//     n1->data = 21;
//     n1->next = n2;
//     n2->data = 28;
//     n2->next = n3;
//     n3->data = 61;
//     n3->next = n4;
//     n4->data = 78;
//     n4->next = NULL;

//     Node* start = n1;

//     cout << "Before deleting node" << endl;
//     while (start != NULL) {
//         cout << start->data << endl;
//         start = start->next;
//     }


//     Node* ptr = n1;
//     start = n1->next;  
//     delete ptr;

//     cout << "After deleting node" << endl;
//     while (start !=NULL) {
//         cout << start->data << endl;
//         start = start->next;
//     }
//     return 0;
// }
