#include<bits/stdc++.h>
using namespace std;

//ǰ׺�������԰��ֵ������� 
//����ch��s2�д��� 
int k=0;
int compare(string s2,char ch){
	int num=0;
	for(int i=0;i<s2.size();++i){
		if(ch==s2[i]) num++;
	}
	return num;
} 
//ǰ׺���� 
void allpos(string prefix,string s1,int x,int& k){
	if(prefix.length()==s1.length()){
		k+=1;
		if(k==x){
			cout<<prefix<<endl;
			exit(0);
		} 
	}
	//ÿ�δ�ͷɨ���ַ��� 
	for(int i=0;i<s1.size();++i){
		char ch=s1[i];
		//�ַ����ã���ǰ׺�г��ֵĴ���<ԭ�ַ����ֵĴ��� 
		if(compare(prefix,ch)<compare(s1,ch)){
			//���ǰ׺�ٴεݹ� 
			allpos(prefix+ch,s1,x,k); 
		}
	}
} 
int main(){
	string str="ABCD";
	string start="A";
	int x=6;
	allpos(start,str,x,k);
	
	return 0;
} 
