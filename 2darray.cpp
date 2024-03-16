#include<iostream>
using namespace std;

void teacher(float teares[5][10])
{
    for(int i=0;i<5;i++)
    {
        cout<<"\nsubject "<<i+1;
        int failed=0;
        int passed=0;
        int topper=0;

        for(int j=0;j<10;j++)
        {
            if (teares[i][topper]<=teares[i][j])
            {
                j=topper;
            }
            if (teares[i][j]<40)
            {
                
                failed++;
            }
            else
            {    
                passed++;
            }
        }
        cout<<"\nfailed percentage "<<failed*100/10<<"%";
        cout<<"\npassing percentage "<<passed*100/10<<"%\n";
        cout<<"\nSUBJECT TOPPER IS student "<<topper+1<<" got : "<<teares[i][topper]<<" marks \n";
    }
}

void student(float studres[5][10])
{
    for(int i=0;i<10;i++)
    {
        cout<<"\n";
        int top=0;
        float sum=0.0;
        for(int j=0;j<5;j++)
        {
            cout<<"Marks in subject "<<j+1<<" : "<<studres[j][i]<<" \n";
            sum+=studres[j][i];
            if (studres[top][i]<=studres[j][i]){
                top=j;
            }
        }
        cout<<"\nTotal Marks obtained = "<<sum<<" out of "<<5*100<<" ";
        cout<<"\nPercentage Marks = "<<sum*100/500<<"% \n";
        cout<<"Top performed in subject "<<top<<" Top marks is "<<studres[top][i];
    }
}

int main() {
    float result[5][10];

    for (int i=0;i<5;i++)
    {
        cout<<"\nsubject "<<i+1;
        for (int j=0;j<10;j++)
        {
            cout<<"\nenter the mark of student "<<j+1<<" in subject "<<i+1<<" : ";
            cin>>result[i][j];
        }
    }

    while (true){
    again:
    char choice;
    cout<<"TEACHER(t)/STUDENT(s): ";
    cin>>choice;
    if (toupper(choice) =='T')
    {
        teacher(result);
    }
    else if (toupper(choice)=='S')
    {
        student(result);
    }
    else{
        cout<<"\nINVALID INPUT!!...";
        goto again;
    }
    }

    return 0;
}
