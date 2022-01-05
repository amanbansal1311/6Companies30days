#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
string encode(string src){                                               
  string p="";
  int i=0,count=0;
  while(i<src.length()){
      if(src[i+1]==src[i]){
          count++;
          i++;
      }
      else{
          p+=src[i];
          int d=count+1;
          p+=d+'0';
          count=0;
          i++;
      }
  }
  return p;
 }
int32_t main(){
	string s;
	cin >>s;
	cout<<encode(s);
	return 0;
}