class Solution {
public:
    
    
    long long max(long long a,long long b)
    {
        if(a>b)return a;return b;
    }
    
    
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        
        long long s=0;
        int md=1e9+7;
        long long n=arr.size();
        
        //finding the sum of all elements
        for(auto x:arr)s+=x;
        
        //if s>0 we can select all k arrays or we can select all k arrays and exclude the
        // first -ve and last -ve elements from total sum
        
        if(s>0)
        {
            long long t=0,mi1=INT_MAX,mi2=INT_MAX;
            
            //finding the min including first element
            for(int i=0;i<n;i++)
            {
                t+=arr[i];
                mi1=min(mi1,t);
            }
            
            //finding the min including last element
            t=0;
            for(int i=n-1;i>=0;i--)
            {
                t+=arr[i];
                mi2=min(mi2,t); 
            }
            
            //if mi1 or mi2 >0 then we dont need them as they will subtract out our total sum
            if(mi1>0)mi1=0;
            if(mi2>0)mi2=0;
            
            mi1=abs(mi1);
            mi2=abs(mi2);
            long long e=s*k;
            return max(e,e+mi1+mi2)%md;
        }
        
        
        //if s<0 then we need only two arrays 
        if(k!=1)for(int i=0;i<n;i++)arr.push_back(arr[i]);
        long long cm=0,maxsofar=0;
        for(auto x:arr)
        {
            cm=max(cm+x,x);
            maxsofar=max(maxsofar,cm);
        }
        return maxsofar%md;
        
    }
};
