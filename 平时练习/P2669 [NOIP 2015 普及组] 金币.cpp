#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	cin>>k;
	int sum=0;
	int day=0;
	int group=1;
	while(1){
		if(day+group<=k){
			sum+=group*group;
			day+=group;
			group++;
		}
		else{
			int rest=k-day;
			sum+=group*rest;
			break;
		}
	}
	cout<<sum<<endl;
	return 0;
}