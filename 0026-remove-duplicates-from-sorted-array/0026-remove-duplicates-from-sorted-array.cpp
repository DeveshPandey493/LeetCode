class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int arr[nums.size()];
    int idk = 0;

    for(int i = 0; i < nums.size(); i++){
        if(i == nums.size()-1 || nums[i] != nums[i+1]){
            arr[idk++] = nums[i]; 
        }
    }

    for(int i = 0; i < idk; i++){
        nums[i] = arr[i];
    }

    return idk;
    }
};