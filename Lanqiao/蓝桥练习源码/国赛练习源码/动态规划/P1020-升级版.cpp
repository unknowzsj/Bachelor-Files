#include<bits/stdc++.h>
using namespace std;
int dp1[100010];
int dp2[100010];
int num[100010];
//O(nlogn) 
int main(){
	int n=0;//��ȡ���ݣ���enter����ctrl+z + enter���� 
	while(cin>>num[++n]);
	n--;//�����n���һ�� 
	 
	//�ҵ����ĵ����� 
	int len1=1,len2=1;
	dp1[1]=dp2[1]=num[1];//��ʼ�� 
	for(int i=2;i<=n;++i){
		//�����������
		if(dp1[len1]>=num[i]) dp1[++len1]=num[i];//���num[i]����������������������
		else *upper_bound(dp1+1,dp1+1+len1,num[i],greater<int>())=num[i];//�����������ҵ���num[i]С�ĵ�һ��Ԫ�ؽ����滻 
		
		//����������� --��dp2[len2]=num[i]ʱ���Լ��滻�Լ�����Ӱ�� 
		if(dp2[len2]<num[i]) dp2[++len2]=num[i];//���num[i]����������������������
		else *lower_bound(dp2+1,dp2+1+len2,num[i])=num[i];//�����������ҵ���num[i]�󣨵��ڣ��ĵ�һ��Ԫ�ؽ����滻 
	}
	cout<<len1<<endl<<len2;
	
	return 0;z 
}
