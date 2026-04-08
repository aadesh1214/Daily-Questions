class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        seen = {}
        if len(s) != len(t):
            return False
        for i in s:
            seen[i]=seen.get(i,0)+1
        for i in t:
            seen[i]=seen.get(i,0)-1
        for value in seen.values():
            if value != 0:
                return False
        return True
            
        
