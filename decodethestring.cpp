#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
string decodedString(string s){
        string ans;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]==']'){
                string temp;
                while(!st.empty() and st.top()!='['){
                    temp=st.top()+temp;
                    st.pop();
                }
                st.pop();
                string r;
                while(!st.empty() and isdigit(st.top())){
                    r=st.top()+r;
                    st.pop();
                }
                int d=stoi(r);
                string conce;
                for(int i=0;i<d;i++){
                    conce+=temp;
                }
                for(char c:conce){
                    st.push(c);
                }
                
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
        
}
int32_t main(){
	string s;
	cin >>s;
	cout<<decodedString(s)<<endl;
	return 0;
}