#include <iostream>
using namespace std;
int main()
{   
    
    float a,s=0;char c; float avg; int n;
    cout <<"Enter 1 to start the program\n";
    cin >> n;
    if(n==1)
    {
        while(n>0)
        {
            cout <<"Enter number: ";
            cin >> a;
            s=s+a;
            avg=s/(float)n;
            cout <<"Average: "<< avg;
            cout<< "\nEnter y/n to continue/terminate the program\n";
            cin >> c;
            switch (c)
            {
                case 'y':
                    n++;
                    break;
                case 'n':
                    cout<< "Program terminated";
                    n=0;
                    break;
            
            default:
                cout<< "\nInvalid Input";
                break;
            }
            
        }
    }
    else
    {
        cout<< "Invalid Input";
    }
    return 0;
}
