#include<bits/stdc++.h>
using namespace std;

int main(){
	//�ַ�����ֱ�ӵ������� 
	string word;
	cin>>word;
	int n;
	cin>>n;
	int maxl=0;
	
	/*************������************* 
	  ɾ�������ֵ������ĸ--˼·����
	while(n--){
		int maxw='A'-1;
		for(int i=0;i<word.size();++i){
			if(word[i]>maxw){
				maxw=word[i];
				maxl=i;
			} 
		}
		//erase(pos,n)��pos��ʼɾ����n���� 
		word.erase(maxl,1); 
	}
	***********************************/
	
	//λ��ԽС����ԽС
	while(n--){
		if(word[0]>word[1]) word.erase(0,1);
		else word.erase(1,1);
	} 
	cout<<word<<endl;
	/* ɾ����Сλ����һλ�Ľϴ�ֵ ��ɾ����һ�������±Ƚ� 
	    while(n--){
        for(int i=0;i<str.size();++i){
            if(str[i]>str[i+1]){
                str.erase(i,1);
                break;
            }
        }
    }
	*/
	
	
	return 0;
}
