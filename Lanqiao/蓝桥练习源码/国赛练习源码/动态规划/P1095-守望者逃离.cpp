#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m,s,t;
ll dp[1000010];//�������õĴ�һ��  

int main(){
	cin>>m>>s>>t;
	//��ʼ��
	dp[0]=0; 
	//����dp,����ѭ��������ÿ��,�������ֵķ�ʽ 
	for(int i=1;i<=t;++i){
		if(m>=10){//ħ��ֵ�㹻
			dp[i]=dp[i-1]+60;
			m-=10;//����ħ��ֵ 
		}
		else{//ȱ�� 
			dp[i]=dp[i-1];
			m+=4; 
		} 
	}
	//�ڶ���ֻҪ������·�Ƿ���첢���н���жϾ����� 
	for(int i=1;i<=t;++i){
		if(dp[i]<dp[i-1]+17) dp[i]=dp[i-1]+17;//��·���죬ѡ����· 
		if(dp[i]>=s){
			cout<<"Yes"<<endl<<i;
			return 0;
		}
	}
	cout<<"No"<<endl<<dp[t];
	
	return 0;
} 
