class Solution {
    public:
        int searchInsert(int arr[], int low, int high, int target)
         {
            if (low>high) 
            {
                return low; 
            }
            int mid=low+(high-low)/2;
    
            if (arr[mid] == target) 
            {
            return mid;
            }
            else if (arr[mid] > target)
            {
                return searchInsert(arr,low,mid-1,target); 
            }
            else return searchInsert(arr,mid+1,high,target);
        }
    };
    