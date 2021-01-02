// 1572. 矩阵对角线元素的和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

using namespace std;
int diagonalSum(vector<vector<int>>& mat) {
	vector<int> total;
	for (size_t i = 0; i < mat.size(); i++)
	{
		//第一行  第一个 和最后一个
		mat[i][i], mat[i][mat[i].size() - 1];
		if ((&mat[i][i])!= (&mat[i][mat[i].size() - 1-i]))
		{
			total.push_back(mat[i][i]);
			total.push_back(mat[i][mat[i].size() - 1-i]);
		}
		else
		{
			total.push_back(mat[i][i]);
		}
	}
	int sum = 0;
	for (size_t i = 0; i < total.size(); i++)
	{
		sum += total[i];
	}
	return sum;
}
int main()
{
	vector<vector<int>> parm{ { 1, 2, 3},{4, 5, 6},{7, 8, 9} };
	diagonalSum(parm);
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
