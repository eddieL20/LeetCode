class Solution:
    def maxArea(self, height: list[int]) -> int:
        mostWater, a, b = 0, 0, len(height) - 1
        
        while a < b:
            water = min(height[a], height[b]) * (b - a)
            mostWater = max(mostWater, water)

            if height[a] < height[b]:
                a += 1
            else:
                b -= 1
                
        return mostWater  
           
        