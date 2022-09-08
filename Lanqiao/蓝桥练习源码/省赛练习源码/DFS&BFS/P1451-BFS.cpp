#include<bits/stdc++.h>
using namespace std;
//ȫ�ֱ����ô�д��ĸ 
int N,M;
queue<pair<int,int> > res;
int mv[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
//���б��� 
void bfs(int n,int m,string mps[]){
	mps[n][m]='0';
	for(int i=0;i<4;++i){
		int nn=n+mv[i][0];
		int nm=m+mv[i][1];
		//Խ���˳� 
		if(nn<0||nm<0||nn>=N||nm>=M){
			continue;
		}
		//ѹ���µ����� 
		if(mps[nn][nm]>'0'){
			pair<int,int> nw(nn,nm);
			res.push(nw); 
		} 
	} 
}

int main(){
	cin>>N>>M;
	string mps[N];
	int cts=0;
	//�����ͼ 
	//x-��-m��y-��-n
	for(int i=0;i<N;++i){
		cin>>mps[i];
	} 
	//����ÿ���㣬��������ͨ����Ϊ0
	//i-y��,j-x�� 
	for(int i=0;i<N;++i){
		for(int j=0;j<M;++j){
			if(mps[i][j]!='0'){
				pair<int,int> start(i,j);
				res.push(start);
				int t=res.size();
				while(!res.empty()){
					pair<int,int> nnm=res.front();
					int nx=nnm.first;
					int ny=nnm.second;
					res.pop();
					t--;
					bfs(nx,ny,mps);
					if(t==0){
						t=res.size();
					}
				}
				cts++;
			}
		}
	}
	cout<<cts<<endl;
	
	return 0;
}
