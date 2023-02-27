/*  
 *  Description : sizeof关键字
 *  Created by 旋风冲锋龙卷风 on 2022/12/03 15:22
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

void test01()
{
    int arr[5] = {0};
    //4
    cout << sizeof(int) << endl;
    //8
    cout << sizeof(int *) << endl;
    //8
    cout << sizeof(string *) << endl;
    //20, sizeof不会把数组名转换成指针来处理j
    cout << sizeof(arr) << endl;
    //4
    cout << sizeof(*arr) << endl;
    string a = "abcdefg";
    //8
    cout << sizeof(string) << endl;
    //8
    cout << sizeof(a) << endl;
}

void test02()
{
    int a[10] = {0};
    //对数组使用取地址符不会吧数组转换成首元素
    //需要用一个指向10个元素的数组的指针来接受
    int  (*b)[10] = &a;
}
int main()
{
    test02();
    return EXIT_SUCCESS;
}