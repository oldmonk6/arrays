#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter the number of rows of first matrix";
    cin>>m;
    cout<<"enter the number of columns of first matrix";
    cin>>n;
    int a[m][n];
    cout<<"enter the elements of the first matrix";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"the elements are"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the elements in wave form are"<<endl;
   
    /*for (int i=0;i<m;i++) 
    {
         if(i%2!=0)
            {
                int k=n-1;
                while(k>=0)
                {
                    cout<<a[i][k]<<" ";
                    k--;
                }
                cout<<endl;
            }
         else{
             for(int j=0;j<n;j++)
            {
            
                cout<<a[i][j]<<" ";
            
            }
            cout<<endl;

            }
       
        }*/
    
}