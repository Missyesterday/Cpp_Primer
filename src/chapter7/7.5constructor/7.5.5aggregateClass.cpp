/*  
 *  Description : 聚合类
 *  Created by 旋风冲锋龙卷风 on 2023/01/08 21:12
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>


using namespace std;
struct Data
{
    int ival;
    string s;
};

void test01()
{
    //可以直接使用花括号来初始化聚合类的数据成员
    //顺序要与声明的一直
    Data val = {0, "Anna"};
}

int main()
{

    return EXIT_SUCCESS;
}