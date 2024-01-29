// we have two arrays first of size 28 named girls and second array named array of size 28 and both arrays are in sorted way containing marks, we have to create a third array of size=array size of girl+ array size of array and have to insert  the marks in sorted way
#include <iostream> 
using namespace std;

int main() {
    int size = 28;
    int boys[size];
    int girls[size];

    
    for (int i = 0; i < size; i += 2) {
        boys[i] = i;
    }

    
    cout << "Boys Array: ";
    for (int i = 0; i < size; i++) {
        cout << boys[i] << " ";
    }
    cout << endl;

    // Filling the girls array with odd values (just as an example, you can modify this as needed)
    for (int i = 1; i < size; i += 2) {
        girls[i] = i;
    }

   
    cout << "Girls Array: ";
    for (int i = 0; i < size; i++) {
        cout << girls[i] << " ";
    }
    cout << endl;

    return 0;
}