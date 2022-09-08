#include<bits/stdc++.h>
using namespace std;

//��㶨��
struct node{
	int value;
	node* left;
	node* right;
};
//������ֵ
node *insert(node *p,int x){
	//p��ָ�룬Ϊ��ʱΪNULL,�½ڵ�ĳ�ʼ�� 
	if(p==NULL){
		//�´�һ����� 
		node *q=new node;
		q->value=x;
		q->left=NULL;
		q->right=NULL;
		//���ظ��ڵ�ָ�� 
		return q; 
	}else{
		//��һ���½ڵ㣬���ӵ����ڵ㲻�ϵݹ���ȥ 
		if(x<p->value) p->left=insert(p->left,x);
		else p->right=insert(p->right,x);
		//���ظ��ڵ� 
		return p; 
	}
} 
//������ֵx
bool find(node *p,int x){
	if(p==NULL) return false;
	else if(x==p->value) return true;
	else if(x<p->value) return find(p->left,x);
	else return find(p->right,x);
} 
//ɾ����ֵ 
node *remove(node *p,int x){
	//�޸�����NULL 
	if(p==NULL) return NULL;
	//ֵС�ڸ������������������Ϊ���ڵ���еݹ� 
	else if(x<p->value) p->left=remove(p->left,x);
	//ֵ���ڸ��������������Ҷ���Ϊ���ڵ���еݹ� 
	else if(x>p->value) p->right=remove(p->right,x);
	//����������ж�������Ķ���Ҫɾ�����Ĳ���
	//ɾ�����û������ӣ����Ҷ�������ȥ
	//���涼�Ƿ���ɾ��λ�õĸ���ֵ���������ݹ鵽���ڵ� 
	else if(p->left==NULL){
		node *q=p->right;
		delete p;//ɾ��p�� 
		return q; //�������ӽڵ� 
	}
	//�����û���Ҷ��� 
	else if(p->left->right==NULL){
		node *q=p->left;
		//���Ҷ��Ӽӵ�����ӵ��Ҷ��ӵ�λ�� 
		q->right=p->right;
		delete p;
		return q;//��������� 
		 
	}
	else{
		node *q;
		//Ѱ�����ҵĶ��ӣ����Ҷ��ӵ��Ҷ���Ϊ��ʱ�˳�
		//��ʱ�Ѿ�����Ϊ���������ֵ�ĸ��ڵ� 
		for(q=p->left;q->right->right!=NULL;q=q->right);
		node *r=q->right;//rΪ���ֵ
		//���ֵ�ĸ��ڵ���Ҷ��Ӹ���Ϊ���ֵ������ӣ�����Ϊ�գ� 
		q->right=r->left;
		//�����ֵ���µ�ɾ����λ�� 
		r->left=p->left;
		r->right=p->right;
		delete p;
		return r;
	} 
} 
int main(){
	node *root=NULL;
	root=insert(root,1);
	insert(root,3);
	insert(root,5);
	int n=find(root,3);
	int m=find(root,10);
	cout<<n<<" "<<m<<endl; 
} 
