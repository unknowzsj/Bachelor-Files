#include<bits/stdc++.h>
using namespace std;
//transΪ��־λ 
int n,m,trans;

int main(){
	//��̬�滮����С��ʼ���� 
	cin>>n>>m;
	int map[n+1][m+1];
	//ÿ�������ȡ��λ�����꣬���ϵ��� 
	//���������� 
	int x[9]={ 0, 0, 0,-1,-1,-1,-2,-2,-3};
	int y[9]={-1,-2,-3, 0,-1,-2, 0,-1, 0};
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cin>>map[i][j];
			trans=INT_MIN;
			for(int t=0;t<9;++t){
				if(i+x[t]>0 && j+y[t]>0){
					trans=max(trans,map[i+x[t]][j+y[t]]);
				}
			}//INT_MIN������С 
			if(trans!=INT_MIN)  map[i][j]+=trans;
		} 
	}
	cout<<map[n][m]<<endl;
	
	return 0;
}
