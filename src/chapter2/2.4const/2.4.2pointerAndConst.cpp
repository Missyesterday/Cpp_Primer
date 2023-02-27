/*  
 *  Description : 指针和const
 *  Created by 旋风冲锋龙卷风 on 2022/11/27 01:10
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

//要想存放常量对象的地址,必须使用指向常量的指针
void test01()
{
    const double pi = 3.14;
    //double *ptr = &pi;//报错, ptr是一个指向普通对象的指针
    const double *ptr2 = &pi; //正确, ptr2是一个指向double常量的指针
    //*ptr2 = 1.1;//报错, 不能给*ptr2赋值,也就是不能修改ptr2指向的对象的值,不管这个对象是不是const
    double dval = 3.14;
    ptr2 = &dval;//正确,ptr2可以修改,但是不能通过ptr2修改dval的值

}

//int *const 和 const int* 和 const int *const
//指向int对象的常量指针 和 指向常量int对象的指针 和 指向常量int对象的常量指针
//可以修改int对象,不能修改指针指向
//可以修改指针指向,不能修改const int
//既不能修改指针指向,又不能修改const int
//其实引用就相当于一个常量指针,能修改引用的对象的值,但是不能改变引用绑定的对象
void test02()
{
    int i = 0;
    int *const pi = &i; //正确,定义了一个常量指针,pi不能修改了,但是*pi可以修改s
    const int* pi3 = &i; //正确,它是一个指针,可以不初始化
    const int *const pi4 = &i;//正确
    const double i2 = 3.14;
    const double *const pi2 = &i2;//指向常量对象的常量指针
}

//指向常量的指针可以指向普通对象
void test03()
{
    int i = 0;
    const int *pi = &i;
    const int *const pi2 = &i;
}

void test04()
{
    const int i = -1, &r = 0, ic = 0;
    int j = 1;
    int *p1 = &j;
    int *const p2 = p1;
    const int *const p4 = &j;

}

int main()
{

    return EXIT_SUCCESS;
}