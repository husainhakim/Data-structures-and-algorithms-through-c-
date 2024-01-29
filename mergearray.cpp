#include <iostream>
using namespace std;
int main() {
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int mergedArray[size1 + size2];

    // Copy elements from array1 to mergedArray
    for (int i = 0; i < size1; ++i) {
        mergedArray[i] = array1[i];
    }

    // Copy elements from array2 to mergedArray
    for (int i = 0; i < size2; ++i) {
        mergedArray[size1 + i] = array2[i];
    }

    // Display the merged array
   cout << "Merged Array: ";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << mergedArray[i] << " ";
    }
    cout<<endl;

    return 0;
}
