#include<bits/stdc++.h>
using namespace std;
int dp1[100010];
int dp2[100010];
int num[100010];
int cot;
//O(n^2) 
int main(){
	int n=0;//��ȡ���ݣ���enter����ctrl+z + enter���� 
	while(cin>>num[++n]);
	n--;//�����n���һ�� 
	 
	//�ҵ����ĵ����� 
	int mlen=0;
	for(int i=1;i<=n;++i){
		dp1[i]=1;
		dp2[i]=1;//��ʼ��
		for(int j=1;j<i;++j){
			if(num[j]>=num[i]){//������򣬿��Ե��� 
				dp1[i]=max(dp1[i],dp1[j]+1);//ֻҪ�������������ʾnum[i]������Ϊĩβ 
			}else if(num[j]<num[i]){//��������� 
				dp2[i]=max(dp2[i],dp2[j]+1);
			}
		}
		mlen=max(mlen,dp1[i]);
		cot=max(cot,dp2[i]); 
	}
	cout<<mlen<<endl<<cot;
	
	return 0;
}
