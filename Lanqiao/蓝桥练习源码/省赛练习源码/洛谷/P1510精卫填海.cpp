#include<bits/stdc++.h>
using namespace std;
//�ؼ��㣺���������ƣ����������
//��������������Ʒ������Ϊ״̬
//�������¿��Դﵽ��������
//��ά���������ⳬ���˿ռ����� 
int V,N,C;
int main(){
	cin>>V>>N>>C;
	int dp[N+1][C+1]={0};
	int val[N+1][2]={0};
	//0-�����1-���� 
	for(int i=1;i<=N;++i){
		cin>>val[i][0]>>val[i][1];
	} 
	//��ʼ��
	for(int i=0;i<=C;++i){
		dp[0][i]=0;
	} 
	//����dp
	for(int i=1;i<=N;++i){
		//�Ӵ�С����ֹ�ظ� 
		for(int j=C;j>0;--j){
			if(j>=val[i][1]){
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-val[i][1]]+val[i][0]);
			}else dp[i][j]=dp[i-1][j]; 
		}
	} 
	//�ж��Ƿ���� 
	int min=C+1;
	if(dp[N][C]>=V){
		for(int i=0;i<=C;i++){
			if(dp[N][i]>=V){
				min=i;
				break;
			}
		}
		cout<<C-min<<endl;
	}else cout<<"Impossible"<<endl;
	
	return 0;
}
