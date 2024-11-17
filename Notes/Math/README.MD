# Number Thoery 
### Divisors of a given number

```
vector<long long >Divisors(long long n)
{
    vector<long long>ans;
    for(long long i {1};i*i <=n;++i)
    {
        if(n % i == 0)
        {
            ans.push_back(i);
            if(i * i == n);
            else
                ans.push_back(n/i);
        }
    }
    return ans;
}

```
