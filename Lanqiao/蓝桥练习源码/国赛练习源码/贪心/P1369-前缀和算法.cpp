#include<bits/stdc++.h>
using namespace std;
int n,res;
int mp[110][110];
int pre[110][110];
int mx,my;//�߽����� 

int main(){
	cin>>n;
	for(int i=0;i<n;++i){
		int x,y;
		cin>>x>>y;
		mp[x][y]=1;
		mx=max(mx,x);
		my=max(my,y); 
	}
	//����ǰ׺��
	for(int i=1;i<=mx;++i){
		for(int j=1;j<=my;++j){
			pre[i][j]=pre[i-1][j]+pre[i][j-1]+mp[i][j]-pre[i-1][j-1];
		}
	} 
	//����߸��ǵ����ֵ
	for(int lx=1;lx<mx;++lx){
		for(int ly=1;ly<my;++ly){//�������Ͻǵĵ� 
			for(int rx=lx+1;rx<=mx;++rx){
				for(int ry=ly+1;ry<=my;++ry){//�������½ǵĵ� 
					int big,small,sum;
					big=pre[rx][ry]-pre[rx][ly-1]-pre[lx-1][ry]+pre[lx-1][ly-1];
					small=pre[rx-1][ry-1]-pre[rx-1][ly]-pre[lx][ry-1]+pre[lx][ly];
					sum=big-small;
					res=max(sum,res);
				}
			}
		}
	} 
	cout<<res;
	
	return 0;
} 
