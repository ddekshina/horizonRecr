#include <iostream>
using namespace std;
int main()
{   
    int A[100];
    float a,s=0;char c; float avg; int n;
    cout <<"Enter 1 to start the program\n";
    cin >> n;
    if(n==1)
    {
        while(n>0)
        {
            cout <<"Enter number: ";
            cin >> a;
            //To check whether number is repeated
            A[n-1]=a; 
            for(int i = 0;i < n; i++)
            {
                for (int j = i+1; i < n-i-1; j++)
                {
                    if(A[i]==A[j])
                    {
                        a=0;
                        
                    }
                }
                
            }
            //Calculation of average
            s=s+a;
            avg=s/(float)n;
            cout <<"Average: "<< avg;
            cout<< "\nEnter y/n to continue/terminate the program\n";
            cin >> c;
            
            if(c!='y'&&c!='n')
            {
                cout<< "Invalid Input";
                break;
            }
            else
            {
                switch (c)
                {
                    case 'y':
                        n++;
                        break;
                    case 'n':
                        cout<< "Program terminated";
                        n=0;
                        break;
                }
                
            }
        }
    }
    else
    {
        cout<< "Invalid Input";
    }
    return 0;
}
