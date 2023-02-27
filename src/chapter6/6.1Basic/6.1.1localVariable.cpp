/*  
 *  Description : 局部对象
 *  Created by 旋风冲锋龙卷风 on 2022/12/08 00:08
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//一个统计自己被调用了多少次的函数
size_t count_calls()
{
    //调用结束后， 这个值仍然有效
    static size_t ctr = 0;
    return ++ctr;
}

void test01()
{
    //输出1到10
    for(size_t i = 0; i != 10; ++i)
    {
       cout << count_calls()  << endl;
    }

}

void test02()
{
    vector<int> v;
    cout << sizeof(v) << endl;
}

void test03()
{
    stack<int, vector<int>> c;
}

int main()
{
    test02();
    return EXIT_SUCCESS;
}