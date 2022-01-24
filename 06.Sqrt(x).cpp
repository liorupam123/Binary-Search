// https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        long long start = 0, end = x, ans = 0;
        while(start<=end){
            long long mid = start + (end-start)/2;
          
            // mid*mid == x
            if(mid*mid <=x){
                // mid may be the answer but may be we get bigger than that
                ans = mid;
                // for 8, 1 may be the ans but 2 is the perfect ans
                start = mid +1;
            }
            else{
                //3 cant be the answer for 8, so mid-1
                end = mid-1;
            }
        }
        return ans;
    }
};
