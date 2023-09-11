#include<stdio.h>
main()
{
   char j[100];
   int i,n,c=0;

   printf("Enter the string:- ");
   gets(j);
   n=strlen(j);

   for(i=0;i<2;i++)
   {
    if (j[i]==j[n-i-1])
    c++;

   }
   if(c==i)
        printf("string is palindrome ");
   else
        printf("string is not palindromer");



}