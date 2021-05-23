// You are given a two numbers a and b. Find their GCD using recursion.
class Solution{
    public:
        int GCD(int a,int b)
    {
        //Your code here
        if(a==b){
            return a;
        }
        if(a>b){
             return GCD(a-b, b);
        } else{
            return GCD(a, b-a);
        }
    }
};
