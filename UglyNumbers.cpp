#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
int nthuglynumber(int n){
	int a[n+1];
	a[1]=1;
	int p2=1,p3=1,p5=1,i=2;
	while(i<=n){
		a[i]=min(2*a[p2],min(3*a[p3],5*a[p5]));
		if(a[i]==2*a[p2]){
			p2++;
		}
		if(a[i]==3*a[p3]){
			p3++;
		}
		if(a[i]==5*a[p5]){
			p5++;
		}
		i++;
	}
	return a[n];
}
int32_t main(){
	int n;
	cin >> n;
	cout<<nthuglynumber(n)<<endl;
	return 0;
}