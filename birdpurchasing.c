/*Statement: A special breed of birds is called as love birds and the specialty of this breed is that, mostly they live in pair with
their partner otherwise they will not live happy and some of them will die soon.*/
#include <stdio.h>
#include <string.h>
void requiredbirds(char *p)
{
    int n = strlen(p);
    int s = n;
    for (int k = 0; k < s / 2; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (p[i] == p[i + 1])
            {
                for (int j = i; j < n; j++)
                {
                    p[j] = p[j + 2];
                }
                n -= 2;
                break;
            }
        }
    }
    int m = strlen(p);
    printf("No. of birds you need to buy: %d", m);
}
void main()
{
    char p[] = {'a', 'b', 'b', 'c', 'c', 'a', 'b', 'd', 'd', 'c', '\0'};
    requiredbirds(&p);
}