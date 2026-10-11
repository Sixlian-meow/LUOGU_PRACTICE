#include<bits/stdc++.h>
using namespace std;
int main(){
	double s;
	cin>>s;
	int cnt=1;
	double sum=2;
	double step=2;
	if(s<=2) {
        cout<<cnt<<endl;
        return 0;
    }
	while(sum<s){
		step=step*0.98;
        sum+=step;
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}