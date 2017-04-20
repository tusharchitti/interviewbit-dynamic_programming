int Solution::jump(vector<int> &A) {
     vector<bool> v(A.size(),false);
     vector<int> d(A.size(),0);
    v[A.size()-1]=true;
    d[A.size()-1]=0;
    for(int i=A.size()-2;i>=0;i--)
    {
        int k=A[i];
        int max=9999;
        for(int j=1;j<=k;j++)
        {
            if(v[j+i]==true)
            {
                v[i]=true;
                if(max>d[j+i]+1)
                max=d[j+i]+1;
            }
        }
        if(v[i]==true)
        d[i]=max;
    }
    
    if(v[0]==true)
    return d[0];
    else
    return -1;
}

