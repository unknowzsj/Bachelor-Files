#include<bits/stdc++.h>//δ��ɣ�ֵ����ĥ 
using namespace std;//̰��˼·��ѡ�����Ϳ����ҵ������㣬�������ѡ����һ�������㣬���Ǵ�  
int n;
struct Node{
	int nx,ny;
}node[310]; 
int allx[110],ally[110];
int res;
//sort(allx,allx+110,greater<int>());�Ӵ�С 

int main(){
	cin>>n;
	for(int i=0;i<n;++i){//���ݵ����� 
		int x,y;
		cin>>x>>y;
		node[i].nx=x;
		node[i].ny=y;
		++allx[x];
		++ally[y];
	}
	//Ѱ�����2������2�����Ӷ�ȷ���ĸ��̶�
	int ml1,ml2,mw1,mw2=0;
	int ll1,ll2,lw1,lw2; 
	for(int i=0;i<100;++i){
		if(allx[i]>ml1){
			ml1=allx[i];
			ml2=ml1;
			ll1
		}
	} 
	
	return 0; 
}
