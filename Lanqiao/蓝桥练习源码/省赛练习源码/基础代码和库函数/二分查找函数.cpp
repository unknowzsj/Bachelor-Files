#include<iostream> 
#include<algorithm>

using namespace std;

//���ֲ��ҿ⺯�� 
int main(){
	int a[6]={2,5,3,9,1,4};
	
	//�������� 
	sort(a,a+6);
	for(int i=0;i<6;i++){		
		printf("%d",a[i]);
	}
	
	//���ֲ���  binary_search(a + begin, a + end, k, cmp);
	// ����true��false 
	int res;
	res=binary_search(a,a+6,9);
	printf("\n%d\n",res); 
	
	//���ֲ��ҵ�һ�����ڵ���K������λ��
	//lower_bound(a + begin, a + end, k, cmp);
 	int sta;
 	sta=lower_bound(a,a+6,2)-a+1;//��ȥ��ʼ��ַ����ʼΪ0��+1 
 	printf("%d\n",sta);
	
	//���ֲ��ҵ�һ������K������λ��
	// upper_bound(a + begin, a + end, k, cmp);
	int sta1;
	sta1=upper_bound(a,a+6,4)-a+1;
	printf("%d",sta1);
	 
	return 0;	
}
