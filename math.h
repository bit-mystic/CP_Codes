void sieve(vector<int>& spf, int MAXN){
    spf[1] = 1;
    for (int i = 2; i < MAXN; i+=2){
        spf[i] = 2;
        spf[i+1] = i+1;
    }

    for (int i = 3; i * i < MAXN; i+=2) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXN; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }}
vector<int> getFactorization(vector<int>& spf, int number){
    vector<int> ret;
    while (number != 1) {
        ret.push_back(spf[number]);
        number = number / spf[number];
    }
    return ret;}
vector<int> sieve(int n){
    vector<bool> prime(n+1,true);
    prime[0] = false;
    prime[1] = false;
    int m = sqrt(n);
    for (int p=2; p<=m; p++){i
        if (prime[p]){
            for (int i=p*2; i<=n; i += p)
            prime[i] = false;
        }
    }
    vector<int> ans;
    for (int i=0;i<n;i++)
        if (prime[i])
            ans.push_back(i);
    return ans;}