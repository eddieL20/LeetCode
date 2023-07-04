#include "Solution.h"
#include <regex>
#include <string>

bool Solution::isMatch(std::string s, std::string p){
    if (p.empty()) {
            return s.empty();
        }

        bool firstMatch = (!s.empty() && (s[0] == p[0] || p[0] == '.'));
 
        if (p.length() >= 2 && p[1] == '*') {
            return (isMatch(s, p.substr(2)) || (firstMatch && isMatch(s.substr(1), p)));
        } else {
            return (firstMatch && isMatch(s.substr(1), p.substr(1)));
        }
}