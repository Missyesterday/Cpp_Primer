/*  
 *  Description : 顶层const与底层const
 *  Created by 旋风冲锋龙卷风 on 2022/11/27 15:35
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

void test01()
{
    int i = 0;
    int *const p1 = &i;//顶层const
    const int ci = 42;// 底层const
    const int *p2 = &ci;// 底层const
    const int *p3 = &i;// const int *可以指向普通int对象
    const int &r1 = i;
}

void test02()
{
    int i = 0;
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 =v2;


    r1 = v2;//正确,虽然r1是普通的int &, v2是const对象,但是这是赋值语句
    //如果写成 int &r1 = v2;则错误,这是初始化绑定,不能将int &绑定到const int
    //p1 = p2;// 错误不能将指向常量的指针赋值给指向普通int类型的指针,也就是指针常量不能转换为非常量
    p2 = p1;//正确,非常量可以转换为常量
    //p1 = p3;//错误,理由 同上,但是需要注意顶层const对于拷出没有影响
   p2 = p3;//正确, 顶层const对于拷入和拷出没有影响,只是不能再修改p3

}

int main()
{

    return EXIT_SUCCESS;
}