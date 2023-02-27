/*  
 *  Description : 迭代器
 *  Created by 旋风冲锋龙卷风 on 2023/02/10 23:48
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <forward_list>
#include <sstream>
#include <map>
#include <list>
#include <deque>
#include <vector>

using namespace std;
void test01()
{
    deque<int> lst1{1, 3};
    auto i1 = lst1.begin(), i2 = lst1.end();

    *i1 = 2;
    auto ci1 = lst1.cbegin();
    while(i1 < i2)
    {

    }
}

void test02()
{
    list<string> lst;
    auto iter = lst.begin();
    string word;
    while(cin >> word)
    {
        iter = lst.insert(iter, word);
    }

}

void test03()
{
    vector<string> v;
    auto iter = v.begin();
    string word;
    for(int i =0; i < 3; ++i)
    {
        cin >>word;
        iter = v.insert(iter, word);
    }

    for(const auto& t : v)
    {
        cout << t << endl;
    }
}

void test04()
{
    vector<int> v;
    // cout << v.at(0) << endl; // out_of_range异常
    // cout << v[0] << endl;
    // cout << v.front() << endl;
    cout << *(v.begin()) << endl;
}

void test05()
{
    vector<int> q{ 1,2,3,4,5,6 };
    // 在这里想把大于2的元素都删除
    //但是输出1 2 4 6,
    for (auto it = q.begin(); it != q.end(); it++) {
        if (*it > 2)
            q.erase(it); // 这里就会发生迭代器失效
    }
    // 打印结果
    for (auto it = q.begin(); it != q.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

}

//测试错误的Map删除元素
void mapTest()
{
    map<int, string> dataMap;



    for (int i = 0; i < 100; i++)
    {
        string strValue = "Hello, World";

        stringstream ss;
        ss<<i;
        string tmpStrCount;
        ss>>tmpStrCount;
        strValue += tmpStrCount;
        dataMap.insert(make_pair(i, strValue));
    }

    cout<<"MAP元素内容为："<<endl;
    map<int, string>::iterator iter;
    for (iter = dataMap.begin(); iter != dataMap.end(); iter++)
    {
        int nKey = iter->first;
        string strValue = iter->second;
        cout<<strValue<<endl;
    }

    cout<<"内容开始删除："<<endl;
    //删除操作引发迭代器失效
    for (iter = dataMap.begin(); iter != dataMap.end(); )
    {
        int nKey = iter->first;
        string strValue = iter->second;

        if (nKey % 2 == 1)
        {
            iter = dataMap.erase(iter);    //在C++11之前, map的erase返回的是

        }
        else
        {
            iter++;
        }
        cout << strValue << endl;
    }
}


void insert(forward_list<string>& list, const string& s1, const string& s2)
{
    auto it = list.begin();
    for(; it != list.end(); )
    {
        if(*it == s1)
        {
            break;
        }
        else
        {
            it++;
        }
    }
    it = list.insert_after(it ,s2);

}

//9.3.4练习
void test06()
{
    forward_list<string> list{"abc", "bcd", "efg"};
    insert(list, "efg", "xxx");

    for(const auto& s : list)
    {
        cout << s << endl;
    }
}

void test07()
{
    vector<int> v(25, 100);
    auto it = v.end() - 5;
    cout << *it << endl;
    v.resize(10);
    //逻辑删除,迭代器失效,但是值可能暂时没有变化
    //其实理论上
    cout << *(it++) << endl; //输出100
    cout << v[13] << endl; //输出100
    cout << v.at(13) << endl; //out of range
}

void test08()
{
    vector<int> v;
    int capacity = v.capacity();
    for (int i = 0; i < 1000000000; ++i)
    {
        v.push_back(i);
        if(v.capacity() != capacity)
        {
            cout << "vector 扩容了" << (1.0 * v.capacity()) / capacity << "倍, 新的容量为 : " << v.capacity() << endl;
            capacity = v.capacity();
        }
    }
}

void test09()
{
    vector<int> v{1, 2, 3, 4 ,5};
    auto it = v.begin();
    while(it != v.end())
    {
        if(*it %2 )
        {
            it = v.insert(it, *it);
        }
        ++it;
    }

    for(int i : v)
    {
        cout << i << endl;
    }
}

int main()
{
    // test05();
    test08();
    return EXIT_SUCCESS;
}