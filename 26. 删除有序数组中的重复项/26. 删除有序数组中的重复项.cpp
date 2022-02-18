// 26. 删除有序数组中的重复项.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
#include<set>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    if (nums.empty())
    {
        return nums.size();
    }
    for (auto it = nums.begin(); it < nums.end()-1;it++ ) 
    {
        for (auto it_c  =   it+1;it_c!=nums.end();)
        {
            if (*it_c==*it)
            {
                it_c    =   nums.erase(it_c);
            }
            else
            {
                break;
            }
        }
    }
    return nums.size();
}
int removeDuplicatesAdv(vector<int>& nums) {
    if (nums.empty())
    {
        return nums.size();
    }
    set<int> nums_set;
    for (size_t i = 0; i < nums.size(); i++)
    {
        nums_set.insert(nums[i]);
    }
    nums.clear();
    for (auto& e : nums_set)
    {
        nums.push_back(e);
    }
    return nums.size();
}
int main()
{
    vector<int>    nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
    //vector<int>    nums = {1,1 };
    removeDuplicatesAdv(nums);
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
