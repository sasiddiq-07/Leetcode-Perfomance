class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set <int> s(nums.begin(),nums.end());
        vector <int> arr(s.begin(),s.end());
        int maxlength = 0;
        int length = 0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i] == arr[i+1]-1){
                length++;
                maxlength = max(length,maxlength);
            }
            else{
                length = 0;
            }
        }
        return maxlength+1;
    }
};