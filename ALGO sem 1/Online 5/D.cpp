#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for (int i=1 ; i<=t ; i++)
	{
		int n;
		scanf("%d",&n);
		long long angka[n];
		for (int j = 0; j < n ;j++)
		{
			scanf("%lld",&angka[j]);
		}
    printf("Case #%d: ",i);
		for (int k = n - 2; k >= 0; k -= 2)
			{
    			printf ("%lld %lld", angka[k], angka[k + 1]);
    			if (k != 0) printf (" ");
			}
	printf("\n");
	}
	return 0;
}
