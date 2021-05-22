/* Given an array a[ ] of size N. The task is to check if array is sorted or not. A sorted array can either be increasingly sorted or decreasingly sorted.
Also consider duplicate elements to be sorted.*/ 
class Solution{
  public:
    //Complete this function
    int isSorted(int arr[],int n)
    {
      
      //Your code here
      bool flagI=true;
        bool flagD=true;
        
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]>=arr[i])
            {
                continue;
            }
            else
            {
                flagI=false;
                break;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]<=arr[i])
            {
                continue;
            }
            else
            {
                flagD=false;
                break;
            }
        }
        
        return flagD||flagI;
        
       
       
    }
};
