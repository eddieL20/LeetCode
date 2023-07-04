class Solution:
    def myAtoi(self, s:str) -> int:
        minBound, maxBound = -2**31, 2**31 - 1
        result, startIdx, sign = 0, 0, 1
        cleanStr = s.lstrip()
        
        if cleanStr == "":
            return 0
        if cleanStr[startIdx] in ("-", "+"):
            if cleanStr[startIdx] == "-":
                sign = -1
                startIdx += 1
            else:
                startIdx += 1
        
        for i in range(startIdx, len(cleanStr)):
            char = cleanStr[i]
            
            if not char.isdigit():
                break
            else:
                result = (result * 10) + int(char)
            
        if result * sign > maxBound:
            return maxBound
        elif result * sign <= minBound:
            return minBound
        
        return result * sign