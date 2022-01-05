#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

int32_t main(){
	int n , m , k;
	cin >> n >> m >> k;
	if(m<=n-k+1){
		cout<<k+m-1<<endl;
	}
	else{
		m=m-(n-k+1);
		if(m%n==0){
			cout<<n<<endl;
		}
		else{
			cout<<m%n<<endl;
		}
	}
	return 0;
}