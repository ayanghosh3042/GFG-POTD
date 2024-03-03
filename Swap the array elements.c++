class Solution{
  public:
    void swap(int &a,int &b){
        int t=a;
        a=b;
        b=t;
    }
    void swapElements(int arr[], int n)
    {
        for(int i=0;i<n-2;i++){
            swap(arr[i],arr[i+2]);
        }
    }
};
