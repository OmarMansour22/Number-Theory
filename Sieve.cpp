const int N=1e6+5;
int notpr[N+5];

void sieve()
{
    notpr[1]=1;
    notpr[2]=0;
    for(ll i=2;i<=N;i++)
    {
        if(!notpr[i])
        {
            for(ll j=i*i;j<N;j+=i)
            {
                notpr[j]=1;
            }
        }
    }
}

//________________________________________________________

//get all divisors of each element
const int N = 4e5 + 5;
vector<vector<int>> divs(N);
void sieve()
{
	for (int i = 1; i < N; i++)
		for (int j = i; j < N; j += i)
			divs[j].push_back(i);
}

