#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//���η������� 
ll pow(int a,int b){
	if(b==0) return 1;
	int x=pow(a,b/2);
	ll ans=(ll)x*x;
	if(b%2==1) ans=ans*a;
	return ans; 
}
//���η�������ȡģ,��ÿһ����ȡģ 
ll powmod(int a,int b,int m){
	if(b==0) return 1;
	int x=powmod(a,b/2,m);
	ll ans=(ll)x*x%m;
	if(b%2==1) ans=ans*a%m;
	return ans; 
}

int main(){
	cout<<pow(2,3)<<" ";
	cout<<powmod(2,3,5);
	
	return 0;
}
