/*You are required to complete this method*/
int max_sum(int A[],int N)
{
    int ans = INT_MIN;
    for(int i = 0; i < N; i++)
    {
        int sum =0;
        for(int j = i; j < N; j++)
            sum += (j-i)*A[j];
        for(int k = 0; k < i; k++)
            sum += (N-i+k)*A[k];
        if(sum > ans)
            ans = sum;
    }
    return ans;
}
