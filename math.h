template <typename T>
ll inv(ll a){return a<=1?a:mod-(mod/a)*inv(mod%a)%mod;}

template <typename T>
int digit(ll n){return floor(log10(n)+1);}

template <typename T>
ll nCk(vector<int>& f,ll n,ll k) {return f[n]*inv(f[k]*f[n - k]%mod)%mod;}

template <typename T>
ll cross_product(vector<T>& a, vector<T>& b, vector<T>& c) 
    return (b[0]-a[0])*(c[1]-a[1])-(b[1]-a[1])*(c[0]-a[0]);


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

vector<int> sieve(int n){
    vector<bool> prime(n+1,true);
    prime[0] = false;
    prime[1] = false;
    int m = sqrt(n);
    for (int p=2; p<=m; p++){
        if (prime[p]){
            for (int i=p*2; i<=n; i += p)
            prime[i] = false;
        }
    }
    vector<int> ans;
    for (int i=5;i<=n;i++)
        if (prime[i])
            ans.push_back(i);
    return ans;}