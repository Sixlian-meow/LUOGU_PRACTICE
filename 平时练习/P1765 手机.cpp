#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int len=s.length();
	int cnt=0;
	for(int i=0;i<len;i++){
		if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' ')
	    {
	    	cnt+=1;
		}
		else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')
	    {
	    	cnt+=2;
		}
		else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y')
	    {
	    	cnt+=3;
		}
		else if(s[i]=='s'||s[i]=='z')
	    {
	    	cnt+=4;
		}
	}
	cout<<cnt<<endl;
	return 0;
}