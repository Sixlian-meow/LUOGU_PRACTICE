#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int val=1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<n;j++){
			printf("%02d",val);
			val++;
		}
		printf("\n");
	}
	
	printf("\n");
	val=1;
	for(int i=1;i<=n;i++){//控制行 
		int m=n-i;
		while(m--){
			printf("  ");
		}
		for(int k=0;k<i;k++){//控制每行打出的数字 
			printf("%02d",val);
			val++;
		}
		printf("\n");
    }
	
	return 0;
}