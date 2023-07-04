#include "Solution.h"
#include <vector>
#include <cmath>
#include <algorithm>

double Solution::findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2){
    double result; 
    int totalSize;
    std::vector<int> finalVec(nums1.begin(), nums1.end());
    finalVec.insert(finalVec.end(), nums2.begin(), nums2.end());

    std::sort(finalVec.begin(), finalVec.end());

    totalSize = finalVec.size();

    if ( totalSize % 2 == 0){
        int first = (totalSize / 2) - 1;
        int second = first + 1;

        result = ( finalVec.at(first) + finalVec.at(second) ) / 2.0;
    } else {
        int midIndex = ( finalVec.size() / 2 ); 
        result = static_cast<double>(finalVec.at(midIndex));
    }
    return result;
}
