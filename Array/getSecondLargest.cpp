class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // // Sorting
        // sort(arr.begin(),arr.end());
        // int maxEle = arr[arr.size()-1];
        // for(int i=arr.size()-2;i>=0;i--){
        //     if(maxEle > arr[i]) return arr[i];
        // }
        // return -1;
        // // Two Pass Approach
        // int maxEle = -1; // Largest ELement
        // for(int it:arr){
        //     if(it>maxEle)   maxEle = it;
        // }
        // int ans = -1;
        // for(int it:arr){
        //     if(it>ans && it<maxEle) ans=it;
        // }
        // return ans;
        // One Pass Approach
        int largest = -1 , ans = -1;
        for(int it:arr){
            if(it>largest){
                ans = largest;
                largest = it;
            }
            else if(it>ans && it<largest)   ans = it;
        }
        return ans;
    }
    }
};
