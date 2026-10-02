#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int val=1;
	
	for(int row=1;row<=n;row++){
		for(int i=0;i<n+1-row;i++){
			printf("%02d",val);
			val++;
		}
		printf("\n");
	}
	return 0;
}