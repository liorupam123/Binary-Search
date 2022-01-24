// https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1

// linear search
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	     int count=0;
    for (int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    return count;
	}
};

// bianry search
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int i = 0, j = n-1;
        int start = -1, end = -1;
        while(i <= j){
          
            int mid = i + (j-i)/2;
          
            // when mid element == target , target can present before / left as well --> first index, and after/right as well --> last index
            if(arr[mid] == x){ 
              
                // first index working with mid index, last index working with temp, temp is a variable to store first mid index...
               int temp = mid;
                
                //iterating left side of mid until target value is found
                while(mid > 0 && arr[mid-1] == x) 
                    mid--;   // 2 2  2 2(mid) 2
                start = mid; // first index..
              
                //iterating right side of mid until target value is found (here temp is equal to mid)
                while(temp < n-1 && arr[temp+1] == x) 
                    temp++;     // 2 2 2(mid) 2 2 2
                end = temp;     // last index..
                
                return (end-start+1);
            }
          
            // if target is less than or greater than, everything is normal like BS
            else if(arr[mid] > x)
                j = mid-1;
            else
                i = mid+1;
        }
        
       
        
        return 0;
	}
};
