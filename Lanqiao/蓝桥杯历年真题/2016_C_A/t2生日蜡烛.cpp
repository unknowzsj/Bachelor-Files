//
// Created by zhengwei.
//

/*
生日蜡烛

某君从某年开始每年都举办一次生日party，并且每次都要吹熄与年龄相同根数的蜡烛。

现在算起来，他一共吹熄了236根蜡烛。

请问，他从多少岁开始过生日party的？

请填写他开始过生日party的年龄数。
注意：你提交的应该是一个整数，不要填写任何多余的内容或说明性文字。


*/
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
//    枚举两个年龄
    for (int i = 1; i < 100; ++i) {
        for (int j = i; j <100 ; ++j) {
            if((i+j)*(j-i+1)/2==236)
                cout<<i<<" "<<j<<endl;
        }
    }
//    枚举生日举办次数
    for (int i = 1; i < 100; ++i) {
        int t=i*(i-1)/2;
        if((236-t)%i==0) {
//            输出首项
            cout<<(236-t)/i<<" "<<i<<endl;
        }
    }

    return 0;
}