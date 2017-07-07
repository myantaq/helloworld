#include<iostream>
#include"nCr.cpp"

using namespace std;

int main(void)
{
	{
		int n=60;
		for(int r=0;r*2<=n;r++)
		{
//			cout << "n=" << n << " r=" << r << " nCr=" << nCr(n,r) << endl;
			printf("n=%d r=%d nCr=%lld\n", n, r, nCr(n, r));
		}
	}

  cout << "Hello world" << endl;
  return 0;
}
