class Solution:
    def uniqueOcurrences(self, arr: List[int]) -> bool:
        hashTable = {}  # an empty dictionary

        for i in arr:
            if i in hashTable:
                hashTable[i]++
            else:
                hashTable[i] = 1

        hashTableOccurences = {}

        for num, occurence in hashTable.items():
            if occurence in hashTableOccurences.keys():
                return False
            else:
                hashTableOccurences[occurence] = num

        return True
