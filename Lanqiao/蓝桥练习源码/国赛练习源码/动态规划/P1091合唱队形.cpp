#include<bits/stdc++.h>
using namespace std;
int n;
int val[110];
int dp[110],dp2[110];
int mup,mdn,mud;//��������У������У�����������
int res;

//*************���ǹؼ�*****************************
int up(int beg,int end){//����������� 
	fill(dp,dp+110,0);//��ʼ������
	for(int i=beg;i<=end;++i){//��i��β������������� 
		dp[i]=1;
		for(int j=beg;j<i;++j){
			if(val[j]<val[i]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	return dp[n]; 
}
int down(int beg,int end){//����½����� 
	fill(dp,dp+110,0);//��ʼ������
	for(int i=beg;i<=end;++i){//��i��β������������� 
		dp[i]=1;
		for(int j=beg;j<i;++j){
			if(val[j]>val[i]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	return dp[n]; 
}
//************************************************** 

int main(){
	cin>>n;
	for(int i=1;i<=n;++i) cin>>val[i];
	for(int i=1;i<=n;++i){//��i��β������������� 
		dp[i]=1;
		for(int j=1;j<i;++j){
			if(val[j]<val[i]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	for(int i=n;i>=1;--i){//��i��β�ķ�������������� 
		dp2[i]=1;
		for(int j=n;j>i;--j){
			if(val[j]<val[i]){
				dp2[i]=max(dp2[i],dp2[j]+1);
			}
		}
	}
	//�ҵ���� 
	for(int i=1;i<=n;++i){
		res=max(res,dp[i]+dp2[i]-1);//�Լ��ظ����� 
	}
	cout<<n-res;
	
	return 0;
} 
