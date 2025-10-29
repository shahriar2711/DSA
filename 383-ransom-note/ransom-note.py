class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        hash = {}
        for ch in magazine:
            hash[ch] = hash.get(ch , 0) + 1
        
        hash1 = {}
        for ch in ransomNote:
            hash1[ch] = hash1.get(ch , 0) + 1

        if hash1.keys() <= hash.keys():
            common_keys = hash1.keys() & hash.keys()
            if common_keys and all(hash1[k] <= hash[k] for k in common_keys):
                return True
            else:
                return False
        else:
            return False
        