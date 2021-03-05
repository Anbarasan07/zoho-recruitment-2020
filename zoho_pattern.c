#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,k=0,space;
    char word[50];

    scanf("%s",word);
    //printf("%s\n",a);
    int n=strlen(word);
    //printf("%d\n",n);

    for(i=0;word[i];i++)
    {
        k=n/2;
        for(space=0 ; space < n-i-1 ; space++)
            printf("  ");
        for(j=0 ; j < i+1 ; j++)
        {
            printf("%c ",word[k]);
            k++;
            if(k==n)
                k=0;
        }
        printf("\n");
    }
}
