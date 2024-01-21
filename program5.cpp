#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students:-  ";
    cin >> n;
    string opinion;
    int dsa[n];
    int html[n];
    int css[n];
    int studentsPassed = 0;

    for (int i = 0; i < n; i++) {
        king:
        cout << "Enter the marks of DSA of " << i + 1 << " Student:-";
        cin >> dsa[i];
        if (dsa[i] > 100) {
            cout << "Invalid marks, please enter valid marks" << endl;
            goto king;
        }
        gg:
        cout << "Enter the marks of HTML of " << i + 1 << " Student:-";
        cin >> html[i];
        if (html[i] > 100) {
            cout << "Invalid marks, please enter valid marks" << endl;
            goto gg;
        }
        chaitu:
        cout << "Enter the marks of CSS of " << i + 1 << " Student:-";
        cin >> css[i];
        if (css[i] > 100) {
            cout << "Invalid marks, please enter valid marks" << endl;
            goto chaitu;
        }

        if (dsa[i] >= 40 && html[i] >= 40 && css[i] >= 40) {
            studentsPassed++;
        }

        cout << "Do you want to print the data up to index " << i + 1 << "? (yes/no):-";
        cin >> opinion;
        while (i!=n)
        {
        if (opinion == "yes") {
            float passPercentage = float(studentsPassed) / (i + 1) * 100;
            cout << "Overall Passing Percentage:- " << passPercentage << "%" << endl;
            cout << "Overall Failed Percentage:- " << 100 - passPercentage << "%" << endl;
            break;
        }}
    }

    if (opinion != "yes") {
        float passPercentage = float(studentsPassed) / n * 100;
        cout << "Overall Passing Percentage:- " << passPercentage << "%" << endl;
        cout << "Overall Failed Percentage:- " << 100 - passPercentage << "%" << endl;
    }

    return 0;
}
