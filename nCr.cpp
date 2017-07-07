#include"gcd.cpp"

using ll=long long;

void div_com(ll&a, ll&b)
{
	ll d=gcd(a, b);
	a/=d;
	b/=d;
}


ll nCr(ll n, ll r)
{
	if(r*2>n) r=n-r;
	if(r<0 || n<=0) return 0;

	ll ret=1;
	for(ll i=0;i<r;i++)
	{
		ll u=n-i;
		ll l=i+1;

		div_com(u, l);
		div_com(ret, l);
		ret*=u;
	}
	return ret;
}
