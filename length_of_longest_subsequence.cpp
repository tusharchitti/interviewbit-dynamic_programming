int max1(int a,int b)
{
if(a>b)
{
    return a;
}
else
return b;
}
int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n=A.size();
    vector<int> max(n,1);
    vector<int > min(n,1);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j])
            {
                if(max[i]< (max[j]+1))
                max[i]=max[j]+1;
            }
        }
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[i])
            {
                if(min[j]<max1(max[i],min[i])+1)
                {
                    min[j]=max1(max[i],min[i])+1;
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
       // cout<<max[i]<<" "<<min[i]<<endl;
        if(ans<min[i])
        ans=min[i];
        if(ans<max[i])
        ans=max[i];
     
    }
    return ans;
    }
    

