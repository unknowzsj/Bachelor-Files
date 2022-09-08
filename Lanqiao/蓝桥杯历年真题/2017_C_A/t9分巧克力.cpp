//
// Created by zhengwei.
//

/*
标题： 分巧克力

    儿童节那天有K位小朋友到小明家做客。小明拿出了珍藏的巧克力招待小朋友们。
    小明一共有N块巧克力，其中第i块是Hi x Wi的方格组成的长方形。

    为了公平起见，小明需要从这 N 块巧克力中切出K块巧克力分给小朋友们。切出的巧克力需要满足：

    1. 形状是正方形，边长是整数
    2. 大小相同

例如一块6x5的巧克力可以切出6块2x2的巧克力或者2块3x3的巧克力。

当然小朋友们都希望得到的巧克力尽可能大，你能帮小明计算出最大的边长是多少么？

输入
第一行包含两个整数N和K。(1 <= N, K <= 100000)
以下N行每行包含两个整数Hi和Wi。(1 <= Hi, Wi <= 100000)
输入保证每位小朋友至少能获得一块1x1的巧克力。

输出
输出切出的正方形巧克力最大可能的边长。

样例输入：
2 10
6 5
5 6

样例输出：
2

资源约定：
峰值内存消耗（含虚拟机） < 256M
CPU消耗  < 1000ms


请严格按要求输出，不要画蛇添足地打印类似：“请您输入...” 的多余内容。

注意：
main函数需要返回0;
只使用ANSI C/ANSI C++ 标准;
不要调用依赖于编译环境或操作系统的特殊函数。
所有依赖的函数必须明确地在源文件中 #include <xxx>
不能通过工程设置而省略常用头文件。

提交程序时，注意选择所期望的语言类型和编译器类型。

*/
#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {
    freopen("/Users/zhengwei/CLionProjects/lanqiaobei2019/2017_C_A/in7.txt","x2",stdin);
    int n, k;
    int h[100000];
    int w[100000];
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> h[i] >> w[i];
    }

    int r = 100001;
    int l=1;
    int ans=0;
    while (l<=r) {
        int mid=(l+r)/2;

        int cnt = 0;
//        每个巧克力块，都按照len来切割
        for (int i = 0; i < n; ++i) {
            cnt += (h[i] / mid) * (w[i] / mid);
        }

        if (cnt >= k) {
            l=mid+1;
            ans=mid;
        }else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}