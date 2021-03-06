// https://practice.geeksforgeeks.org/problems/square-root/1#

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        
		// Your code here
	   long low = 1;
	   long high = x;
	   while (low <= high) {
	       long mid = low + (high - low) / 2;
	       if (mid == x / mid) return mid;
	       else if (mid < x / mid) low = mid + 1;
	       else high = mid - 1;
	   }
	   return high;
	 }
    
};
