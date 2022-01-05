#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
int minSubArrayLen(int target, vector<int>& nums) {
    int l=0,r=0,sum=0,final_ans=INT_MAX;
    while(l<=r and r<nums.size()){
        if(nums[r]+sum<=target){
            sum+=nums[r];
            if(sum==target){
                  final_ans=min(final_ans,r-l+1);
            }
            r++;
        }
        else{
            sum+=nums[r];
            int d=sum-target;
            while(nums[l]<=d){
                sum-=nums[l];
                d-=nums[l];
                l++;  
            }
            final_ans=min(final_ans,r-l+1);
            r++;
        }
    }
    final_ans=min(final_ans,r-l);
    if(sum<target){
        return 0;
    }
    else{
        return final_ans;
    }
    
}
int32_t main(){
	int n,target;
	cin >>n >> target;
	vector<int> nums(n);
	for(int i=0;i<n;i++){
		cin >> nums[i];
	}
	cout<<minSubArrayLen(target,nums)<<endl;
	return 0;
}