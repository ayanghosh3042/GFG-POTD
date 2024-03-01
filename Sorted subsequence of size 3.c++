class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        int min[N];
        min[0]=arr[0];
        for(int i=1;i<N;i++){
            min[i]=(min[i-1]>arr[i])?arr[i]:min[i-1];
        }
        int max[N];
        max[N-1]=arr[N-1];
        for(int i=N-2;i>=0;i--){
            max[i]=(max[i+1]<arr[i])?arr[i]:max[i+1];
        }
        
        vector<int> v;
        for(int i=1;i<N-1;i++){
            if((arr[i]>min[i])&&(arr[i]<max[i])){
                v.push_back(min[i]);
                v.push_back(arr[i]);
                v.push_back(max[i]);
                return v;
            }
        }
        return v;
    }
};
