#include<bits/stdc++.h>
using namespace std;
//���������������� 
int N;
int dp[10001];
int a[10001];//ǰi���ĺ� 
int sum;
int main(){
	cin>>N;
	for(int i=1;i<=N;++i){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	if(a[N]<0){
		cout<<"Impossible"<<endl;
		exit(0);
	}
	dp[0]=0;
	for(int i=1;i<=N;++i){
		for(int j=0;j<i;++j){//��ǰi-1���ҵ�� 
			//���a[i]>=a[j]����j-i��һ�ο��Գ�Ϊһ�� 
			//ֻ��a[i]>=0ʱ����ѡ��Ŀ��� 
			if(a[i]>=0&&a[i]>=a[j]) dp[i]=max(dp[i],dp[j]+1); 
		}
	}
	cout<<dp[N]<<endl;
	
	return 0;
} 
