#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[10][10]={0};
	int dx[]={0,1,0,-1};
	int dy[]={1,0,-1,0};
	int x=0,y=0;//当前坐标 
	int dir=0;//初始向右 
	
	for(int cnt=1;cnt<=n*n;cnt++){
		a[x][y]=cnt;
		int nx=x+dx[dir];
		int ny=y+dy[dir];
		if(nx<0||nx>=n||ny<0||ny>=n||a[nx][ny]!=0){
			dir=(dir+1)%4;
			nx=x+dx[dir];
		    ny=y+dy[dir];
		}
		x=nx;
		y=ny;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",a[i][j]);
			
		}
		cout<<endl;
	}
	return 0;
}