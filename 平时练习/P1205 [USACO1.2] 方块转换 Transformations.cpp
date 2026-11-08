#include<bits/stdc++.h>
using namespace std;
const int N=15;
char ori[N][N],tar[N][N],tmp[N][N],mid[N][N];
int n;


bool check(char a[N][N],char b[N][N]){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]!=b[i][j]){
				return false;
			}
		}
	}
	return true;
}

void rot90(char a[N][N],char b[N][N]){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[j][n-i+1]=a[i][j];
		}
	}
}
void rot180(char a[N][N],char b[N][N]){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[n-i+1][n-j+1]=a[i][j];
		}
	}
}
void rot270(char a[N][N],char b[N][N]){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[n-j+1][i]=a[i][j];
		}
	}
}



void flip(char a[N][N],char b[N][N]){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[i][n-j+1]=a[i][j];
		}
	}
}



int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ori[i]+1;
	}
	for(int i=1;i<=n;i++){
		cin>>tar[i]+1;
	}
	
	//1 
	rot90(ori,tmp);
	if(check(tmp,tar)){
		cout<<1;
		return 0;
	}
	
	//2
	rot180(ori,tmp);
	if(check(tmp,tar)){
		cout<<2;
		return 0;
	}
	
	//3
	rot270(ori,tmp);
	if(check(tmp,tar)){
		cout<<3;
		return 0;
	}
	
	//4
	flip(ori,tmp);
	if(check(tmp,tar)){
		cout<<4;
		return 0;
	}
	
	//5
	flip(ori,mid);
	rot90(mid,tmp);
	if(check(tmp,tar)){
		cout<<5;
		return 0;
	}
	rot180(mid,tmp);
	if(check(tmp,tar)){
		cout<<5;
		return 0;
	}
	rot270(mid,tmp);
	if(check(tmp,tar)){
		cout<<5;
		return 0;
	}
	
	//6
	if(check(ori,tar)){
		cout<<6;
		return 0;
	}
	
	//7
	cout<<7;
	return 0;
	
}
 