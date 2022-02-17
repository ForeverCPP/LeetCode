// 53. 最大子序和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

int maxSubArray(vector<int>& nums) {
	int maxSub = 0;
	for (size_t i = 0; i < nums.size(); i++)
	{
		int maxSeq = 0;
		for (size_t j = i; j < nums.size(); j++)
		{
			maxSeq += nums[j];
			if (j == 0)
			{
				maxSub = maxSeq;
			}
			else if (maxSeq > maxSub)
			{
				maxSub = maxSeq;
			}
		}
	}
	return maxSub;
}
int maxSubArray2(vector<int>& nums, int Left, int Right);
//int maxSubArray2(vector<int>& nums) {
//	int Left = 0;
//	int Right = nums.size();
//	if (Left == Right)
//	{
//		if (nums[Left] > 0)
//		{
//			return nums[Left];
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	int Center = (Left + Right) / 2;
//	int leftsub,rightsub, midsub, leftborder, leftborderMax, rightborder, rightborderMax;
//	leftsub = 0;
//	rightsub = 0;
//	midsub = 0;
//	leftborder = 0;
//	leftborderMax = 0;
//	rightborder = 0;
//	rightborderMax = 0;
//	leftsub = maxSubArray2(nums, Left, Center);
//	rightsub = maxSubArray2(nums, Center + 1, Right);
//	for (size_t i = Center; i >= Left; i--)
//	{
//		leftborder += nums[i];
//		if (leftborder > leftborderMax)
//		{
//			leftborderMax = leftborder;
//		}
//	}
//	for (size_t i = Center + 1; i < Right; i++)
//	{
//		rightborder += nums[i];
//		if (rightborder > rightborderMax)
//		{
//			rightborderMax = rightborder;
//		}
//	}
//	int max3 = (leftsub, rightsub, leftborderMax + rightborderMax);
//	return max3;
//}
int maxSubArray2(vector<int>& nums,int Left,int Right) 
{	
	int leftsub ,rightsub, midsub,leftborder,leftborderMax, rightborder, rightborderMax;
	if (Left == Right)
	{
		return 0;
		//if (nums.size()==Left)
		//{
		//	return 0;
		//}
		//if (nums[Left]>0)
		//{
		//	return nums[Left];
		//}
		//else
		//{
		//	return 0;
		//}
	}
	int Center = (Left + Right) / 2;
	leftsub = INT32_MIN;
	rightsub = INT32_MIN;
	midsub = INT32_MIN;
	leftborderMax = INT32_MIN;
	rightborderMax = INT32_MIN;

	leftborder = 0;
	rightborder = 0;

	leftsub = maxSubArray2(nums, Left, Center);
	rightsub = maxSubArray2(nums, Center + 1, Right);
	for (int i = Center; i >= Left; i--)
	{
		leftborder += nums[i];
		if (leftborder > leftborderMax)
		{
			leftborderMax = leftborder;
		}
	}
	for (int i = Center+1; i < Right; i++)
	{
		rightborder += nums[i];
		if (rightborder > rightborderMax)
		{
			rightborderMax = rightborder;
		}
	}
	int max3 = (leftsub, rightsub, (leftborderMax==INT32_MIN?0:leftborderMax) + (rightborderMax == INT32_MIN ? 0 : rightborderMax));
	return max3;
}
int max3(int m1, int m2, int m3)
{
	int max = 0;
	if (m1>m2)
	{
		max = m1;
	}
	else
	{
		max = m2;
	}
	if (max>m3)
	{
		return max;
	}
	else
	{
		return m3;
	}
}
int main()
{	
	//vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	vector<int> nums = { -1,-2 };
	int k  = maxSubArray2(nums,0,2);
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
