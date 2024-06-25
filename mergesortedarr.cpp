#include<iostream>
#include<vector>
using namespace std;
vector<int>merge(vector<int>& v1,vector<int>& v2)
{
    int n=v1.size();
    int m=v2.size();
    vector<int>res(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1 && j<=m-1)
    {
        
        if(v1[i] < v2[j]){
            res[k]=v1[i];
            i++;
           
        }
        else{
            res[k]=v2[j];
            j++;
        }
        k++;

    }
    if(i==n)
    {
        while(j<=m-1)
        {
            res[k]=v2[j];
            j++;
            k++;
        }
    }
    if(j==m)
    {
        while(i<=n-1)
        {
            res[k]=v1[i];
            i++;
            k++;
        }
    }
    return res;

}
int main()
{
    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    
    vector<int>arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);

    vector<int>arr3 = merge(arr1,arr2);
    for(int i=0;i<arr3.size();i++)
    {
        cout<<arr3[i]<<" ";
    }


}