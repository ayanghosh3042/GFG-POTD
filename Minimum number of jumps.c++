class Solution{
  public:
    int minJumps(int arr[], int n){
        if(n<=1)return 0;
        else if(arr[0]==0)return -1;
        
        int maxrange=arr[0];
        int step=arr[0];
        int jump=1;
        
        for(int i=1;i<n;i++){
            if(i==n-1)return jump;
            maxrange=max(maxrange,i+arr[i]);
            step--;
            if(step==0){
                jump++;
                if(maxrange-i<=0)return -1;
                step=maxrange-i;
            }
        }
        return jump;
    }
};
