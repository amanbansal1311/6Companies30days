#include<bits/stdc++.h>
using namespace std;
#define int long long int
void Anagrams(vector<string>& string_list) {
        vector<vector<string>>res;
        for(int i=0;i<string_list.size();i++){
            vector<string>v;
            string s=string_list[i];
            if(s!="-1"){
                v.push_back(s);
                sort(s.begin(),s.end());
                string_list[i]="-1";
                for(int j=i+1;j<string_list.size();j++){
                    string p=string_list[j];
                    if(p!="-1"){
                        sort(p.begin(),p.end());
                        if(p==s ){
                           v.push_back(string_list[j]);
                           string_list[j]="-1";
                        }
                    }
                }
            }
            if(v.size()>0){
                res.push_back(v);
            }
            
        }
        for(int i=0;i<res.size();i++){
        	for(int j=0;j<res[i].size();j++){
        		cout<<res[i][j]<<" ";
        	}
        	cout<<endl;
        }
    }
int32_t main(){
	int n;
	cin >> n;
	vector<string > a(n);
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		a[i]=s;
	}
	Anagrams(a);
	return 0;
}