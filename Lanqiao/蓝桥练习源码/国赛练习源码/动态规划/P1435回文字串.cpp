#include<bits/stdc++.h>
using namespace std;//����70�� 
string wrd="#";
int dp[1010][1010];

int main(){
	string str;
	cin>>str;
	wrd+=str;
	fill(dp[0],dp[0]+1010*1010,10000);//
	dp[1][1]=0;//ȡͷһ��������Ҫ�� 
	//�ӵڶ���λ�ÿ�ʼ 
	for(int i=2;i<wrd.size();++i){//��i��β 
		dp[i][i]=0;//�����ַ�����Ҫ�� 
		for(int j=i-1;j>=1;--j){
			if(str[j]==str[i]){
				if(i-j==1) dp[j][i]=0;
				else dp[j][i]=dp[j+1][i-1];//�����м�� 
			}else{
				if(i-j==1) dp[j][i]=1;//����������ȣ���һ���Ϳ���
				else dp[j][i]=min(dp[j][i-1],dp[j+1][i])+1;
			} 
		}
	}
	cout<<dp[1][wrd.size()-1];
	
	return 0;
} 
