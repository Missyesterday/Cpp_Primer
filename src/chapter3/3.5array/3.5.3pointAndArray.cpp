/*  
 *  Description : 指针与数组
 *  Created by 旋风冲锋龙卷风 on 2022/11/29 17:59
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <iterator>

using namespace std;

void test01()
{
    string nums[] = {"one", "two", "three"};
    string *p = &nums[1]; //指向nums的第2个元素
    string *p2 = nums; //指向nums的第一个元素, 等价于 string *p2 = &nums[0]
}

//auto与数组
void test02()
{
    int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto ia2(ia); //构造一个auto变量, 等价于auto ia2(&ia[0])
    //ia2 = 42; // 错误,ia2是一个int* ,不能赋值为int

    decltype(ia) ia3 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};// ia3是一个数组
    int *p;
    //ia3 = p;//错误,不能使用整型指针给数组赋值

}

//数组指针也是迭代器
void test03()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = arr; //p指向arr的第一个元素
    ++p; //p指向arr的第二个元素
    int *e = &arr[10];//获取指向arr尾元素的后一个元素

    int *e1 = &arr[11];//甚至还能向后走, 编译器不会检查这个错误
    //输出arr的元素
    for (int *b = arr; b != e; ++b)
    {
        cout << *b << endl;
    }
}

void test04()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int *beg = begin(ia);
    int *last = end(ia);//尾后指针

}

void test05()
{
    //注意size_t是一个标准库类型, 它是机器相关的 所以单独定义了, 还有很多这种类型
    constexpr size_t sz = 5;
    int arr[sz] = {1, 2, 3, 4, 5};
    int *p = arr; //等价于int*p = &arr[0]
    int *p2 = p + 4; //p2指向arr[4]

    int *ip = arr + sz; //ip是尾后指针, 不要解引用, 这是正确的
    int *ip2 = arr + 10; //arr只有五个元素, ip2指向的是arr+10 * sizeof(int)的地址,但是这个地址不属于数组了
    //上面的错误编译器是不会发现的,解引用会输出一个不确定的值
    cout << *ip2 << endl;


    //指针的减法
    auto n = end(arr) - begin(arr);
    cout << n << endl; //5
    cout << ip2 - arr << endl; //输出10 ,已经超过数组长度了,证明编译器不会检查

}
//不要比较指向不相关对象的指针
void test06()
{
    int i = 0, sz = 42;
    int *p = &i, *e = &sz;
    if(p < e)
    {
        cout << "不要这样比较" << endl;
    }
    else
    {
        cout << "不要比较" << endl;
    }
}

void test07()
{
    int ia[] = {0, 2, 4, 6, 8};
    cout << *(ia + 4) << endl; //正确, 也就是输出ia[4]

    int n = *ia + 4; //正确, 但是是arr[0] + 4

    //下标运算会转换成指针运算
    int i = ia[2]; // 本质是: ia转换成首元素的指针, ia[2]则转换为 *(ia + 2)

    int *p = ia;
    i = *(p + 2); //等价于 i = ia[2]

    //甚至可以有负数
    p = &ia[2];

    cout << p[1] << endl; //转换为 *(p + 1)也就是ia[3]
    cout << p[-2] << endl; //转换为 *(p - 2) 也就是ia[0]
}

int main()
{
    test07();
    return EXIT_SUCCESS;
}