#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <limits>

using namespace std;

class Solution {
   public:
    int threeSumClosest(vector<int>& nums, int target);
};

int main() {
    vector<int> nums = {-1, 2, 1, -4-13,592,-501,770,-952,-675,322,-829,-246,657,608,485,
                        -112,967,-30,182,-969,559,-286,-64,24,365,-158,701,535,-429,-217,
                        28,948,-114,-536,-711,693,23,-958,-283,-700,-672,311,314,-712,-594,
                        -351,658,747,949,70,888,166,495,244,-380,-654,454,-281,-811,-168,
                        -839,-106,877,-216,523,-234,-8,289,-175,920,-237,-791,-976,-509,-4,
                        -3,298,-190,194,-328,265,150,210,285,-176,-646,-465,-97,-107,668,
                        892,612,-54,-272,-910,557,-212,-930,-198,38,-365,-729,-410,932,4,
                        -565,-329,-456,224,443,-529,-428,-294,191,229,112,-867,-163,-979,236,
                        -227,-388,-209,984,188,-549,970,951,-119,-146,801,-554,564,-769,334,
                        -819,-356,-724,-219,527,-405,-27,-759,722,-774,758,394,146,517,870,
                        -208,742,-782,336,-364,-558,-417,663,-914,536,293,-818,847,-322,408,
                        876,-823,827,167};
    int target = 7175;

    Solution solution;
    int result = solution.threeSumClosest(nums, target);

    cout << "Result: " << result << endl;

    return 0;
}

int Solution::threeSumClosest(vector<int>& nums, int target) {
    if (nums.size() == 1) return nums.at(1);

    sort(nums.begin(), nums.end());

    int result, 
        i = 0,
        n = nums.size(),
        diff = numeric_limits<int>::max();

    for (; i < n; i++) {
        if ( i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1,
            right = n - 1,
            sum = 0;

        while (left < right){
            sum = nums[i] + nums[left] + nums[right];
            if ( sum == target ) {
                return sum;
            } else if (sum < target){
                if (abs(target - sum) < diff){
                    diff = abs(target - sum);
                    result = sum;
                }
                left++;
            } else {
                if (abs(target - sum) < diff){
                    diff = abs(target - sum);
                    result = sum;
                }
                right--;
            }
        }
    }
        return result;
}
