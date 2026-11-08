#include<bits/stdc++.h>
using namespace std;
int main(){
	string s[205];
	int n=0;
	while(cin>>s[n]){
		n++;
	}
	cout<<n<<" ";
	int cnt=0;
	char now=s[0][0];
	if(now=='1'){
		cout<<0<<" ";
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(s[i][j]==now){
			    cnt++;
		    }
		    else{
			    cout<<cnt<<" ";
			    now=s[i][j];
			    cnt=1;
		    }
			
		}

	}
	cout<<cnt;
    return 0;
}