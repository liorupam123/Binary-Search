// https://practice.geeksforgeeks.org/problems/rotation4723/1#

// rotation count == minimum element's index in the array
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int low = 0;
        int high = n - 1;
        int mid;
        while(low<=high){
            mid =  low + (high-low)/2;
            if(arr[mid]<arr[high]){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return mid;
	}

};
