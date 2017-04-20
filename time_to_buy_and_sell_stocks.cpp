int Solution::maxProfit(const vector<int> &A) {
    
    int n=A.size();
    if(n==0)
    return 0;
    vector<int> v(n,0);
    int max=0;
    //cout<<"hurr";
    for(int i=1;i<n;i++)
    {
        //cout<<"ho"<<endl;
        if(v[i-1]+A[i]-A[i-1]>v[i])
        {
            v[i]=v[i-1]+A[i]-A[i-1];
            if(max<v[i])
            max=v[i];
        }
    }
    return max;
}

