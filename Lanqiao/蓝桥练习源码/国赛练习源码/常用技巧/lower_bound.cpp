#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[5]={1,2,3,4,5};
	cout<<*lower_bound(a,a+5,3,greater<int>());//ѡ��С�ڵ���3�ĵ�һ���� 
	
	return 0;
} 
