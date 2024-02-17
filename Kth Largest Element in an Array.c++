class Solution {
public:
    void swap(int* a,int* b){
        int t=*a;
        *a=*b;
        *b=t;
    }
    void heapify(vector<int>& arr)
    {
        int leaf=(arr.size()+1)/2;
        int c,p;
        for(int i=arr.size()-leaf-1;i>=0;i--){
            p=i;
            c=2*i+1;
            while(c<arr.size()){
                if(c+1<arr.size() && arr[c+1]>arr[c])c++;
                if(arr[p]<arr[c]){
                    swap(&arr[c],&arr[p]);
                    p=c;
                    c=2*p+1;
                }
                else break;
            }
        }
        return;
    }
    int pop(vector<int>& arr){
        int x=arr[0];
        swap(&arr[0],&arr[arr.size()-1]);
        arr.pop_back();
        int p=0,c=1;
        while(c<arr.size()){
            if(c+1<arr.size() && arr[c+1]>arr[c])c++;
            if(arr[p]<arr[c]){
                swap(&arr[c],&arr[p]);
                p=c;
                c=2*p+1;
            }
            else break;
        }
        return x;
    }
    int findKthLargest(vector<int>& nums, int k) {
        heapify(nums);
        int ans;
        for(int i=0;i<k;i++){
            ans=pop(nums);
        }
        return ans;
    }
};
