#include<iostream>
#include<algorithm>
#include<string> 
using namespace std;
//��n������l����ĸ���� 
int n,l;
//�������������� 
string res="";

bool check(char ch){
	int count=1;
	//substr(pos,len)��λ��pos��ʼ��ȡlen���ַ�
	//-2����Ϊÿ��s1��s2��Ҫ��һ�� 
	for(int i=res.size()-1;i>=0;i-=2){
		string s1=res.substr(i,count);
		//s2������i+count��ĩβ�ļ����ַ� 
		string s2=res.substr(i+count)+ch;
		if(s1==s2) return false;
		count++;
	}
	return true;
} 
void dfs(int cur){
	//�ﵽn���˳� 
	if(cur==n){
		cout<<res<<endl;
		exit(0);
	}
	//�����������	
	for(char i='A';i<'A'+l;++i){
		//ǰ���Ѿ��źã�ֻ��Ҫ�ж� 
		if(check(i)){
			res.push_back(i);
			cur++;
			dfs(cur);
			res.erase(res.end()-1);//���� 
		} 
	} 
}

int main(){
	cin>>n>>l;
	int cur=0;
	dfs(cur);
	
	return 0;
} 
