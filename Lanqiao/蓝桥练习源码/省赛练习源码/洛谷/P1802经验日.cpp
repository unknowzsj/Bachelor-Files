#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int N,X;
ll dp[1010][1010];
int win[1010];
int lose[1010];
int use[1010];

int main(){
	cin>>N>>X;
	for(int i=1;i<=N;++i){
		cin>>lose[i]>>win[i]>>use[i];
	}
	
	for(int i=1;i<=N;++i){//���ظ������� 
		for(int j=X;j>=0;--j){//=�Ų������� 
			if(j>=use[i]){
				dp[i][j]=max(dp[i-1][j]+lose[i],dp[i-1][j-use[i]]+win[i]);
			}else dp[i][j]=dp[i-1][j]+lose[i];//���е�ҩ�򲻹�ֱ�Ӽ�lose  
		}
	}
	ll res=dp[N][X]*5;
	cout<<res<<endl;
	
	return 0;
}
