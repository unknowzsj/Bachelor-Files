#include<bits/stdc++.h>
using namespace std;

int T,M;
int main(){
	cin>>T>>M;
	int a[M+1][2]={0};
	//��ʼ����� 
	int dp[M+1][T+1]={0};
	for(int i=1;i<=M;++i){
		//0-ʱ�䣬1-��ֵ 
		cin>>a[i][0]>>a[i][1];
	}
	//����dp 
	for(int i=1;i<=M;++i){
		//j�Ӵ�С����ֹ�ظ�ѡȡ 
		for(int j=T;j>=0;--j){
			if(j>=a[i][0]){
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i][0]]+a[i][1]);
			}else{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	cout<<dp[M][T]<<endl;
	
	return 0;
} 
