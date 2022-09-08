#include<bits/stdc++.h>
using namespace std;
int N,M;
string mps[10000];
int mv[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
void dfs(int n,int m){
	//n��m�� 
	mps[n][m]='0';
	for(int i=0;i<4;++i){
		int nn=n+mv[i][0];
		int nm=m+mv[i][1];
		//�ҵ���ͨ�ļ���dfs
		if(nn<0||nm<0||nn>=N||nm>=M) continue;//Խ�� 
		if(mps[nn][nm]!='0'){
			dfs(nn,nm);
		}
	}
}

int main(){
	cin>>N>>M;
	int cts=0;
	//�����ͼ 
	//x-��-m��y-��-n
	for(int i=0;i<N;++i){
		cin>>mps[i];
	} 
	//����ÿ���㣬��������ͨ����Ϊ0
	//i-y��,j-x�� 
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(mps[i][j]!='0'){
				dfs(i,j);
				//һ�����ҵ�û��ʱ������ҵ�һ��ϸ�� 
				cts++; 
			}
		}
	}
	cout<<cts<<endl;
	
	return 0; 
}
