#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int result[105][105]={0};
	int fire_dx[]={-2,-1,-1,-1,0,0,0,0,0,1,1,1,2};
	int fire_dy[]={0,-1,0,1,-2,-1,0,1,2,-1,0,1,0};
	int x,y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		for(int j=0;j<13;j++){
			int nx=x+fire_dx[j];
			int ny=y+fire_dy[j];
			if(nx>=1&&nx<=n&&ny>=1&&ny<=n){
			 	result[nx][ny]=1;	
			}
		}
	}
	for(int i=m;i<m+k;i++){
		cin>>x>>y;
		for(int dx=-2;dx<=2;dx++){
			for(int dy=-2;dy<=2;dy++){
				int nx2=x+dx;
				int ny2=y+dy;
				if(nx2>=1&&nx2<=n&&ny2>=1&&ny2<=n){
			 	    result[nx2][ny2]=1;
			    }
			}
		}
	}
	int cnt=0;
	for(int i=0;i<105;i++){
		for(int j=0;j<105;j++){
			if(result[i][j]==1){
				cnt++;
			}
		}
	}
	int ans=n*n-cnt;
	cout<<ans<<endl; 
	return 0;
}