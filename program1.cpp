#include <iostream>
using namespace std;

int main() {
    int a[5] = {11, 12, 13, 14, 15};

    
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] <<endl;
    }
    cout<<a[0]<<endl;
 
cout<<a<<endl;//adress of the array
//the name of the array is a constant pointer and it's value cannot be changed
//if the adress of the array could be changed then it could forget the adress of the elements of the array
int *ptr;
ptr=a;//this is how the pointer is supposed to be written when it is initialized
// since ++ptr and ptr++ are both equivalent to ptr+1,it icrements a pointer using unary++ operator 
//it increments the adress by the amount of size of(type) whee the type is the data type of the variable it points to 
//if we try to initialize the array base adress with other pointer variables this operation is not allowed because name of array is equivalent to adress of its first element and is known to be a constant pointer 
cout<<1[a]<<endl;
cout<<*(a+1)<<endl;
cout<<*(1+a)<<endl ;
cout<<sizeof(a)/sizeof(a[0]);

}

