/*  
 *  Description : 编写Person类,并不断扩充
 *  Created by 旋风冲锋龙卷风 on 2022/12/30 19:42
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
using namespace std;

class Person
{
private:
    string address;
    string name;
    int age;
public:
    Person(const string &address, const string &name, int age) : address(address), name(name), age(age)
    {}

    Person()
    {}

    virtual ~Person()
    {

    }

    void setAddress(const string &address)
    {
        Person::address = address;
    }

    void setName(const string &name)
    {
        Person::name = name;
    }

    void setAge(int age)
    {
        Person::age = age;
    }

    //对于const的成员函数, 如果返回*this, 返回类型必须是const Person类型
    const Person display() const
    {
        return *this;
    }

    //基于const的重载, 这个const是修饰this的const
    Person& display()
    {
        return *this;
    }
};

class Account
{
public:
    static double rate()
    {
        return 30.8;
    }
    static void rete(double);

private:
    //字面值常量类型的constexpr必须给定初始值,进行类内初始化
    static constexpr int period = 30;
    //非常量的静态值不能类内初始化
    static int s_a;
    //const的常量可以不初始化, 也可以初始化
    static const int s_b;
    static const int s_c = 30;
    double a[period];
};

//类外都不用加static关键字
//如果再类的内部提供了初始值, 则成员在类外的定义不能再指定一个初始值了
constexpr  int Account::period;
//类内未初始化的常量可以在类外初始化
int Account::s_a = 30;
const int Account::s_b = 3;
const int Account::s_c;


int main()
{
    cerr<< " " << endl;
    Person p;
    //不能这样调用, 常量对象不能调用非常量成员函数
    //p.display()返回常量引用
    //但是如果调用的是非常量版本的成员就不会报错
    p.display().setAddress("h");
    return EXIT_SUCCESS;
}