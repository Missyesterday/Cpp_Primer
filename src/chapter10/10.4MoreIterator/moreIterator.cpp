/*  
 *  Description : 再探迭代器
 *  Created by 旋风冲锋龙卷风 on 2023/02/20 11:18
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <vector>

using namespace std;

void test01()
{
    ostream_iterator<int> out_iter(cout, " ");


    vector<int> v{1, 2, 3, 4, 5, 6, 7};

    copy(v.begin(), v.end(), out_iter);
    cout << endl;
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}