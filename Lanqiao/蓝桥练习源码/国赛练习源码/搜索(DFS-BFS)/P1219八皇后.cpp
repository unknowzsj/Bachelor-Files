#include<bits/stdc++.h>
using namespace std;
int n,cts;
int dj[2][50];//�Խ���ѡ���n������������2*n 
int lie[15];
int res[15];//��¼·�� 

void dfs(int h){
	if(h==n+1){//�����һ����ɣ���ӡ���˳� 
		if(cts<3){
			for(int i=1;i<=n;++i) cout<<res[i]<<" ";
			cout<<endl;
		}
		cts++; 
		return;
	}
	//������ 
	for(int i=1;i<=n;++i){
		if(lie[i]==0&&dj[0][i+h]==0&&dj[1][(i-h+n)]==0){
			lie[i]=1;
			dj[0][i+h]=1;//�ӶԽ���  
			dj[1][i-h+n]=1;//+n��Ϊ�˷�ֹ�������������Խ��� 
			res[h]=i;//��h�У���i�� 
			
			dfs(h+1);
			//����
			lie[i]=0;
			dj[0][i+h]=0; 
			dj[1][i-h+n]=0;
		} 
	}
}

int main(){
	cin>>n;
	
	//��ʼ����
	dfs(1);//��1�п�ʼ 
	cout<<cts;
	
	return 0;
}
