#include<bits/stdc++.h>
using namespace std;
//δͨ�����⣬��û���� 
//�ڴ��������� 
int n,m;
struct node{
	int lc;
	int step;
	string mp;
};
queue<node> res;
void bfs(int lc,int stp,string str,int mv[]){
	for(int i=0;i<4;++i){
		int nl=lc+mv[i];
		string nstr=str;
		//Խ���������β����
		if(n==2){//n=2�������� 
			if(nl<1||nl>n*n||(nl==3&&lc==2)||(nl==2&&lc==3)) continue;
		} 
		else if(nl<1||nl>n*n||(nl%n==0&&lc%n==1)||(nl%n==1&&lc%n==0)) continue;
		//��ֹ��Ȧ 
		if(str[lc]!=str[nl]&&str[nl]!='*'){
			nstr[lc]='*'; 
			//����״̬ 
			int nstp=stp+1;
			node nd;
			nd.lc=nl;
			nd.mp=nstr;
			nd.step=nstp;
			res.push(nd);
		}
	}
}

int main(){
	cin>>n>>m;
	pair<int,int> loc[m];
	string mps="s";
	//�������� 
	int mv[4]={1,-1,n,-n};
	//�����ͼ 
	for(int i=0;i<n;++i){
		string ch;
		cin>>ch;
		mps+=ch;
	}//�������� 
	for(int i=0;i<m;++i){
		cin>>loc[i].first>>loc[i].second;
	}
	
	//��ʼ����
	for(int i=0;i<m;++i){
		//queue<node> res;
		int mx=0; 
		//��ʼ��,�����״̬��ʼ 
		int x=loc[i].first;
		int y=loc[i].second;
		node start;
		start.mp=mps;
		start.lc=x*(y-1)+y; 
		start.step=1;
		res.push(start);
		//��ʼ���� 
		int t=res.size();
		while(!res.empty()){
			node nnde=res.front();
			int nlc=nnde.lc;
			int nsp=nnde.step;
			string nmp=nnde.mp;
			res.pop();
			//�ҵ������ 
			if(mx<nsp) mx=nsp;
			 
			bfs(nlc,nsp,nmp,mv);
			t--;
			if(t==0){
				//������һ�� 
				t=res.size();
			}
		} 
		cout<<mx<<endl;
	} 
}
