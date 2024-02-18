//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    
    int kLevelSum(int K, string S) {
        stack<char> st;
        int sum=0,num;
        for(int i=0;i<S.size();i++){
            if(S[i]=='(')st.push('(');
            else if(S[i]==')')st.pop();
            else{
                num=0;
                while(S[i]!='('){
                    num=num*10+(S[i]-'0');
                    i++;
                }
                i--;
                if(st.size()-1==K){
                    sum+=num;
                }
            }
        }   
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>K;
        cin>>S;

        Solution ob;
        cout << ob.kLevelSum(K,S) << endl;
    }
    return 0;
}
// } Driver Code Ends
