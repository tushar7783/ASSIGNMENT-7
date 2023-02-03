class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int x=-1;
        int high=nums.size()-1;
        int mid=(low+high)/2;
        while(low<=high){
            if(nums[mid]==target){
                x=mid;
                break;
            }
            else if(nums[mid]>target){
            high=mid-1;

            mid=(high+low)/2;

            }
            else if(nums[mid]<target){
                low=mid+1;
                mid=(high+low)/2;
            }
        }
        return x;
    }
};
