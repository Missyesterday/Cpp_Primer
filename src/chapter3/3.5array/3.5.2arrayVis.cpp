/*  
 *  Description : 数组的访问
 *  Created by 旋风冲锋龙卷风 on 2022/11/29 17:04
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

void test01()
{
    int arr[10] = {}; //这里是全部默认初始化为0,而非未定义
    for (auto i : arr)
    {
        cout << i << endl;
    }
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}