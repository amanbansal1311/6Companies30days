#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

int32_t main(){
	int n;
	cin >>n;
	int k=1;
	int sum=0;
	while(k<=n){
		sum+=k*k;
		k++;
	}
	cout<<sum<<endl;
	return 0;
}