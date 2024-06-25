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
    
    cout<<"the elements in wave spiral form are"<<endl;
   
    int minr=0;
    int minc=0;
    int maxc=n-1;
    int maxr=m-1;
    while(minr<=maxr && minc<=maxc)
    {
        for (int j = minc; j <= maxc; j++)
        {
            cout<<a[minr][j]<<" ";
        }
        
        minr++;
        if(minr>maxr || minc>maxc) break;
        for (int i= minr; i <= maxr; i++)
        {
            cout<<a[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for (int j = maxc; j >= minc; j--)
        {
            cout<<a[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        for (int i = maxr; i >= minr; i--)
        {
            cout<<a[i][minc]<<" ";
        }
        minc++;
        if(minr>maxr || minc>maxc) break;
        
    }
    
}