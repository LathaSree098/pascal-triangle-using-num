#include<stdio.h>
int main()
{
    int n,rows,cols,spaces;
    printf("Enter a value:");
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(spaces=1;spaces<=n-rows;spaces++)
        {
        printf(" ");
        }
        int x=1;
        for(cols=1;cols<=rows;cols++)
        {
           printf("%d ",x);
           x=x*(rows-cols)/(cols);
        }
        printf("\n");
    }
    return 0;
}