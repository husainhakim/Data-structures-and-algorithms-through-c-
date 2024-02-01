
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    
    Node* node1 = new Node();
    node1->data = 33;
    Node* node2 = new Node();
    node2->data = 48;
    node1->next = node2;1
    

    Node* node3 = new Node();
    node3->data = 51;
    node3->next = NULL;
    node2->next = node3;
    cout << "Node 1 data-" << node1->data << endl;
    cout << "Node 2 data:-" << node2->data << endl;
    cout << "Node 3 data:-" << node3->data << endl;
    return 0;
}
