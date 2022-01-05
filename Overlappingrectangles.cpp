#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
       if(R1[0]<L2[0]||L1[0]>R2[0]){
            return 0;
        }
        else if(R2[1]>L1[1]||R1[1]>L2[1]){
            return 0;
        }
        else{
            return 1;
        }
    }
int main(){
	int  L1[2],R1[2],L2[2],R2[2];
	cin >> L1[0] >> L1[1]>>R1[0]>>R1[1]>>L2[0]>>L2[1]>>R2[0]>>R2[1];
	cout<<doOverlap(L1,R1,L2,R2)<<endl;
	return 0;
}