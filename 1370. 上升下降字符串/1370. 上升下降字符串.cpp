// 1370. 上升下降字符串.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

string dest = "";
bool zhengxu(string& source)
{
	for (size_t i = 97; i <= 122; i++)
	{
		int pos = source.find(i);
		if (pos!=string::npos)
		{
			dest.push_back(i);
			source.erase(pos,1);
		}
		if (source.empty())
		{
			return false;
		}
	}
	return true;
}
bool daoxu(string& source)
{
	for (size_t i = 122; i >=97; i--)
	{
		int pos = source.find(i);
		if (pos != string::npos)
		{
			dest.push_back(i);
			source.erase(pos,1);
		}
		if (source.empty())
		{
			return false;
		}
	}
	return true;
}
string  sortString(string& s) {
	dest.clear();
	while (true)
	{
		bool res = zhengxu(s);
		if (!res)
		{
			return dest;
		}
		bool res2 = daoxu(s);
		if (!res2)
		{
			return dest;
		}
	}
}
int main()
{
	string s("aaaabbbbcccc");
	string res = sortString(s);
    std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
