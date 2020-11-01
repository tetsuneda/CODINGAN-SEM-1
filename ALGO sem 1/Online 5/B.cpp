#include <stdio.h>
int main()
{
    unsigned int N, f, ans=0;
    scanf("%u",&N);
    int a[N];
    for(int i=0; i<N; i++)
    {
        scanf("%u", &a[i]);
    }
    scanf("%u", &f);
    unsigned int A, B;
    for(int j=0; j<f; j++)
    {
        scanf("%u %u", &A, &B);
        A--;
        B--;
        if(A==B) ans=a[A];
        else
        {
            while(A<=B)
            {
                ans+=a[A];
                A++;
            }
        }
        printf("Case #%u: %u\n", j+1, ans);
        ans=0;
    }
    
    return 0;
}
