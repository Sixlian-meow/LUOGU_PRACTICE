#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	cin>>k;
	double sum=0;
	int i=0;
	while(1){
		i++;
		sum+=1.0/i;
		if(sum>k){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}