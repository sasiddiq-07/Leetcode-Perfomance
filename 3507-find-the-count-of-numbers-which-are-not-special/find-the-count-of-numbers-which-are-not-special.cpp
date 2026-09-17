class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int limit = sqrt(r);
        vector <bool> isprime(limit+1,true);
        isprime[0]=isprime[1] = false;

        for(int i=2;i*i<=limit;i++){
            if(isprime[i]){
                for(int j=i*i;j<=limit;j+=i){
                    isprime[j] = false;
                }
            }
        }

        int special = 0;

        for(int i=2;i*i<=r;i++){
            if(isprime[i] && i*i>=l){
                special += 1;
            }
        }

        return (r-l+1)-special;
    }
};