#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int g[10];
	int a[10];
	int result[10]={0};
	for(int i=1;i<8;i++){
		cin>>g[i];
	}
	while(n--){
		for(int i=1;i<8;i++){
			cin>>a[i];
		}
		int cnt=0;
		for(int i=1;i<=7;i++){
			for(int j=1;j<=7;j++){
				if(a[i]==g[j]){
					cnt++;
				}
			}
			
		}
		result[cnt]++;
	}
	for(int i=7;i>0;i--){
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}