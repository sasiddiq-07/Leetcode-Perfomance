class Solution {
public:
    int sumofdigits(int n){
        int s = 0;
        while(n>0){
            int r = n%10;
            s += r;
            n = n/10;
        }
        return s;
    }

    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(sumofdigits(nums[i]) == i){
                return i;
                break;
            }
        }
        return -1;
    }
};