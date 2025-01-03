class Solution {
    public int majorityElement(int[] nums) {
        int m = 0;
        int count = 0;
        for(int i = 0; i < nums.length; i++){
            if(count == 0){
                m = nums[i];
                count = 1;
            } else if(m == nums[i]){
                ++count;
            } else {
                --count;
            }
        }
        return m;
    }
}