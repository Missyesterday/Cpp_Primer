/*  
 *  Description : 类型别名
 *  Created by 旋风冲锋龙卷风 on 2022/11/27 20:52
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

class Person
{

};
//typedef和using的方法
void test01()
{
    typedef double wages;// 定义wages为double的别名
    typedef wages a, *p;//wages相当于double
    //对于自定义类型也是可以的
    using P = Person;
    wages b;// 使用时typedef可以省略
    P p1;
}

//需要注意的事项
void test02()
{
   typedef char *pstring;//pstring是char*的别名
   const pstring ctr = 0;//ctr是一个常量指针,这是个顶层const,而不是底层,不能直接用char* 替换pstring
   *ctr = 'a';//*ctr可以修改
   //ctr = 0;//ctr不能修改
}


int main()
{

    return EXIT_SUCCESS;
}