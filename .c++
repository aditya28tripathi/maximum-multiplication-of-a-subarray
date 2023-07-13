class Solution {
public:
    int maxProduct(vector<int>& nums) {

			 int ans = nums[0];
	    int ma = ans;
	    int mini = ans;
	    
	    for(int i =1;i<nums.size();i++){
	        if(nums[i]<0){
	            swap(ma,mini);
	        }
	        
	        ma = max(nums[i] , ma*nums[i]);
	        mini = min(nums[i] , mini*nums[i]);
	        ans = max(ans,ma);
	    }
	    
	    return ans;
        
    }
};
