#include<bits/stdc++.h>
using namespace std;
//ע��㣺���λ�ò�����
//���ݹ�����long long 
typedef long long ll;
int N,M,X,Y;
//����Ե���λ�� 
int mv[8][2]={{-2,-1},{-1,-2},{-2,1},{-1,2},{2,1},{2,-1},{1,-2},{1,2}};
int main(){
	cin>>N>>M>>X>>Y;
	ll dp[N+1][M+1]={0};
	//�����ߵ��ĵط���-1 
	for(int i=0;i<8;++i){
		int nx=X+mv[i][0];
		int ny=Y+mv[i][1];
		if(nx<0||ny<0||nx>N||ny>M) continue;
		dp[nx][ny]=-1; 
	}
	//��ʼ��,0�к�0������-1����-1 
	dp[0][0]=1;
	dp[X][Y]=-1;//���ڵĵط������� 
	for(int i=1;i<=N;++i){
		if(dp[i][0]==-1) continue;
		dp[i][0]=(dp[i-1][0]==-1? -1:1);
	}
	for(int i=1;i<=M;++i){
		if(dp[0][i]==-1) continue;
		dp[0][i]=(dp[0][i-1]==-1? -1:1);
	}
	//����dp
	for(int i=1;i<=N;++i){
		for(int j=1;j<=M;++j){
			if(dp[i][j]==-1) continue;
			//�����ߵĵ�Ÿ��� 
			if(dp[i-1][j]==-1&&dp[i][j-1]==-1) dp[i][j]=-1;
			else if(dp[i-1][j]==-1) dp[i][j]=dp[i][j-1];
			else if(dp[i][j-1]==-1) dp[i][j]=dp[i-1][j];
			else dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	} 
	cout<<dp[N][M]<<endl;
	
	return 0;
} 
