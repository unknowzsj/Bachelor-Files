#include<bits/stdc++.h>
using namespace std;

int v,n;
int main(){
	cin>>v;
	cin>>n;
	int a[n+1]={0};
	//dp[j]=����Ϊjʱ��װ�µ����ֵ 
	int dp[v+1]={0};
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	//��ʼ��
	dp[0]=0;
	//����ÿһ�����壬�������е����������Ƿ�ŵ���
	//Ϊ������ֻ��ѡȡһ�������������� 
	for(int i=1;i<=n;++i){
		//�Ӵ�С��Ϊ�˲��ظ�
		/*
			��С����
			��j=2a[i]
			dp[a[i]]ѡȡi
			dp[j]��ѡȡi���� 
		*/ 
		//j��СΪ�������� 
		for(int j=v;j>=a[i];--j){
			//ѡ�Ͳ�ѡ����i
			//��ѡ��Ϊ���� 
			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
		}
	}
	//�����Сʣ�� 
	cout<<v-dp[v]<<endl;
	
	return 0;
} 
