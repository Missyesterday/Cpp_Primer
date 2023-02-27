/*  
 *  Description : 有返回值的函数
 *  Created by 旋风冲锋龙卷风 on 2022/12/08 16:56
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

//严重错误：这个函数试图返回局部对象的引用
const string &foo()
{
    string ret;
    if(!ret.empty())
        return ret; //错误： 返回局部对象的引用
    else
        return "Empty"; //错误： "Empty"是一个局部临时量
}

auto func(int i) -> int (*)[10]
{
    return nullptr;
}

int odd[] = {1, 3, 5, 7};
int even[] = {2, 4, 6, 8};

//返回一个指针，该指针指向含有5个整数的数组
decltype(odd) *arrPttr(int i)
{
    return (i % 2) ? &odd : &even; //返回一个指向int数组的指针
}

decltype(odd) &arrPttr2(int i)
{
    return (i % 2) ? odd : even; //返回一个指向int数组的引用
}

int main()
{
    foo();
    return EXIT_SUCCESS;
}