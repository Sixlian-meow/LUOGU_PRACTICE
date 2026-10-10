#include <iostream>
#include<bits/stdc++.h>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;
const int N=10000000;

bool is_prime[N];
int prime[700000];
int cnt=0;

void euler(){
	fill(is_prime,is_prime+N,true);
	is_prime[0]=is_prime[1]=false;
	for(int i=2;i<N;i++){
		if(is_prime[i]){
			prime[cnt++]=i;
		}
		for(int j=0;j<cnt&&1LL*i*prime[j]<N;j++){
			is_prime[i*prime[j]]=false;
			if(i%prime[j]==0) break;
		}
	}
	
}
//bool isPrime(ll n) {
//	if (n % 2 == 0) return false;
//	for (ll i = 3; i <= sqrt(n); i += 2) {
//		if (n % i == 0) return false;
//	}
//	return true;
//}
//bool isHuiwen(ll n) {
//	string s = to_string((long long)n);
//	int t = s.length();
//	for (int i = 0; i < t/2; i++) {
//		if (s[i] != s[t - i-1]) return false;
//	}
//	return true;
//}//这是用转换成字符串的方式判断回文 
bool isHuiwen(ll n){
	if((n>=10&&n<100&&n!=11)||(n>=1000&&n<10000)||(n>=100000&&n<1000000)||(n>=10000000&&n<=100000000)){
		return false;
	}//偶数位的除了11都不是回文数，这样避免超时 
	ll t=n;
	ll r=0;
	while(t>0){
		r=r*10+t%10;
		t/=10;
	}
	return n==r;
}//一位一位地搬过来判断回文 
int main() {
	euler();
	ll a, b;
	ios::sync_with_stdio(false);
	cin >> a >> b;
	if(b>N-1) b=N-1;
	if(a>N-1) return 0;
	for (ll i = a; i <= b; i++) {
		if (is_prime[i] && isHuiwen(i)) {
			cout << i << '\n';
		}
	}

	return 0;
}