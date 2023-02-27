/*  
 *  Description : 
 *  Created by 旋风冲锋龙卷风 on 2023/01/29 14:06
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <fstream>
using namespace std;

class Person
{
    friend ostream& operator<<(ostream&, Person);
    int age;
    string name;
public:


    Person(int age, const string &name) : age(age), name(name)
    {}

    Person()
    {}

    virtual ~Person()
    {

    }
};

ostream& operator<<(ostream& os, Person p)
{
    os << p.age << p.name << endl;
    return os;
}
void test01()
{
    cerr << "cerr test" << endl;
}

void test02()
{
    Person p(10, "jack");
    cout << p << p << endl;
}

void test03()
{
    int val;
    while(cin >> val)
    {

    }
}

void test04()
{
    auto old_state = cin.rdstate(); //记录cin当前状态
    cin.clear();//使cin有效

    int x;
    cin >> x;
    //...操作cin
    cin.setstate(old_state); //将cin置为原来状态

    //复位failbit和badbit,其他不变
    cin.clear(cin.rdstate() & ~ios::failbit & ~ios::badbit);
}

//练习1
istream& func(istream& is)
{
    int v;

    //C++逗号运算符, 返回的结果是最后一个表达式的值,所以下面的代码不是is出现错误停止,而是遇到eof停止
    while (is >> v, !is.eof())
    {
        if(is.bad())
        {
            throw runtime_error("IO流错误");
        }
        if(is.fail())
        {
            cerr << "数据错误" << endl;
            is.clear();
            is.ignore(100, '\n');
            continue;
        }
        cout << v << endl;
    }
    is.clear();
    return is;
}

void test05()
{
    func(cin);
}

void test06()
{
    cin.tie(&cout); //仅仅只是展示,它们本来就关联在一起

    ostream* old_tie = cin.tie(nullptr);//oldtie指向的是cout

    cin.tie(&cerr);// 关联
    cin.tie(old_tie)//复原
}
int main()
{
    test05();
    return EXIT_SUCCESS;
}