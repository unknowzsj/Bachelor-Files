#include<bits/stdc++.h>
using namespace std;//�ؼ��Ǽ��Ĵ���ᳬʱ 
int n,sum;//����������ǽ��н�� 
int yh[15][15]; 

int main(){
	cin>>n>>sum;
	int num[n]={0};
	for(int i=0;i<n;++i){
		num[i]=i+1;
	}
	//������� 
	yh[1][1]=1;
	for(int i=2;i<=n;++i){
		for(int j=1;j<=i;++j){
			yh[i][j]=yh[i-1][j]+yh[i-1][j-1];
		}
	}
	//next_permutation
	sort(num,num+n);//���򣬴�С�������ֵ���Ҳ����ȷ�� 
	do{
		int all=0;
		int flag=0; 
		for(int i=1;i<=n;++i){
			all+=yh[n][i]*num[i-1];
			if(all>sum){//�ؼ���,���ͳ���sumֱ���˳������� 
				sort(num+i,num+n,greater<int>());//���������һЩ��������� 
				flag=1;
				break; 
			}
		}
		if(flag==1) continue;
		//��� 
		if(all==sum){
			for(int i=0;i<n;++i){
				cout<<num[i]<<" "; 
			}
			cout<<endl;
			exit(0);
		} 
	}while(next_permutation(num,num+n));
	
	return 0;
} 
