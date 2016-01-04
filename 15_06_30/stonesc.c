#include<stdio.h>
#include<string.h>

int main()
{
    char a[101];
    char b[101];
    int n,i;
    scanf("%d",&n);
    while(n--)
    {
        int count = 0;
        scanf("%s",a);
        scanf("%s",b);
        int al = strlen(a);
        int bl = strlen (b);
        int c[100] = {0};
        for(i=0 ; i<al ; i++)
            c[a[i]-65] = 1;
        for(i=0 ; i<bl ; i++)
        {
            if(c[b[i]-65] == 1)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
