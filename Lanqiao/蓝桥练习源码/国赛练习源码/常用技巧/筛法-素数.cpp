#include<bits/stdc++.h>
using namespace std;
int vis[10010];

int main(){
	//��ͨ�� 
	for(int i=2;i<=10010;++i){//��2��ʼ��1��2��Ϊ���� 
		for(int j=2*i;j<=10010;j+=i){//��ÿ�����ı�����Ϊ1��ʣ�µľ������� 
			vis[j]=1; 
		}
	}
	//������
	int m=sqrt(n+0.5);
	for(int i=2;i<=m;++i){
		if(!vis[i]){//�޶�Ϊ������ż������i=2ʱ�������� 
			for(int j=i*i;i<=n;j+=i){//j=i*i,�����Ķ���i=2ʱ��ɾ���� 
				vis[j]=1;
			}
		}
	} 
	
	cout<<vis[37];//���� 
	
	return 0;
} 
