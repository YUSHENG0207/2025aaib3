# LeetCode �ǲ߭p�e week01-2 �Ĥ@��
# 28.Find the Index of the First Occurrence in a String
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)
        N = len(needle)
        for i in range(H-N+1):
            if haystack[i:i+N] == needle: #�Y��ӬۦP
                return i #���\����m
        return -1 #�S�����\
