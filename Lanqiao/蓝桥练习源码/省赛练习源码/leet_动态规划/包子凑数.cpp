#include<bits/stdc++.h>
using namespace std;
int N,max;
int dp[10010]; 
//���Լ�� 
int gcb(int a,int b){
	if(b==0) return a;
	return gcb(b,a%b); 
} 

int main(){
	cin>>N;
	int  vol[N];
	for(int i=0;i<N;++i) cin>>vol[i];
	//ͨ�����Լ��=1���Ƿ����޶� 
	int d=0;
	for(int i=0;i<N;++i){
		d=gcb(vol[i],d);	
	}
	if(d!=1){
		cout<<"INF"<<endl;
		return 0;
	}
	//ͨ��������Դճ���������
	fill(dp,dp+10010,-1);
	//��ʼ��
	dp[0]=1;
//	for(int i=0;i<N;++i){
//		dp[vol[i]]=1;
//	} 
	//����ǻ����� 
	for(int i=0;i<10010;++i){
		for(int j=0;j<N;++j){
			//==1������������������ֱ仯 
			if(dp[i-vol[j]]==1) dp[i]=1;
		} 
	}
	int sum=0;
	for(int i=0;i<10010;++i) if(dp[i]!=1) sum++;
	cout<<sum<<endl;
	
	return 0; 
} 
