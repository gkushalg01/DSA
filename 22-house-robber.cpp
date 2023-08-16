// DSA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <chrono>
#include <vector>
#include <unordered_map>
#define max(x, y) x>y?x:y

int rob(std::vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    int t1 = nums[0];
    if (n == 1) return t1;
    int t2 = max(t1, nums[1]);
    if (n == 2) return t2;
    int mx;
    for (int i = 2; i < n; ++i) {
        mx = max(nums[i] + t1, t2);
        t1 = t2;
        t2 = mx;
    }

    return mx;
}

int main()
{
    auto s = std::chrono::high_resolution_clock::now();
    std::vector<int> nums{1, 2, 3, 1};
    std::cout << rob(nums);

    auto e = std::chrono::high_resolution_clock::now();
    auto t = std::chrono::duration < double, std::milli>(e - s).count();
    std::cout << "Time = " << t << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
