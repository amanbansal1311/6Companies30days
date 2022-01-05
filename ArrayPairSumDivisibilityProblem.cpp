#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
bool canPair(vector<int> nums, int k) {
    vector<int> a(k,0);
    for(int i=0;i<nums.size();i++){
        a[nums[i]%k]++;
    }
    bool ans=true;
    if(a[0]%2!=0){
        ans=false;
    }
    if(a[k/2]%2!=0 and k%2==0){
        ans=false;
    }
    int l=1,r=k-1;
    while(l<r){
       if(a[l]!=a[r]){
           ans=false;
           break;
       }
       else{
           l++,r--;
       }
    }
    return ans;
}
int32_t main(){
	int n,k;
	cin >>n >> k;
	vector<int> res(n);
	for(int i=0;i<n;i++)
		cin>>res[i];
	cout<<canPair(res,k)<<endl;
	return 0;
}