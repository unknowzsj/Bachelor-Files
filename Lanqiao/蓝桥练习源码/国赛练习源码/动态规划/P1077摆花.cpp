#include<bits/stdc++.h>
using namespace std;//����ʽ�Ƴ����ˣ�ϸ�� ��Ҫ��� 
const long long md=1000007;
int n,m;
int a[110];
int dp[110][110]; 

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;++i) cin>>a[i];
	//��ʼ��
	dp[0][0]=1; //����ʱֻ��һ�� 
	//dp�ṹ 
	for(int i=1;i<=n;++i){
		for(int j=0;j<=m;++j){
			for(int k=0;k<=min(j,a[i]);++k){//ѡ����i+1������ 
				dp[i][j]=(dp[i][j]+dp[i-1][j-k])%md;
			}
		}
	}
	cout<<dp[n][m]%md;
	
	return 0;
} 
