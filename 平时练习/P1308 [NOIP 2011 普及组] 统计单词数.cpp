#include<bits/stdc++.h>
using namespace std;
int main(){
	string word;
	getline(cin,word);
	string text;
	getline(cin,text);
	
    for(int i=0;i<word.size();i++){
		if(word[i]>='A' && word[i]<='Z')
			word[i] += 32;
	}
	for(int i=0;i<text.size();i++){
		if(text[i]>='A' && text[i]<='Z')
			text[i] += 32;
	}
	word=" "+word+" ";
	text=" "+text+" ";
	
	int cnt=0;
	int first_pos=-1;
	int p=text.find(word);
	
	while(p!=string::npos){
		cnt++;
		if(first_pos==-1){
			first_pos=p;
		}
		p=text.find(word,p+1);
	}
	if(cnt==0){
		cout<<-1<<endl;
	}
	else{
		cout<<cnt<<" "<<first_pos<<endl;
	}
	return 0;
}