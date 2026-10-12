#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[10000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int cnt=1;
	int ma=1;
	for(int i=0;i<n-1;i++){
		if(a[i+1]==a[i]+1) cnt++;
		else {
			ma=max(cnt,ma);
			cnt=1;
		}
	}
	ma=max(cnt,ma);
	cout<<ma<<endl;
	return 0;
} 