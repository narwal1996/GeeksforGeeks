 /* The function should return third largest element 
     in arr[0..n-1]. It may be assumed that all elements
     are distinct.  */
int thirdLargest(int a[], int n)
{
  //nth_element(a, a+2, a+n, greater<int>());
  //return a[2];
    if(n < 3)   return -1;
    int first = a[0], second = INT_MIN, third = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(a[i] > first) {
            third = second;
            second = first;
            first = a[i];
        } else if(a[i] == first) {
            third = second;
            second = first = a[i];
        } else if(a[i] > second) {
            third = second;
            second = a[i];
        } else if(a[i] == second) {
            third = second = a[i];
        } else if(a[i] >= third) {
            third = a[i];
        }
    }
    return third;
}
