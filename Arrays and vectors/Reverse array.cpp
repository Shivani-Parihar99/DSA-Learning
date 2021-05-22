//Given an array arr of size n. You need to reverse the array.
void reverseArray(int arr[], int n) {
    int low=0, high=n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}
