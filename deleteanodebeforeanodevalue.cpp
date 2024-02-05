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
Node* preptr=ptr;
int num=78;
while(ptr->data!=num)
{
    preptr=ptr;
    ptr=ptr->next;
}

Node* temp=preptr;
ptr=n1;

delete preptr;
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
//     n4->next = NULL;
//     n4->data = 78;
    
//     Node* ptr = n1;
//     Node* preptr = ptr;
//     int num = 78;
// cout<<"Before the deletion "<<endl;
// while(ptr!=NULL)

// {
//     cout<<ptr->data<<endl;
//     ptr=ptr->next;
// }
// ptr=n1;
// while(ptr->next->data!=num)
// {
//     preptr=ptr;
//     ptr=ptr->next;
// }
// Node* temp=p;
// preptr->next=ptr->next;
// delete temp;
// ptr=n1;
// while (ptr != NULL) {
// cout << ptr->data << endl;
// ptr = ptr->next;
//     }
// //     while (ptr->next != NULL && ptr->next->data != num) {
// //         preptr = ptr;
// //         ptr = ptr->next;
// //     }
// //     if (ptr->next != NULL) {
// //            Node* temp = ptr;
// //           preptr->next = ptr->next;
// //         delete temp;
// //     }

// // ptr = n1;


// // while (ptr != NULL) {
// // cout << ptr->data << endl;
// // ptr = ptr->next;
// //     }

//     return 0;
// }
 