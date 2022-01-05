#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
    int *findTwoElement(int *arr, int n) {
        int *res =new int[2];
        for(int i=0;i<n;i++){
            arr[abs(arr[i])-1]*=-1;
        }
        int k=0;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                res[k]=i+1;
                k++;
            }
        }
        for(int i=0;i<n;i++){
            if(abs(arr[i])==res[1]){
                swap(res[0],res[1]);
                break;
            }
        }
        return res;
    }
int32_t main(){
	return 0;
}