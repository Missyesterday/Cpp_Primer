/*  
 *  Description : 指向指针的引用
 *  Created by 旋风冲锋龙卷风 on 2022/11/26 16:12
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

void test01()
{
    int i = 42;
    //p是一个int类型的指针
    int *p;
    //r是一个对指针p的引用
    int *&r = p;

    r = &i;//令p指向i
    *r = 0;//令i = 0.
    // 解引用r的到i,r就相当于i的别名! r是一个指针,当然能解引用,不要被误导,要理解r的本质

    //i = 0
    cout << i << endl;
}

void test02()
{
    // ip是指针,ip2是int类型对象
    //*是修饰ip的
    int *ip, ip2;
    int* i, j;
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}