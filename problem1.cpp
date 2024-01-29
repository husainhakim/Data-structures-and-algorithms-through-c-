// we have two arrays first of size 28 named girls and second array named array of size 28 and both arrays are in sorted way containing marks, we have to create a third array of size=array size of girl+ array size of array and have to insert  the marks in sorted way
#include <iostream>
using namespace std;
void Sparshva(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
     int aray = 28;
    int boys[aray];
    int girls[aray];
    int combined[56];

    for (int i = 0; i < aray; ++i) {
        boys[i] = 2 * i + 1;
        girls[i] = 2 * (i + 1);
        combined[i * 2] = boys[i];b
        combined[i * 2 + 1] = girls[i];
    }
    Sparshva(combined, aray * 2);
   cout << "Hi: ";
    for (int i = 0; i < aray * 2; ++i) {
    cout << combined[i] << " ";
    }
    return 0;
}
