#include<bits/stdc++.h>
using namespace std;
int N,X,Y;
int main(){
	cin>>N;
	int loc[N+1][4]={0};
	//��ȡ��Ϣ 
	for(int i=1;i<=N;++i){
		cin>>loc[i][0];//x
		cin>>loc[i][1];//y
		cin>>loc[i][2];//x
		cin>>loc[i][3];//y
	}
	cin>>X>>Y;
	//����
	int mx=-1;//�޽�����-1 
	for(int i=1;i<=N;++i){
		//����ٷ�Χ�ڣ������ֵΪi 
		if(X>=loc[i][0]&&X<=loc[i][0]+loc[i][2]&&Y>=loc[i][1]&&Y<=loc[i][1]+loc[i][3]) mx=i;
	}
	cout<<mx<<endl;
	
	return 0; 
} 
