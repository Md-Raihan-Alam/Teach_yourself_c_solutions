#include<stdio.h>
#include<ctype.h>
int main(void)
{
    int i;
    for(i=1;i<=10;i++) printf("%d ",i);
    printf("\n");
    i=1;
    while(i<=10){
        printf("%d ",i);
        i++;
    }
    printf("\n");
    i=1;
    do{
        printf("%d ",i);
        i++;
    }while(i<=10);
    return 0;
}