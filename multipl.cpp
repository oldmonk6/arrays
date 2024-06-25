#include<iostream>
using namespace std;
int main()
{
    int m,n,p,q;
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
    cout<<"the elements are"<<endl;;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"enter the number of rows of second matrix";
    cin>>p;
    cout<<"enter the number of columns of second matrix";
    cin>>q;
    int b[p][q];
    cout<<"enter the elements of the second matrix";
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"the elements are"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    if(n!=p)
    {
        cout<<"invalid matrix";
    }
    else{
        int res[m][q];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                res[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    res[i][j]=res[i][j]+(a[i][k]*b[k][j]);

                }
            }
        }
        cout<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}