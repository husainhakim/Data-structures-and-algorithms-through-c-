#include <iostream>
using namespace std;

const int MAX = 5;
class Array {
private:
    int arr[MAX];

public:
    void insert(int pos, int num);
    void del(int pos);
    void reverse();
    void display();
    void search(int num);
};
//Inseerts an element num at given position (pos)
void Array::insert(int pos, int num) {
    

    int i;
    //shifts elements to the right
    for (i = MAX - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[i] = num;
    cout<<endl;
}
void Array::del(int pos)
{
    int i;
    //skip to the desired position
    for (i=pos;i<MAX;i++)
    arr[i-1]=arr[i];
arr[i-1]=0;
cout<<endl;
}
//reverses the entire array 
void Array::reverse()
{
    for (int i=0;i<MAX/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[MAX-1-i];
        arr[MAX-1-i]=temp;
    }
    cout<<endl;
}
void Array::search(int num)
{
    int i;
    for (i=0;i<MAX;i++)
    {
        if (arr[i]==num){
            cout<<"Element"<<" is at position"<<i+1<<"th position"<<endl;
            return;
        }
    }
    if (i==MAX)
    {
        cout<<"Element "<<num<<" is not present in the array"<<endl;
    }
}
//displays the contents of the array
void Array::display() {
    for (int i = 0; i < MAX; i++) {
        cout<<arr[i]<<" ";
    }
    
}

int main() {
    Array a;
    a.insert(1, 11);
    a.insert(2, 12);
    a.insert(3, 13);
    a.insert(4, 14);
    a.insert(5, 15);
    cout << "Elements of the array: ";
    a.display();
    a.del(5);
    a.del(2);
    cout<<"After deletion :";
    a.display();
    a.insert(2,222);
    a.insert(5,555);
    cout<<"After insertion :";
    a.display();
    a.reverse();
    cout<<"After reversing: ";
    a.display();
    a.search(222);
    a.search(666);
    return 0;
}
