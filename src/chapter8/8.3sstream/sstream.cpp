/*  
 *  Description :  使用string流
 *  Created by 旋风冲锋龙卷风 on 2023/01/30 15:08
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

class Person
{
public:
    friend ostream& operator<<(ostream& os, const Person& p);
    string name;
    vector<string> phones;
    Person(const string &name, const vector<string> &phones) : name(name), phones(phones)
    {}

    Person()
    {}

    virtual ~Person()
    {

    }
};

ostream& operator<<(ostream& os, const Person& p)
{
    cout << p.name << " ";
    for(auto s : p.phones)
    {
        cout << s << " " ;
    }
    cout << endl;
    return os;
}

void test01()
{
    vector<Person> people;
    string line, word; //分别保存来自输出的一行单词
    ifstream ifs("phone.txt");
    if(!ifs)
    {
        cerr << "打开失败" << endl;
        exit(-1);
    }

    istringstream record;
    //getline从输入流读取整行数据到line中
    while(getline(ifs, line))
    {
        Person p;
        //将每行的内容绑定到istringstream对象
        record.str(line);
        record >> p.name;
        //当读取玩record中的内容后，循环结束
        //读取完string的内容后同样触发"文件结束"信号,下一个输入会失败
        while(record >> word)
        {
            p.phones.push_back(word);
        }
        record.clear();
        people.push_back(p);
    }

    for(auto& person : people)
    {
        cout << person << endl;
    }

    for(auto& person : people)
    {
        ostringstream formatted, badNums;
        for(const auto& nums : person.phones)
        {
            badNums << " " << nums;
        }
        cout << badNums.str() << endl;
    }
}

void test02()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);

    v.push_back(1);
    cout << sizeof(v) << endl;
}
int main()
{
    test02();
    return EXIT_SUCCESS;
}