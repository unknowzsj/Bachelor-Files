#include<bits/stdc++.h>
using namespace std;//���⿼�ǵı��Ϊ˳��1-n 
int n,m;
int node[21][21];
int maxlen;
int bol[21];

void dfs(int nn,int dis){
	//����Ҫ�ж��Ƿ����� 
	maxlen=max(maxlen,dis);
	//��ʼdfs 
	for(int i=1;i<=n;++i){
		if(node[nn][i]&&!bol[i]){//����ͨ·���о���
			bol[i]=true;
			dfs(i,dis+node[nn][i]);
			bol[i]=false;//���� 
		} 
	} 
}

int main(){
	cin>>n>>m;
	for(int i=0;i<m;++i){
		int a,b,l;
		cin>>a>>b>>l;
		node[a][b]=l;//��¼���ڽڵ�ľ��� 
		node[b][a]=l;
	}
	
	for(int i=1;i<=n;++i){
		bol[i]=true; 
		dfs(i,0);
		bol[i]=false;
	} 
	cout<<maxlen;
	
	return 0;
}
