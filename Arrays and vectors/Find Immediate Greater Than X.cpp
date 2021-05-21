/* Given an array arr[] of size N containing positive integers and an integer X. You need to find the value in the array which is greater than X and closest to it. 
( if no such value exists the answer should be -1)*/
int immediateGreater(int arr[], int n, int x){
         int diff = INT_MAX;
        int ans = -1;
        
        for(int i = 0;i<n;i++){
            if((arr[i] - x) > 0 && (arr[i] - x) < diff){
                ans = arr[i];
                diff = arr[i]-x;
            }
        }
    
        
        return ans;
        
    }
