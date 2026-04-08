class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        seendict = defaultdict(list)

        for char in strs:
            name = "".join(sorted(char))
            seendict[name].append(char)
            
        return list(seendict.values())

        
