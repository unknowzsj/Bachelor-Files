#include<bits/stdc++.h>
using namespace std;
const long long bas=20201114;
long long res;
int k,p,l;

void dfs(int n,int pre){
	if(n==0){//ʣ��0�� 
		res++;
		res%=bas;
		return; 
	}
	
	for(int i=1;i<=k;++i){
		if((pre>=p&&i>=p)||n-i<0) continue;//�������δ���p���߲���������������
		else{
			dfs(n-i,i);
		} 
	}
}
int main(){
	cin>>k>>p>>l;
	//��ʼ����
	dfs(l,-1);//ǰ��һ��Ϊ-1
	cout<<res;
	
	return 0; 
}
