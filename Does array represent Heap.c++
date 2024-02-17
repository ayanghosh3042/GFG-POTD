// Given an array arr of size n, the task is to check if the given array can be a level order representation of a Max Heap.
class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        for(int i=n-1;i>0;i--){
            if(arr[i]>arr[(i-1)/2])return false;
        }
        return true;
    }
};
