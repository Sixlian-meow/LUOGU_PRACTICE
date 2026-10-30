#include <bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	int result[10]={0};
	int t = 0;
	for(int i=m;i<=n;i++){
		int a=i;
		while(a>0){
			t=a%10;
		    result[t]++;
		    a/=10;
		}
	}
	for(int i=0;i<10;i++){
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}