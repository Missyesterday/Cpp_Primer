/*  
 *  Description : 字面值常量
 *  Created by 旋风冲锋龙卷风 on 2022/11/19 00:45
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

void test01()
{
    // 十进制字面值是int long 和long long中能容纳该字面值最小的那个,且十进制默认带符号
    int a = 20;
    //0开头代表8进制
    //8进制和16进制的字面值是能容纳其数值的int, unsigned int, long, unsigned long, long long 和 unsigned long long中尺寸最小的
    //如果都放不下,则报错
    int b = 024;
    //0x和0X开头代表16进制,不能直接输出
    int c = 0x14;
    int d = 0X14;
    cout << a << " " << b << " "  << c << " " << d << endl;
}

//字符和字符串字面值
void test02()
{
    char x = 'x';
    //如果字符串太长,可以如下书写
    cout << "a very very very very"
            "very very very long sentence"
            << endl;
    // \x后接1个或多个16进制数字, \后接1个,2个或3个八进制数字
    cout << "Hi \x4dO\105!\n";
}


int main()
{
    test02();
    return EXIT_SUCCESS;
}