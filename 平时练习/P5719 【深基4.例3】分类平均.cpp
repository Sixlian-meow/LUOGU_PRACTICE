#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int typea=0;
	int suma=0;
	int typeb=0;
	int sumb=0;
	for(int i=1;i<=n;i++){
		if(i%k==0){
			suma+=i;
			typea++;
		}
		else{
			sumb+=i;
			typeb++;
		}
		
	} 
	double ansa=1.0*suma/typea;
	double ansb=1.0*sumb/typeb;
	cout<<fixed<<setprecision(1)<<ansa<<" "<<ansb<<endl;
	return 0;
}