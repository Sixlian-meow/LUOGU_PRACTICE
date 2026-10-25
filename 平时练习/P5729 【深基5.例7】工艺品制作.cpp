#include<bits/stdc++.h>
using namespace std;
bool vis[25][25][25];
int main(){
	int w,x,h;
	cin>>w>>x>>h;
	int q;
	cin>>q;
	int x1,x2,y1,y2,z1,z2;
	while(q--){
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		for(int i=x1;i<=x2;i++){
			for(int j=y1;j<=y2;j++){
				for(int k=z1;k<=z2;k++){
					vis[i][j][k]=true;
				}
			}
		}
	}
	int ans=0;
	for(int i=1;i<=w;i++){
			for(int j=1;j<=x;j++){
				for(int k=1;k<=h;k++){
					if(!vis[i][j][k]) ans++;
                }
            }
    }    
  	cout<<ans<<endl;
	return 0;
} 