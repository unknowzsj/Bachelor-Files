#include<bits/stdc++.h>
using namespace std;
//������ѭ��dp 
int n;
int dp[100000];
int main(){
	cin>>n;
	//��ʼ�� 
	dp[1]=1;
	dp[2]=2;
	dp[3]=2;
	for(int i=4;i<=n;i++){
		for(int j=1;j<=i/2;++j){
			dp[i]+=dp[j];
		}
		//�������� 
		dp[i]++;
	} 
	cout<<dp[n]<<endl;
	
	return 0;
}
