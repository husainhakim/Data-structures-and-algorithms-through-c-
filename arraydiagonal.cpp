//Calculate the  multiple of elements in the main diagonal of a 2D array.
#include <iostream>
using namespace std;

int main() 
{int sum=0;
    int n, multiple=1;
    cout << "Enter the size of the square array:-";
    cin >> n;
    int arr[n][n];
    if (n <= 0)
    {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1;
    }
    cout << "Enter the elements of the 2D array:-" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> arr[i][j];
        }
    }
    cout << "2D Array:-" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout <<" | " << arr[i][j] << " | ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) 
    {
         multiple=multiple*arr[i][i];
         
    }
    for (int i = 0; i < n; i++) 
    {
         sum=sum+arr[i][i];
         
    }
     cout<<"Sum of elements in the main diagonal:-"<<sum<<endl;
    cout << "Multiple of elements in the main diagonal:-" <<  multiple << endl;
    return 0;
}