/*  
 *  Description : 使用文件流对象
 *  Created by 旋风冲锋龙卷风 on 2023/01/30 14:00
 *  个人博客 : http://letsgofun.cn/
 */
//

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void test01()
{
    string ifile = "test.txt";
    ifstream in(ifile);//输入文件流打开并绑定 test.txt文件
    if(in.fail())
    //if(!in)也可以
    {
        cerr << "没打开" << endl;
    }
    ofstream out;//输出文件流没有关联到任何文件

    out.open(ifile + ".copy");
}

//练习8.4
void test02()
{
    string ifile = "./test.txt";
    ifstream in(ifile);

    if(!in)
    {
        cerr << "文件打开失败" << endl;
        exit(-1);
    }

    vector<string> v;
    string line;
    //按行输出
    // while(getline(in, line))

    //按空格输出
    while(in >> line)
    {
        v.push_back(line);
    }

    in.close();

    //打印
    for(auto s : v)
    {
        cout << s << " ";
    }
    cout << endl;
}

void test03()
{
    //打开就会清空test.txt中的内容
    ofstream on("test.txt", ios::app);
    on << "你好" << endl;
    on << "我是fileIO" << endl;
    on.close();
}
int main()
{
    test03();
    return EXIT_SUCCESS;
}