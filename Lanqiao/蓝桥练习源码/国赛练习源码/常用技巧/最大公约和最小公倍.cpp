#include<bits/stdc++.h>
using namespace std;

int gcb(int a,int b){
	return b==0?a:gcb(b,a%b);
} 

int main(){
	int x=12,y=8;
	cout<<"���Լ��"<<gcb(x,y)<<endl;
	cout<<"��С������"<<(x/gcb(x,y))*y;//x*y/gcb(x,y),������˳������Լ��������С������
	
	return 0; 
}
