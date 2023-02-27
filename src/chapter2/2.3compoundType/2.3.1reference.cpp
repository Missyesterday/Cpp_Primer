/*  
 *  Description : 引用
 *  Created by 旋风冲锋龙卷风 on 2022/11/26 01:32
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

void test01()
{
    int i = 0;
    //double *dp = &i;
    int *p = &i;
}

void test02()
{
    int i = 42;
    int *p = &i;
    *p = *p * *p;
    cout << *p << " " << i << endl;
}

int main()
{
    test02();
    return EXIT_SUCCESS;
}