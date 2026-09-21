#include <bits/stdc++.h>
using namespace std;
//P1085 [NOIP 2004 普及组] 不高兴的津津
const int days=7;
int main(){
	int a,b;
	int maxtime=0;
	int result=0;
	for(int i=1;i<=days;i++){
		cin>>a>>b;
		int m=a+b;
		if(m>8&&m>maxtime){
			maxtime=m;
			result=i;
		}
	}
	cout<<result<<endl;
	return 0;
}