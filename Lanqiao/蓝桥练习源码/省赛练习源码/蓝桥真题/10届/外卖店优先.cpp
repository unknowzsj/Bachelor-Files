#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
//δͨ������֪��Ϊɶ 
//�����Ϣ 
map<int,vector<int> > shop;
int N,M,T;
int main(){
	cin>>N>>M>>T;
	int a[N+1][M+1]={0};//���ȼ�
	bool pro[N+1][M+1]={0};//�Ƿ��ڻ���
	int id,ts;//id--1-N
	int cts=0; 
	//������� 
	for(int i=0;i<M;++i){
		cin>>ts>>id;
		shop[id].push_back(ts);
	}
	//ȷ��ÿ������ÿ��ʱ���Ƿ������ȶ����� 
	for(int i=1;i<=N;++i){
		int sta[M+1]={0};
		//ȷ��״̬ 
		for(int j=0;j<shop[i].size();++j){
			//ͬһʱ�̵Ķ������ 
			sta[shop[i][j]]+=1; 
		}
		for(int j=1;j<=M;++j){
			//�������ȼ� 
			if(sta[j]==0&&a[i][j-1]>0) a[i][j]=a[i][j-1]-1;
			else if(sta[j]>0) a[i][j]=a[i][j-1]+2*sta[j];
			//����״̬ 
			if(a[i][j]>=5) pro[i][j]=true;
			else if(pro[i][j-1]==true&&a[i][j]>3) pro[i][j]=true;
			else if(a[i][j]<=3) pro[i][j]=false;
		} 
	}
	//�жϵ����Tʱ���Ƿ������ȶ��� 
	for(int i=1;i<=N;++i){
		if(pro[i][T]) cts++;
	} 
	cout<<cts<<endl;
	
	return 0; 
}
