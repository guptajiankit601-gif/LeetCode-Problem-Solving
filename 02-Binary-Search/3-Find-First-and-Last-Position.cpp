int firstOcc(vector<int>& nums,int size,int target){
    int s = 0, e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(nums[mid] == target){
            ans = mid;
            e = mid - 1;
        }else if(target > nums[mid]){
            s = mid + 1;
        }else{
            e  = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOcc(vector<int>& nums,int size,int target){
    int s = 0, e = size - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(nums[mid] == target){
            ans = mid;
            s = mid + 1;
        }else if(target > nums[mid]){
            s = mid + 1;
        }else{
            e  = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOcc(nums,nums.size(),target);
        int last = lastOcc(nums,nums.size(),target);

        return{first,last};
    }
};
