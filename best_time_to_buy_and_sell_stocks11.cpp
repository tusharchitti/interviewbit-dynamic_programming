int Solution::maxProfit(const vector<int> &A) {
    
    int n=A.size();
    if(n==0)
    return 0;
    vector<int> v(n,0);
    int max=0;
    for(int i=1;i<n;i++)
    {
        //cout<<"ho"<<endl;
        if(v[i-1]+A[i]-A[i-1]>v[i-1])
        {
            v[i]=v[i-1]+A[i]-A[i-1];
        }
    }
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
     //   cout<<v[i]<<" ";
        if(v[i+1]==0)
        sum=sum+v[i];
    }
   // cout<<v[n-1]<<endl;
    if(v[n-1]!=0)
    sum=sum+v[n-1];
    return sum;
}

