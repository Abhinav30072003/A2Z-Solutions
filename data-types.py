class Solution:
    def dataTypeSize(self, str):
        if str == "Integer" :
            return 4
        elif str == "Float" :
            return 4
        elif str == "Character" :
            return 1
        elif str == "Long" :
            return 8
        else :
            return 8
        
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        str = input()
        ob = Solution()
        res = ob.dataTypeSize(str)
        print(res)