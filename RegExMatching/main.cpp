#include <iostream>
#include "Solution.h"


int main(){
    std::string s = "aaaaaaaaaaaaaaaaaaa";
    std::string p = "a*a*a*a*a*a*a*a*a*b";

    Solution solution;

    if (solution.isMatch(s, p)){
        std::cout << "True" << std::endl;        
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}