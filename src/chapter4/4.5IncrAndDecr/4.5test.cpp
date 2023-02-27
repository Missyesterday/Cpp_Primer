/*  
 *  Description : 递增和递减运算符
 *  Created by 旋风冲锋龙卷风 on 2022/12/01 20:20
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <vector>
using namespace std;

void test01()
{
    vector<int> v = {1, 2, 3, 4, 5};
    auto pbeg = v.begin();
    //打印整个vector
    while(pbeg != v.end())
        //后置++的优先级高于解引用运算符
        cout << *pbeg++ << " ";
    cout << endl;
}

void test02()
{
    int i = 0;
    int *p = &i;
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}