#include<bits/stdc++.h>
using namespace std;
const int N=101;
const int M=101;
int n,m;
char a[N][M];

void dfs(int x,int y,int n,int m){
	a[x][y]='.';
	//���˸�������б���(-1,0,1) 
	for(int i=-1;i<=1;++i){
		for(int j=-1;j<=1;++j){
			//�Լ����� 
			if(i==0&&j==0) continue;
			//Խ������ 
			if(i+x<0||i+x>=n||j+y<0||j+y>=m) continue;
			//������ڵ���ˮ���������� 
			if(a[i+x][j+y]=='W'){
				x+=i;
				y+=j;
				bfs(x,y,n,m);
			}
		}
	} 
} 

int main(){
	//��ȡ���� 
	cin>>n>>m;
	for(int i=0;i<n;++i){
		string str;
		cin>>str;
		for(int j=0;j<m;++j){
			a[i][j]=str[j];
		}
	}
	//����ÿ��ˮ�ݵ� 
	int count=0;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(a[i][j]=='W'){
				bfs(i,j,n,m);
				count++; 
			}
		}
	}
	cout<<count<<endl;
}
