#User function Template for python3

class Solution:
    def sum_of_middle_elements(self, arr1, arr2):
        l=0
        j=0
        h=len(arr1)+len(arr2)
        result=[];
        while l<len(arr1) and j<len(arr2):
            if arr1[l]<=arr2[j]:
                result.append(arr1[l]);
                l+=1
            else:
                result.append(arr2[j]);
                j+=1
        result.extend(arr1[l:])
        result.extend(arr2[j:])
        mid=len(result)//2;
        if len(result) %2 == 0:
            sum=result[mid-1]+result[mid]
        else:
            sum=result[mid]
        return sum
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys

input = sys.stdin.read


def main():
    input_lines = input().strip().split("\n")
    t = int(input_lines[0])

    index = 1
    results = []
    while t > 0:
        arr = list(map(int, input_lines[index].strip().split()))
        brr = list(map(int, input_lines[index + 1].strip().split()))
        index += 2

        solution = Solution()
        res = solution.sum_of_middle_elements(arr, brr)
        results.append(res)

        t -= 1

    for result in results:
        print(result)


if __name__ == "__main__":
    main()

# } Driver Code Ends