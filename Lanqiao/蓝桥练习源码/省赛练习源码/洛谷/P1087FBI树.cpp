#include<bits/stdc++.h>
using namespace std;

int n;
string bck=""; 
string str;
//�ж����������� 
char check(string s){
	int cts=0;
	for(int i=0;i<s.size();++i){
		if(s[i]=='1') cts++;
	} 
	if(cts==0) return 'B';
	else if(cts==s.size()) return 'I';
	else return 'F';
} 
void dfs(string s){
	//���� 
	if(s.size()==1){
		char ch=check(s);
		bck+=ch;
		return;
	}
	char ch2=check(s);
	bck+=ch2;
	//�ȼ��ٱ���,˳�������
	string right=s.substr(s.size()/2,s.size()/2);
	string left=s.substr(0,s.size()/2);
	//����
	dfs(right);
	//����
	dfs(left); 
} 
int main(){
	cin>>n;
	cin>>str;
	dfs(str);
	string out="";
	for(int i=bck.size()-1;i>=0;--i){
		out+=bck[i];
	}
	cout<<out<<endl;
	
	return 0; 
}
