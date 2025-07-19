#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[101];
scanf("%s%s",&str1,&str2);
for(int i=0;str1[i] !='\0'; i++){
 
    if(str1[i]>='A'&&str1[i]<='Z')
        str1[i]=str1[i]+32;
    if(str2[i]>='A'&&str2[i]<='Z')
 
    str2[i]=str2[i]+32;
 
}
printf("%d\n",strcmp(str1,str2));
 
return 0;
}