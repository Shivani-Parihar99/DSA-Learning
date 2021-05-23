/* You are given two numbers n and r. You need to find nCr.
nCr = (n!) / ((n-r)!*(r!))
In recursive way, we can write nCr as nCr = (n-1)C(r-1) + (n-1)Cr*/
int nCr(int n,int r)
{
    //Your code here
    if(n==r || r==0){
        return 1;
    } else{
        return nCr(n-1, r-1) + nCr(n-1, r);
    }
