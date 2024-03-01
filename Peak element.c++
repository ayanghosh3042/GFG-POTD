class Solution
{
    public:
    int check(int arr[],int n,int i)
    {
        if(i==0){
            if(arr[0]>=arr[1])return 1;
            else return 0;
        }
        else if(i==n-1){
            if(arr[i]>=arr[i-1])return 1;
            else return 0;
        }
        else if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])return 1;
        else return 0;
    }
    int peakElement(int arr[], int n)
    {
        if(n==1)return 0;
        
        int l=0,h=n-1;
        int mid;
        while(l<=h){
            mid=(l+h)/2;
            
            if(check(arr,n,mid))return mid;
            else if(mid!=0 && arr[mid]>=arr[mid-1])l=mid+1;
            else if(mid==0)l=mid+1;
            else h=mid-1;
        }
        return 0;
    }
};
