
#include <iostream>
using namespace std;

int main() {
    int count;
    cout << "Enter the number of students in the class: " << endl;
    cin >> count;

    int passindsa = 0;
    int failindsa = 0;

    int arr[count];
    for (int i = 0; i < count; i++) {
        cout << "Enter the marks of " << i + 1 << "th student in DSA out of 100: " << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < count; i++) {
        if (arr[i] >= 40) {
            passindsa += 1;
        } else {
            failindsa += 1;
        }
    }

    cout << "Passed students count: " << passindsa << endl;
    cout << "Failed students count: " << failindsa << endl;

    
    float percentage = (float)passindsa / count * 100;
    
    cout << "Percentage of students passed is " << percentage << "%" << endl;

    return 0;
}
