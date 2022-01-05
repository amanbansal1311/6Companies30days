#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
string gcdOfStrings(string str1, string str2) {
    return (str1+str2==str2+str1) ? str1.substr(0,gcd(str1.length(),str2.length())): "";
}
int32_t main(){
	string str1,str2;
	cin >> str1>> str2;
	cout<<gcdOfStrings(str1,str2)<<endl;
	return 0;
}