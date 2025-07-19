#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=1;i<=n;i++){

        int p1,p2,p3;
        scanf("%d%d%d",&p1,&p2,&p3);
        int sum=p1+p2+p3;
        if(sum>1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}