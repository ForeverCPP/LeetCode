﻿// 1588. 所有奇数长度子数组的和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

using namespace std;
int sumOddLengthSubarrays(vector<int>& arr) {
	vector<int> all;
	for (size_t i = 0; i < arr.size(); i++)
	{
		vector<int> tmp;
		for (size_t j = i; j <arr.size(); j+=2)
		{
			for (size_t k = i; k <= j; k++)
			{
				tmp.push_back(arr[k]);
			}			
		}
		int sub = 0;
		for (size_t k = 0; k < tmp.size(); k++)
		{
			sub += tmp[k];
		}
		all.push_back(sub);
	}
	int finalres = 0;
	for (size_t i = 0; i < all.size(); i++)
	{
		finalres += all[i];
	}
	return finalres;
}
int main()
{
	vector<int> parm{ 1,4,2,5,3 };
	sumOddLengthSubarrays(parm);
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
