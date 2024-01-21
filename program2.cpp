//write a c++ program to read display n numbers and find mean of n numbers using an array
#include <iostream>
using namespace std;
int main() {
    int count;
    cout << "Enter the number of elements in the array: ";
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++) {
        cout << "Enter the " << i + 1 << "th element of the array: ";
        cin >> arr[i];
    }
    cout << "Array elements: ";
    for (int i = 0; i < count; i++) {
        cout << arr[i] <<endl;
    }
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += arr[i];
    }
    int mean=sum/(sizeof(arr)/sizeof(arr[0]));
    cout << "Mean of the array: " << mean << endl;
    return 0;
}


