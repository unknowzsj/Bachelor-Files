#include<bits/stdc++.h>
using namespace std;

int n,k;
//����num��n�� 
int power(int num,int n){
	int res=1;
	for(int i=0;i<n;++i){
		res*=num;
	}
	return res;
} 

int main(){
	//�������� 
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	cin>>k;
	//�������ò���,������ʱ�� 
	vector<vector<int> > res;
	//iΪ�ܹ��ɶ����ַ�ʽ
	bool flag=false; 
	for(int i=power(2,n);i>0;--i){
		int sum=0;
		//jΪ��λ�Ķ��٣����� ,�ӵ�λ����λ 
		for(int j=n-1;j>=0;--j){
			//j����ȡ��λ�� 
			if(((i>>j)&1)==1) sum+=a[j]; 
		}
		if(sum==k) flag=true; 
	}
	cout<<(flag ? "yes":"no")<<endl;
	
	return 0; 
} 
