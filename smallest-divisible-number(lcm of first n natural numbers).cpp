/*You are required to complete this method */
long long getSmallestDivNum(long long n) {
    vector<bool> primes(n+1, 1);
    for(int i = 2; i <= n; i++) {
        if(primes[i]) {
            int j = 2*i;
            while(j <= n) {
                primes[j] = 0;
                j += i;
            }
        }
    }
    long long lcm = 1;
    for(int i = 2; i <= n; i++) {
        if(primes[i]) {
            int temp = i;
            while(temp <= n)    temp *= i;
            if(temp > n)    temp /= i;
            lcm *= temp;
        }
    }
    return lcm;
}
