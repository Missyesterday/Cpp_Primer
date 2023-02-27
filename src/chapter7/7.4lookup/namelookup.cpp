/*  
 *  Description : 类的作用域
 *  Created by 旋风冲锋龙卷风 on 2023/01/06 15:37
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>

using namespace std;

typedef double Money;
string bal;
class Account
{

public:
    Money balance() //使用外层作用域的Money
    {
        return bal;
    }

private:
    typedef double Money; //错误, 不能重新定义Money
    Money bal;
};

int main()
{

    return EXIT_SUCCESS;
}