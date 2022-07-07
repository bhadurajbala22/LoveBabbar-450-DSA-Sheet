class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int n=nums.size();
        int sum=0;
        int left=0;
        int curr=0;
        
        for(int i:nums)
            sum+=i;
        
        for(int i=0;i<nums.size();i++)
        {
            left+=curr;
            curr=nums[i];
            sum-=curr;
            
            if(left==sum)
                return i;
        }
        return -1;
    }
};