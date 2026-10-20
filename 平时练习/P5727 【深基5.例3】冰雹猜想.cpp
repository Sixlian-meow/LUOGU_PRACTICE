#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1005];
	int i=0;
	a[0]=n;
	while(1){
		if(a[i]==1) break;
		if(a[i]%2!=0){
			a[i+1]=a[i]*3+1;
		}
		else{
			a[i+1]=a[i]/2;
		}
		i++;
	}
	for(int j=i;j>=0;j--){
		cout<<a[j]<<" ";
	}
	cout<<endl;
	return 0;
}