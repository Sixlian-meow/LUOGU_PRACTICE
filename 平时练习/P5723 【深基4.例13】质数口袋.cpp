#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n==1) return false;
	if(n==2) return true;
	if(n%2==0) return false;
	for(int i=3;i*i<=n;i+=2){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int l;
	cin>>l;
	int sum=0;
	int n=0;
	int i=2;
	while(1){
		if(isPrime(i)){
			sum+=i;
			if(sum<=l){
				cout<<i<<endl;
				n++;
			}
			else break;
		}
		i++;
	}
	cout<<n<<endl;
    return 0;
}