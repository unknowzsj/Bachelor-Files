#include<iostream>
#include<algorithm>
using namespace std;
//��ʱ�Ҳ����������� 
int n;
bool sushu(int test){
	//�ж�test���Ƿ�Ϊ���� 
	for(int i=2;i*i<=test;++i){
		if(test%i==0) return false;
	}
	//������ɹ� 
	return true;
}
/* 
bool check(int res,int n,int cur){
	int l=sizeof(res)/sizeof(res[0]);
	for(int i=0;i<k;++i){
		if(n==res[i]||sushu(res[cur-1]+n)) return false;
	}
	return true;
}
*/
void dfs(int res[],int cur){
	int k=sizeof(res)/sizeof(res[0]);
	//�����߽磬��λ��Ӳ�Ϊ��������� 
	if(cur==n&&sushu(res[0]+res[k-1])){
		for(int i=0;i<n;++i){
			cout<<res[i];
		}
		cout<<endl;
		return; 
	}
	//�����������
	for(int i=2;i<=n;++i){
		//����Ƿ���ֹ�,������������ѭ��
		bool ok=true; 
		for(int j=0;j<k;++j){
			if(i==res[j]) ok=false;
		}
		int test=i+res[cur-1];
		if(sushu(test)&&ok){
			//������������� 
			res[cur]=i;
			cur++;
			dfs(res,cur);
			res[cur]=0;
		}
	} 
}

int main(){
	cin>>n;
	int cur=1;
	int res[n]={0};
	res[0]=1;
	dfs(res,cur);
	
	return 0; 
} 
