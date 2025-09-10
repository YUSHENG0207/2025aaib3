# LeetCode 學習計畫 week01-2 第一版
# 28.Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)
        N = len(needle)
        for i in range(H-N+1):
            if haystack[i:i+N] == needle: #若兩個相同
                return i #成功找到位置
        return -1 #沒有成功
