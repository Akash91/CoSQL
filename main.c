#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "cosql_kv.h"

int main()
{
char* names[]={"akash","ankit","aryan"};
int values[]={1,2,3,4};
printf("\nstart\n");
hash_table *q;
q = init();
int x=0,i=0;
for(i=0;i<3;i++)
add(q,names[i],values[i]);
x=find(q,names[0]);
printf("\n%d\n",x);
destroy(q);
}

