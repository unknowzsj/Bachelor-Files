#include<bits/stdc++.h>
using namespace std;
//�ؼ��㣺���������ƣ����������
//��������������Ʒ������Ϊ״̬
//�������¿��Դﵽ��������
//������һά���� 
int V,N,C;
int main(){
	cin>>V>>N>>C;
	int dp[C+1]={0};
	int val[N+1][2]={0};
	//0-�����1-���� 
	for(int i=1;i<=N;++i){
		cin>>val[i][0]>>val[i][1];
	} 
	//����dp
	for(int i=1;i<=N;++i){
		//�Ӵ�С����ֹ�ظ� 
		for(int j=C;j>=val[i][1];--j){
			dp[j]=max(dp[j],dp[j-val[i][1]]+val[i][0]); 
		}
	} 
	//�ж��Ƿ���� 
	int min=C+1;
	if(dp[C]>=V){
		for(int i=0;i<=C;i++){
			if(dp[i]>=V){
				min=i;
				break;
			}
		}
		cout<<C-min<<endl;
	}else cout<<"Impossible"<<endl;
	
	return 0;
}
