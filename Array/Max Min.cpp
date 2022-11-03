class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int x=A[0],y=A[N-1];
    	for(int i=0;i<N;i++)
    	{
    	    x=min(x,A[i]);
    	    y=max(y,A[i]);
    	}
    	
    	
    	int sum=x+y;
    	return sum;
    }

};
