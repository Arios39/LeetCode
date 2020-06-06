class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
   int temp=0;
        int size = nums.size();
        vector<int> returnval;
 for(int it = 0; it < size; it++){
     for(int j =it+1; j <size; j++){
         temp = nums[it]+nums[j];
         if(temp ==target){
             returnval.push_back(it);
             returnval.push_back(j);
             break;
         }
     }
         if(temp ==target){
             break;
         }
 }
    
    return returnval;
        
        
        
    }
};
