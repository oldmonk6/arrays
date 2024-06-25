#include<iostream>
#include<vector>
using namespace std;

void sort1(vector<int>& nums)
{
    int n=nums.size();
    int lo=0;
    int hi=n-1;
    int mid=0;
    while(mid<=hi)
    {
   if(nums[mid]==2)
   {
    int temp=nums[mid];
    nums[mid]=nums[hi];
    nums[hi]=temp;
    hi--;

   }
   else if(nums[mid]==0)
   {
    int temp=nums[mid];
    nums[mid]=nums[lo];
    nums[lo]=temp;
    lo++;
    mid++;

   }
   else
   {
    mid++;
   }
    }

}
int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
  
    sort1(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
    
    
}
