using ll=long long;

ll gcd(ll a, ll b)
{
	ll c;

	while((c=a%b))
	{
		a=b;
		b=c;
	}
	return b;
}
