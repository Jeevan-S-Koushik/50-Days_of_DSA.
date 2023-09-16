class Solution 
{
    public:
    
    bool ispossiblesoln(int A[], int N, int M, int sol){
        int pagesum = 0;
        int c = 1;
        for(int i=0;i<N;i++){
            if(A[i] > sol){
                return false;
            }
            if(pagesum + A[i] > sol){
                c++;
                pagesum = A[i];
                    if(c > M){
                        return false;
                    } 
                }
                else{
                    pagesum += A[i];
            }
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M > N){
            return -1;
        }
        int start = 0;
        int end = accumulate(A,A+N,0);
        int ans = 0;
        while(start<=end){
            int mid =(start + end ) >> 1;   //this '>>1' will also work like '/2'   
            if(ispossiblesoln(A,N,M,mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;
    }
};