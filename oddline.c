#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main( ) {

char str1[10];
    scanf("%s",str1);

 int i,j;
 int len=strlen(str1);
 int mid=len/2;
 int d=0;
 char str2[len]; 
  for(int i=mid;i<len;i++){
     
     str2[d++]=str1[i];

 }printf("\n");
for(int i=0;i<mid;i++){
     
     str2[d++]=str1[i];
 }printf("\n");
   
   
    for(int i=0; i<len; ++i)
    {
        // Print spaces
        for(int j=i; j<len; ++j)
        {
            printf(" ");
        }
        // Printstr2
        for(int j=0; j<=i; ++j)
        {
            printf("%c",str2[j]);
        }
        // Print new line
        printf("\n");
    }
return 0;
}
