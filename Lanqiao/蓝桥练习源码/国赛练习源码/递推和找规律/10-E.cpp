#include<bits/stdc++.h>
using namespace std;//δ��� 
int res;
int num[110];

bool sqr(int n){//�ж��Ƿ�����ȫƽ�� 
	for(int i=0;i*i<=n;++i){
		if(i*i==n) return true;
	}
	return false;
}
void dfs(int cur,int cts){
	if(cur==100){//������100���жϲ��˳� 
		res=max(cts,res);
		return;
	}
	//��ѡcur
	dfs(cur+1,cts);
	//ѡcur
	if(!sqr(cur)){//cur������ȫƽ���� 
		int flag=0;
		for(int i=2;i<cur;++i){//�ж��Ƿ���ԷŽ�ȥ 
			if(num[i]==1&&sqr(cur+i)){//ѡ���˸���,�Ҹ����������ȫƽ�� 
				flag=1;
				break; 
			}			
		}
		if(flag==0){
			num[cur]=1;
			dfs(cur+1,cts+1);
			num[cur]=0;//���� 
		} 
	} 
}
int main(){
	//��ʼ���� 
	dfs(2,0);
	cout<<res;
	
	return 0;
}
