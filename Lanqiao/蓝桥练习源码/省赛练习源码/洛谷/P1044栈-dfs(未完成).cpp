#include<bits/stdc++.h>
using namespace std;
//δ��� 
//ջ��������ֻ��һ�ַ�ʽ�õ������ùܼ�¼���
int cts;
int n; 
void dfs(int pu,int po,int& cur){
	//��ջ��ջ�����������+1 
	if(cur==0){
		cts++;
		return;
	}else if(po>n||pu>n){
		return;
	}
	//��ջ������ڵ��ڳ�ջ 
	if(pu>=po){
		//��ջ����
		int pu1=pu+1;
		int po1=po;
		cur--;
		dfs(pu1,po1,cur);
		//��ջ���� 
		int pu2=pu;
		int po2=po+1;
		cur++;
		dfs(pu2,po2,cur);
	}
} 

int main(){
	cin>>n;
	dfs(0,0,n);
	cout<<cts<<endl;
	
	return 0;
}
