#include<bits/stdc++.h>
using namespace std;

int n;
int main(){
	cin>>n;
	int val[n];
	int reach=0;
	//���Ե�����Զ�ľ��� 
	for(int i=0;i<n;++i){
		if(i>reach) cout<<"false"<<endl;
		reach=max(i+val[i],reach);
	}
	cout<<"true"<<endl; 
	
	return true;
}
