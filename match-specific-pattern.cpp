/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */

long long int calculateHash(string p) {
    int j=0, m=p.length();
    long long int hp=0;
    while(j<m) {
        int k=j;
        while(p[k]==p[j] && k<m)    k++;
        hp *= 4;
        if(j==0)    hp += (k-j+1);
        else if(j>0)    hp += (p[j]>p[j-1] ? (k-j+1) : -(k-j+1));
        j=k;
    }
    return hp;
}

vector<string> findMatchedWords(vector<string> dict,string p) {
    vector<string> res;
    long long int n=dict.size(), hp=0, ht=0;
    hp=calculateHash(p);
    for(int i=0; i<n; i++) {
        ht=calculateHash(dict[i]);
        if(ht==hp)  res.push_back(dict[i]);
    }
    return res;
}
