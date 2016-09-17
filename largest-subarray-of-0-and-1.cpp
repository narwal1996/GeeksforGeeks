/*You are required to complete this method*/
int maxLen(int arr[], int n)
{
    int len = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            if(arr[j] == 1) sum++;
            else    sum--;
            if(sum == 0 && len < j-i+1)
                len = j-i+1;
        }
    }
    return len;
}
