#include<bits/stdc++.h>
using namespace std;
//���ڴ�����--�����ظ������ 
//����Ĵ�
string start,fnd;
//��������Ҫ����Ľṹ����ýṹ�� 
struct node{
	string s1;
}; 
//���Ե����λ�� 
int cha[6]={-3,-2,-1,1,2,3};
//�м�״̬ת�� 
queue<node> loc;
map<string,bool> statue; 
 
void jump(string start,int x){
	int q;
	//���鳤�� 
	int l=x;
	//�ҵ������±� 
	for(int i=0;i<l;++i){
		if(start[i]=='*') q=i;
	}
	//������Ծ 
	for(int i=0;i<6;i++){
		int ju=q+cha[i];
		if(ju<0 || ju>=l) continue;
		//ѡ���½�� 
		node news;
		news.s1=start;
		news.s1[q]=news.s1[ju];
		news.s1[ju]='*';
		//��ֹ�ظ���������� 
		if(!statue[news.s1]){
			statue[news.s1]=true;
			loc.push(news);
		}
	} 
}
/*ֱ�������ַ�������ж� 
//�ж��Ƿ�ﵽĿ��Ч�� 
bool check(char *start,char *end,int n){
	int k=0;
	for(int i=0;i<n;++i) if(start[i]==end[i]) k++;
	return (k==n ? true:false);
}
*/ 
int main(){
	//�������� 
	cin>>start;
	cin>>fnd;
	int n=start.size();
	/*û��Ҫ 
	//��ʼ�ͽ���״̬ 
	char start[n],end[n];
	for(int i=0;i<n;++i){
		start[i]=sta[i];
		end[i]=ed[i];
	}
	*/
	//��ʼ�� 
	node sa;
	sa.s1=start;
	loc.push(sa);
	 
	int num=0;
	int t=loc.size();
	while(!loc.empty()){
		node st=loc.front();
		loc.pop();
		//����ɹ��������� 
		if(st.s1==fnd){
			cout<<num<<endl;
			break;
		}
		jump(st.s1,n);
		t--;
		if(t==0){
			t=loc.size();
			num++; 
		}
		
	}
}
