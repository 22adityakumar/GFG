//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
   int isPrime(int N) {
    if (N <= 1) return 0;
    if (N == 2) return 1;
    if (N % 2 == 0) return 0;

    for (int i = 3; i * i <= N; i += 2) {
        if (N % i == 0) return 0;
    }

    return 1;
}
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends