/*
  http://articles.leetcode.com/a-distance-maximizing-problem/
  Sorting O(N log N)

  Above diagram shows n lines sorted according its heights. Lines with same heights are sorted using its original index. 
  We will also need to keep track of each line’s original index in order to calculate the distance later. 
  Finally, we build a table by scanning the lines’ original index from right to left once.

  By sorting the lines according to its height, we can achieve better run time complexity. Notice that once we sorted the lines, 
  we are able to find the maximum distance in O(N) time. For each possible original starting index i, 
  we find the original ending index j, which is the maximum among all j’s where A[j] > A[i]. To enable the quick search for the maximum,
  we can build a look up table in O(N) time by scanning from right to left once. For example, we start with index i = 4, 
  which is the shortest line. We know the maximum of all original indices to the right is 7, therefore max distance = 7 – 4 = 3. 
  For the next line which original index is 3, the max distance = 7 – 3 = 4. Now, we must skip over the duplicates and reach the 
  line with its original index 1. Here, we must be careful to skip over all duplicate heights which are not part of the solution because
  not satisfying the constraint A[j] > A[i]. Therefore, the max distance for this case = 2 – 1 = 1.
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,temp;
        cin >> n;
        vector< pair<int,int> > a;
        for(int i=0; i<n; i++) {
            cin >> temp;
            a.push_back({temp,i});
        }
        sort(a.begin(), a.end());
        int table[n];
        table[n-1]=a[n-1].second;
        for(int i=n-2; i>=0; i--) {
            if(a[i].second > table[i+1])    table[i]=a[i].second;
            else    table[i]=table[i+1];
        }
        int res=table[0]-a[0].second;
        for(int i=1; i<n; i++)  res=max(res,table[i]-a[i].second);
        cout << res << endl;
    }
	return 0;
}
