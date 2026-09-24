class Solution {
public:
    static const int n = 100000;
    int spf[n+1];

    void buildspf(){
        for(int i=0;i<=n;i++)spf[i] = i;
        for(int i=2;(long long)i*i<=n;i++){
            if(spf[i] == i){
                for(int j=i*i;j<=n;j+=i){
                    if(spf[j] == j){
                        spf[j] = i;
                    }
                }
            }
        }
    }

    bool isprime(int x){
        return spf[x] == x;
    }

    int sumprimes(int x){
        int sum = 0;
        while(x>1){
            sum += spf[x];
            x /= spf[x];
        }
        return sum;
    }

    int smallestValue(int n) {
        buildspf();
        while(!isprime(n)){
            int x = sumprimes(n);
            if(x == n) break;
            n = x;
        }
        return n;
    }
};