#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
 srand(time(NULL));

 
 int v1 = (rand() % 10) + 1;
 int v2 = (rand() % 10) + 1;
 int v3 = (rand() % 10) + 1;
 int v4 = (rand() % 10) + 1;
 int v5 = (rand() % 10) + 1;
 int v6 = (rand() % 10) + 1;
 int v7 = (rand() % 10) + 1;
 int v8 = (rand() % 10) + 1;
 int v9 = (rand() % 10) + 1;
 
 printf("%d %d %d\n %d %d %d\n %d %d %d\n" , v1, v2, v3, v4, v5, v6, v7, v8, v9);

if (v1 ==v2 == v3)
{
   printf("you are winner\n");
}
else if ( v4 == v5 == v6)
{
   printf("your winner\n");
}
else if (v7 == v8 == v9)
{
   printf("your winner\n");
}
else if (v1 == v5 == v9)
{
   printf("you are winner\n");
}
else if(v3 == v5 == v7)
{
   printf("you are winner\n");
}
else
{
   printf("you are loser\n");
}



 
 
 return 0;
    

}
