#include<bits/stdc++.h>
using namespace std;
int n;
int mp[10010][10010];
int jall,oall;
int l,b,r,t;
int mx,my;

int main(){
	cin>>n;
	//ͳ�����еĸ��ǵ� 
	for(int i=0;i<n;++i){
		cin>>l>>b>>r>>t;
		//���µ�ͼ
		for(int x=l;x<r;++x){
			for(int y=b;y<t;++y){
				++mp[x][y];
			}
		}
		//ȷ��������Χ 
		mx=max(mx,r);
		my=max(my,t); 
	}
	
	for(int i=1;i<=mx;++i){
		for(int j=1;j<=my;++j){
			if(mp[i][j]%2==0&&mp[i][j]!=0) oall++;
			else if(mp[i][j]%2==1) jall++; 
		}
	} 
	cout<<jall<<endl<<oall;
	
	return 0;
}
