#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll res;
int flag[70];//ȡ��һ�������� 

int yus(ll n){
	int cts=0;
	for(ll i=1;i*i<=n;++i){
		if(n%i==0) cts+=2;//˫�� 
		if(i*i==n) cts--;//�ظ�-1 
	}
	return cts; 
}

int main(){
	int len=1;
	int su;
	for(ll i=1;i<=100000000;++i){
		su=yus(i);
		if(su==len&&flag[len]==0){//û��ȡ�� 
			flag[len]==1;
			//cout<<i<<endl; 
			res+=i;
			if(len==60){
				cout<<i<<"  "<<yus(i);
				break;//����60���˳� 
			}
			len++;
		}
	}
	cout<<res;
	
	return 0;
} 
