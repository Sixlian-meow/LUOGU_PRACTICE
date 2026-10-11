#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	double a=(1+sqrt(5))/2;
	double b=(1-sqrt(5))/2;
	double f;
	f=(pow(a,n)-pow(b,n))/sqrt(5);
	cout<<fixed<<setprecision(2)<<f<<endl;
	return 0;
}