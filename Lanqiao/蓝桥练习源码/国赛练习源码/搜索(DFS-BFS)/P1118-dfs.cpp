#include<bits/stdc++.h>
using namespace std;
int n,sum;
int num[15];
int res[15][15];//���Ը���·���������ά���� 

bool check(int beg){//����Ƿ�ϸ� 
	int k=n;
	int chk[15]={0};
	for(int i=1;i<=n;++i){
		chk[i]=res[beg][i];
	}
	while(k>1){
		for(int i=1;i<k;++i){
			chk[i]=chk[i]+chk[i+1];
		}
		k--;
	}
	if(chk[1]==sum) return true;
	else return false;
}
bool yhsj(int beg){
	
} 
void dfs(int sta,int cts){//ȫ���� 
	if(cts==n+1){
		if(check(sta)){
			for(int i=1;i<=n;++i){
				cout<<res[sta][i]<<" ";
			}
			exit(0);//�����С��ֱ���˳� 
		}
	}
	for(int i=1;i<=n;++i){
		if(!num[i]){
			num[i]=1;//ѡ���ı��
			res[sta][cts]=i;//·����¼ 
			dfs(sta,cts+1);
			num[i]=0; 
		}
	}
}

int main(){
	cin>>n>>sum;
	for(int i=1;i<=n;++i){
		num[i]=1;//������һ���Ǽ�
		res[i][1]=i;//·����¼
		dfs(i,2);
		num[i]=0;//���� 
	}
	
	return 0;
} 
