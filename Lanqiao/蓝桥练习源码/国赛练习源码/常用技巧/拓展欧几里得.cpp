#include<bits/stdc++.h>
using namespace std;

//��չŷ����ã��������ϵĵ� 
void gcdp(int a,int b,int &x,int &y){
	if(b==0){
		x=1;
		y=0;
	}else{
		gcdp(b,a%b,y,x);//x,yλ�öԵ�
		y-=x*(a/b); 
	} 
}

int main(){
	int a=12,b=8,c=4;
	int x,y;
	gcdp(a,b,x,y);//������Եó�ax+by=gcd(a,b)=g(4)�Ľ�(x,y),�����⣨x+k*b/g,y-k*a/g��-��x0,y0�� 
	//ax+by=c,���c��gcd(a,b)=g�ı�������һ���Ϊ(x*c/g,y*c/g);��Ϊ����ʱ����������
	//����������������Ϳ��Բ��ϼ��� (x0*c/g,y0*c/g)
	cout<<x<<" "<<y;
	
	return 0;
} 
