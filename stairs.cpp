int stairs(int A)
{
    if(A==1)
    return 1;
    if(A==2)
    return 2;
    return stairs(A-1)+stairs(A-2);
}
int Solution::climbStairs(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return stairs(A);
}

