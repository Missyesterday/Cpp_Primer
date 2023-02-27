/*  
 *  Description : 数组作为形参
 *  Created by 旋风冲锋龙卷风 on 2022/12/08 01:01
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;
void print(const int *);
void print(const int[]);
void print(const int[10]); //这里的维度只是我们期望数组含有多少元素，实际不一定

int main()
{

    return EXIT_SUCCESS;
}