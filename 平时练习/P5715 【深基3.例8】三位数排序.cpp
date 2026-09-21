#include <bits/stdc++.h>
using namespace std;
int main (){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	if(b>c){
		int temp2=b;
		b=c;
		c=temp2;
	}
	if(a>b){
		int temp3=a;
		a=b;
		b=temp3;
	}
		if(b>c){
		int temp4=b;
		b=c;
		c=temp4;
	}
	cout<<a<<" "<<b<<" "<<c<<endl; 
	return 0;
}