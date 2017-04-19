#Include<iostream>#include <iostream>
using namespace std;

int main() {
	//code
	int n;
	cin>>n;
	while(n--)
	{
	    int k;
	    cin>>k;
	    int arr[1000];
	    int lcs[1000];
	    for(int i=0;i<k;i++)
	    {
	        cin>>arr[i];
	        lcs[i]=1;
	    }
	    for(int i=1;i<k;i++)
	    {
	       for(int j=0;j<i;j++)
	       {
	           if(arr[i]>arr[j])
	           {
	               if(lcs[i]< lcs[j]+1)
	               {
	                   lcs[i]=lcs[j]+1;
	               }
	           }
	       }
	       
	    }
	    int max=-1;
	    for(int i=0;i<k;i++)
	    {
	        cout<<lcs[i]<<" ";
	        if(lcs[i]>max)
	        max=lcs[i];
	    }
	   // cout<<endl;
	    cout<<max<<endl;
	}
	return 0;
}
