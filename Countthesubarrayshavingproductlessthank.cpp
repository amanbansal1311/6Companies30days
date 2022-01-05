#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
	int final_ans=0,prod=1,l=0,r=0;
	while(r<n){
		prod*=a[r];
		if(prod>=k){
			while(prod>=k and l<n){
				prod=prod/a[l];
			    l++;
			}
		}
		if(prod<k){
			final_ans+=r-l+1;
			r++;
		}
	}
	return final_ans;
}
int32_t main(){
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cout<<countSubArrayProductLessThanK(a,n,k)<<endl;
	return 0;
}