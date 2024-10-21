class Solution:
    def findEvenOccurrences(self, arr):
        # Initialize a dictionary to count occurrences
        mp = {}
        arr1 = []
        for i in range(len(arr)):
            if arr[i] in mp:
                mp[arr[i]] += 1
            else:
                mp[arr[i]] = 1
        for x in mp:
            if mp[x] % 2 == 0:
                arr1.append(x)
        return arr1 if arr1 else [-1]

#{ 
 # Driver Code Starts
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        arr = list(map(int, input().split()))
        solution = Solution()
        print(" ".join(map(str, solution.findEvenOccurrences(arr))))

# } Driver Code Ends