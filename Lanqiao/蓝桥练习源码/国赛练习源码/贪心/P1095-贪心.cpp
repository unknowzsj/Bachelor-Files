#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m,s,t,dis,tim; 

int main(){
	cin>>m>>s>>t;
	ll d1,d2=0;//��¼���ֺ���·�ķ�ʽ
	for(int i=1;i<=t;++i){
		//���ַ� 
		if(m>=10){
			d1+=60;//ħ���� 
			m-=10; 
		}
		else m+=4;
		//����
		d2+=17;
		if(d1>d2) d2=d1;//���п�,�����滻
		//�ж����
		if(d2>=s){
			cout<<"Yes"<<endl<<i;
			return 0;
		} 
	} 
	cout<<"No"<<endl<<d2;
	
	return 0; 
}
