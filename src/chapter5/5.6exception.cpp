/*  
 *  Description : 异常处理
 *  Created by 旋风冲锋龙卷风 on 2022/12/07 17:38
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

class Sales_item
{
public:
    string isbn;

    Sales_item(const string &isbn) : isbn(isbn)
    {}
};

int test01()
{
    Sales_item item1("a"), item2("b");
    //业务逻辑代码和用户交互的代码未分离
    if(item1.isbn == item2.isbn)
    {
        return 0;
    }
    else
    {
        cout << "isbn必须相同" << endl;
        return -1;
    }
}

int test02()
{
    Sales_item item1("a"), item2("b");
    //如果isbn不一样则抛出异常
    if(item1.isbn != item2.isbn)
    {
        throw runtime_error("isbn必须相同");
    }
    return 0;
}

int main()
{
    test02();
    return EXIT_SUCCESS;
}