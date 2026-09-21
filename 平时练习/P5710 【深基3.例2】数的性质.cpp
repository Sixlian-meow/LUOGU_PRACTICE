#include <bits/stdc++.h>
using namespace std;
//P5710 【深基3.例2】数的性质
int x;
int main(){
	cin>>x;
	//小A
	if(x%2==0&&(x>4&&x<=12)){
		cout<<"1 ";
	} 
	else cout<<"0 ";
	//Uim
		if(x%2==0||(x>4&&x<=12)){
		cout<<"1 ";
	} 
	else cout<<"0 ";
	//小B
	if(((x%2==0)&&!(x>4&&x<=12))||(!(x%2==0)&&(x>4&&x<=12))){
		cout<<"1 ";
	} 
	else cout<<"0 ";
	//正妹
	if(!(x%2==0)&&!(x>4&&x<=12)){
		cout<<"1";
	} 
	else cout<<"0";
	return 0;
}