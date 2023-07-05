#include <iostream>
#include <vector>
#include <string>

class Solution {
   protected:
    void backtrack(std::vector<std::string>& combos, std::string& digits,
                   std::vector<std::string> letterMapping, std::string currentStr, int index);

   public:
    std::vector<std::string> letterCombinations(std::string digits);
};

int main() {
    Solution solution;
    std::string digits = std::string("23");
    std::vector<std::string> combos = solution.letterCombinations(digits);

    for (const std::string& combo: combos){
        std::cout << combo << " " << std::endl;
    }

    std::cout << std::endl;

    return 0;
}

std::vector<std::string> Solution::letterCombinations(std::string digits) {
    int totalCombos = 1;
    std::vector<std::string> solution;
    std::vector<std::string> selectedLetters;
    std::vector<std::string> letterMapping = {"abc", "def",     //    2, 3,
                                       "ghi", "jkl", "mno",     // 4, 5, 6,
                                      "pqrs", "tuv", "wxyz"};  // 7, 8, 9

    backtrack(solution, digits, letterMapping, "", 0);

    return solution; 
}

void Solution::backtrack(std::vector<std::string>& solution, std::string& digits, std::vector<std::string> letterMapping, std::string currentStr, int index){
    if (index == digits.length()){
        solution.push_back(currentStr);
        return;
    }

    int digit = digits[index] - '0';
    std::string letters = letterMapping.at(digit);

    for (char ch: letters){
        backtrack(solution, digits, letterMapping, currentStr + ch, index + 1);
    }
}
