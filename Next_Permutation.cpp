#include<bits/stdc++.h>
using namespace std;
 
 void Comb(int ind, vector<int>&nums, vector<vector<int>>&ans)
 {
    if(ind == nums.size())
    {
        ans.push_back(nums);
        for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
        }
        cout<<endl;
        return;

    }
    for(int i = ind; i < nums.size(); i++)
    {
        swap(nums[i], nums[ind]);
        Comb(ind+1, nums, ans);
        swap(nums[i], nums[ind]);
    }
 }
void nextPermutation(vector<int>& nums)
 {
      vector<vector<int>> ans;
      Comb(0, nums,ans);
 }

 void printPerm(vector<int>&num){
     
     for(int i = 0; i <num.size(); i++)
     cout<<num[i]<<" ";
 }
int main()
{ 
    
    vector<int> num = {1,2,3};
    nextPermutation(num);
    return 0;
}