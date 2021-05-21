//Left rotate or counter-clockwise direction by one place
void rotateArr(int arr[], int n){
        // code here
            int temp = arr[0];
            for(int i=1; i<n; i++){
                arr[i-1] = arr[i];
            }
            arr[n-1] = temp;
    }

//Given an unsorted array arr[] of size N, rotate it by D elements in the counter-clockwise direction. 
void rotateArr(int arr[], int d, int n){
        // code here
         //First reversing d elements from starting index.
        reverse(arr, arr+d);
        //Then reversing the last n-d elements.
        reverse(arr+d, arr+n);
        //Finally, reversing the whole array.
        reverse(arr, arr+n);
    }

 
