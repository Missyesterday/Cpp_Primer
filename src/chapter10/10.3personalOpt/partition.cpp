/*  
 *  Description : 
 *  Created by 旋风冲锋龙卷风 on 2023/02/20 00:47
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//练习10.13
bool bigger5(const string& s)
{
    return s.size() >= 5;
}
void test01()
{
    vector<string> svect = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
    cout << "vector中原始元素内容为：";
    for (auto a : svect)
        cout << a << " ";
    cout << endl;

    auto end = partition(svect.begin(),  svect.end(), bigger5);
    for(auto it = svect.begin(); it != end; ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

}

int main()
{
    test01();
    return EXIT_SUCCESS;
}