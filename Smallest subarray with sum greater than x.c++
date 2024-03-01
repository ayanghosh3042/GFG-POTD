//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int i=0;
        int sum=0;
        int ans=n+1;
        for(int j=0;j<n || sum>x;){
            if(sum<=x)sum+=arr[j++];
            if(sum>x){
                ans=min(ans,j-i);
                sum-=arr[i];
                i++;
            }
        }
        return (ans==n+1)?0:ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends
