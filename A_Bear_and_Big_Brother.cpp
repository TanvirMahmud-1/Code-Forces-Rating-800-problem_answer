#include<stdio.h>
int main()
{
    int a,b,years;
    scanf("%d%d",&a,&b);
 
    for(years = 0; a <= b; years++){
     a*=3;
     b*=2;
    }
    printf("%d\n",years);
 
    return 0;
}