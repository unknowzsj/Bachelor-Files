#include<bits/stdc++.h>
using namespace std;//����dp 
int n,sta;
int val[6010];
int root[6010];
vector<int> node[6010];
int dp[6010][2];
int low,up;

void  dfs(int cur){
	//dp[x][0]��ʾ��xΪ��������,��x���μ�����������ֵ
	//dp[x][1]��ʾ��xΪ��������,��x�μ�������������ֵ
	dp[cur][0]=0;//��ѡ���ڵ� 
	dp[cur][1]=val[cur];
	for(int i=0;i<node[cur].size();++i){
		int next=node[cur][i];//�ȼ���ײ��
		dfs(next);
		dp[cur][0]+=max(dp[next][0],dp[next][1]);//��ѡʱ����ÿ�����ӵ� ������
		dp[cur][1]+=dp[next][0];//ѡ��ʱ�����ֻ�ܼ��ϲ�ѡ���ӶԵ����ֵ 
	}
} 
int main(){
	cin>>n;
	for(int i=1;i<=n;++i) cin>>val[i];
	for(int i=1;i<n;++i){
		cin>>low>>up;
		root[low]=1;
		node[up].push_back(low);//�����ӽڵ� 
	}  
	for(int i=1;i<=n;++i){//Ѱ��root 
		if(root[i]==0){
			sta=i;
			break;
		} 
	}
	dfs(sta);
	cout<<max(dp[sta][0],dp[sta][1]);
	
	return 0; 
} 
