#include<bits/stdc++.h>
using namespace std;

vector<string> res;
//ȫ���еĺ��� 
//k�ǵ�ǰ���ڵ�λ�� 
vector<string> allpos(string s,int k){
	if(k==s.size()){
		res.push_back(s);
	} 
	for(int i=k;i<s.size();++i){
		swap(s[k],s[i]);//����λ�� 
		allpos(s,k+1);//��һ��λ�� 
		swap(s[k],s[i]);//���� 
	}
	return res;
}
int main(){
	string str="ABCD";
	vector<string> outres=allpos(str,0);
	for(int i=0;i<outres.size();++i){
		cout<<outres[i]<<endl;	
	}
	return 0;
} 
