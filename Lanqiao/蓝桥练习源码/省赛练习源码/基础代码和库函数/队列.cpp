#include<cstdio>
#include<queue>

using namespace std;

//�Ƚ��ȳ� 
int main(){
	queue<int> q;
	q.push(1);//����� 
	q.push(2);
	q.push(3);
	q.push(4);
	printf("%d\n",q.front());
	q.pop();//������ 
	printf("%d",q.front());
} 
