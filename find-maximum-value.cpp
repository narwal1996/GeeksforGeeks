struct compare {
    bool operator()(pair<int,int> a, pair<int,int> b) {
        return (a.first>b.first);
    }
};

int max_val(int arr[], int n) {
    vector< pair<int,int> > a;
    int temp;
    for(int i=0; i<n; i++)
        a.push_back({arr[i],i});
    sort(a.begin(),a.end(),compare());
    int left=(a[0].second > a[1].second ? a[1].second : a[0].second);
    int right=(a[0].second > a[1].second ? a[0].second : a[1].second);
    int res = abs(left-right)*a[1].first;
    for(int j=2; j<n; j++) {
        int curr, index=a[j].second;
        res = max(res, max(abs(left-index)*a[j].first, abs(right-index)*a[j].first));
        if(index > right) right=index;
        if(index < left)    left=index;
    }
    return res;
}
