#include<iostream>
using namespace std;

typedef long long ll;
ll sum;
ll n;
//��̬�滮���� ����ռ�̫��
//�õ��������� ����ʡ�ռ䣩 
int main(){
	cin>>n;
	int s=0;
	int a=1;
	int b=1;
	int c=1;
	for(ll i=4;i<=n;++i){
		s=(a+b+c)%10000;
		a=b;
		b=c;
		c=s;
	}
	cout<<s<<endl;
}
