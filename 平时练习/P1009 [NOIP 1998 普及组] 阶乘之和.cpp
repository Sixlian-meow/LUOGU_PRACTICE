#include<bits/stdc++.h>
using namespace std;
const int maxlen =100;

int a[maxlen];
int sum[maxlen];

void mul(int a[],int k){
	int carry=0;
	for(int i=0;i<maxlen;i++){
		a[i]=a[i]*k+carry;
		carry=a[i]/10;
		a[i]=a[i]%10;
	}
}

void add(int sum[],int a[]){
	int carry=0;
	for(int i=0;i<maxlen;i++){
		sum[i]=sum[i]+a[i]+carry;
		carry=sum[i]/10;
		sum[i]=sum[i]%10;
	}
}

int main(){
	memset(a,0,sizeof(a));
	memset(sum,0,sizeof(sum));
	a[0]=1;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		mul(a,i);
		add(sum,a);
	}
	int p=maxlen-1;
	while(p>0&&sum[p]==0){
		p--;
	}
	for(int j=p;j>=0;j--){
		cout<<sum[j];
	}
	cout<<endl;
	return 0;
}


//typedef long long ll;
//
//int main(){
//	ll n;
//	cin>>n;
//	ll result=0;
//	for(int i=1;i<=n;i++){
//		ll num=1;
//		for(int j=1;j<=i;j++){
//			num*=j;
//		}
//		result+=num;
//	}
//	cout<<result<<endl;
//	return 0;
//}             低精度