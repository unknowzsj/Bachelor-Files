#include<bits/stdc++.h>
using namespace std;

int main(){
	//����һ�β��������Ĳ����������������
	string s1,s2;
	cin>>s1;
	cin>>s2;
	
	int n=s1.size();
	int diff[n];
	int j=0,sum=0,x;
	//��������λ�� 
	for(int i=0;i<n;++i){
		if(s1[i]!=s2[i]) diff[j++]=i;
	}
	sort(diff,diff+j);
	//�����ѡ������Ľ������ 
	for(int i=0;i<j;i+=2){
		x=diff[i+1]-diff[i];
		sum+=x;
	}
	cout<<sum<<endl;
} 
