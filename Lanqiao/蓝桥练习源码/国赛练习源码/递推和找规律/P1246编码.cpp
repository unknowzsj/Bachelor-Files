#include<bits/stdc++.h>//δ���-- 
using namespace std;
string str;
int res;

int cnm(int n,int m)//Cnm-�������n������ȡm���� 
{
	if(m==0)return 1;
	int mut=1;
	for(int i=n;i>n-m;i--)mut*=i;
	for(int i=m;i>1;i--)mut/=i;
	return mut;
}

int main(){
	cin>>str;
	int a=str.size();
	for(int i=1;i<a;++i){
		if(str[i]<=str[i-1]){
			cout<<0;
			exit(0);
		}
	}
	if(a==1) res=str[0]-'a'+1;
	else{
		for(int i=1;i<a;i++){
			res+=cnm(26,i);//��1--a-1������ɵ�������� 
		}
		//�����ܵ�
		for(int i=0;i<a;++i){
			for(char j=(i==0?'a':str[i-1]-1);j<str[i];++j){
				res+=cnm('z'-j,a-i-1);
			} 
		}
		//res++;//�����Լ�  
	}
	cout<<res;
	
	return 0;
} 
