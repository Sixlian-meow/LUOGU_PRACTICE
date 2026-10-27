#include<bits/stdc++.h>
using namespace std;
const int N=40;
int main(){
	int n;
	cin>>n;
	int a[N][N]={0};
	int x=0;//行 
	int y=n/2;//列 
	a[x][y]=1;
	for(int k=2;k<=n*n;k++){
		if(x==0&&y!=n-1){
			x=n-1;
			y=y+1;
			a[x][y]=k;
		}
		else if(x!=0&&y==n-1){
			x=x-1;
			y=0;
			a[x][y]=k;
		}
		else if(x==0&&y==n-1){
			x=x+1;
			a[x][y]=k;
		}
		else if(x!=0&&y!=n-1){
			if(a[x-1][y+1]==0){
				x=x-1;
				y=y+1;
			}
			else{
				x=x+1;
			}
		    a[x][y]=k;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" "; 
		}
		cout<<endl;
	}
	return 0;
}