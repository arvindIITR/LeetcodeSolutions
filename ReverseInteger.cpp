class Solution {
public:
    int reverse(int x) {

        if(!(x>=INT_MIN && x<=INT_MAX))
          return 0;
        long long res=0;
        int rem;
        int sign=1;
        if(x<0)
        {
            x=abs(x);
            sign=-1;
        }
        while(x){
            rem = x%10;
            res = res*10+rem;
            x=x/10;
        }
        if(!(res>=INT_MIN && res<=INT_MAX))
          return 0;
       return sign*res;
    }
};
