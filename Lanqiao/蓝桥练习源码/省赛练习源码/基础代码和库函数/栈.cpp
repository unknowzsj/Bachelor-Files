#include<iostream>
#include<stack>

using namespace std;

//�Ƚ���� 
int main(){
	
	stack<int> s;
	s.push(1);//ѹջ 
	s.push(2);
	s.push(3);
	s.push(4);
	printf("%d\n",s.top());
	s.pop();//��ջ 
	printf("%d",s.top());
	
} 
