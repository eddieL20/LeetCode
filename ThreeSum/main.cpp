#include <iostream>
#include <vector>
#include <algorithm>

#include "Solution.h"

int main(int argc, char const *argv[])
{
    std::vector<int> nums = { -1, 0, 1, 2, -1, -4};

    Solution solution;

    std::vector<std::vector<int>> results = solution.threeSum(nums);

    solution.printSolution(results);

    return 0;
}