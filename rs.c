#include<stdio.h>

  
#include <string.h> 
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>

 int p,q,n,t,flag,e[10000],d[10000],temp[10000],j,m[10000],en[10000],i;
int k=0;
char msg[10000];
int prime( int);
void ce();
 int cd( int);
void encrypt();
void decrypt();
////////////////////////////////////////////////////////////////////////////////////////
void main()
{
int y;
;
printf("\ninter first prime number\n");
scanf("%d",&p);

flag=prime(p);
if(flag==0)
{
    printf("\nWRONG INPUT\n");
   
    exit(1);
}
printf("\ninter another prime numberR\n");
scanf("%d",&q);
flag=prime(p);
if(flag==0||p==q)
{
    printf("\nWRONG INPUT\n");
   
    exit(1);
}
printf("\nenter message\n");

scanf("%s",msg);

for(i=0;strlen(msg)>i;i++)
m[i]=msg[i];

//for(i=0;strlen(msg)>i;i++)
//printf("\n%d",m[i]);

n=p*q;

t=(p-1)*(q-1);
//printf("\nthe message is\n%d",m);

ce();

printf("\nall possbile number of e \n");
for(i=0;i<k;i++)
printf("\n%d\t%d",e[i],d[i]);

encrypt();
decrypt();

//getch();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////

int prime( int pr)
{
int i;
if(pr<=1)
return 0;
for(i=2;i<pr;i++)
{
    if(pr%i==0)
    return 0;
}
return 1;
}
///////////////////////////////////////////////
void ce()
{



for(i=2;i<t;i++)
{
//printf("tttttt\n%d",t);
    if(t%i==0)
    continue;
int fl=0;
    int test;
    for(test=2;test<=i;++test){
//printf("tttttt\n%d",t);
if(t%test==0&&i%test==0){
fl=1;
break;
}
}
if(fl==1)
continue;
//printf("\neeeeeeeeeeee:%d",i);
e[k]=i;
int pri;

for(pri=2;pri<t;++pri){
if((pri*i)%t==1){
//printf("\nddddddddddd:%d",pri);
d[k]=pri;
k++;
break;
}
}//end for



}//end of for1   






//int ii=0;
//for(ii;ii<=k;++ii){

//printf("\n%d\t%d",e[ii],d[ii]);
//printf("llllolllll");
//}
}///end of ce
//////////////////////////////////////////////////////////////////////////
void encrypt()
{
 int pt,ct,key=e[0],k,len;
i=0;
len=strlen(msg);
while(i!=len)
{
    pt=m[i];
    pt=pt-96;
//printf("\nppppppppppppppppppppppppppt:%d",pt);
    k=1;
    for(j=0;j<key;j++)
    {
        k=k*pt;
        k=k%n;
    }

    temp[i]=k;
    //ct=k+96;
    //en[i]=ct;
    i++;
}
temp[i]=-1;
printf("\nTHE ENCRYPTED MESSAGE IS\n");
for(i=0;temp[i]!=-1;i++)
printf("%c",temp[i]);
printf("\n");
}
////////////////////////////////////////////////////////////////////////////////////////////////
void decrypt()
{
 int pt,ct,key=d[0],k;
int mm[100];
i=0;
while(temp[i]!=-1)
{
    ct=temp[i];
    k=1;
    for(j=0;j<key;j++)
    {
        k=k*ct;
        //printf("\nkkkkkkkkkkk:%d",k);
k=k%n;
    }

    pt=k+96;
    mm[i]=pt;
    i++;
}
mm[i]=-1;
printf("\nTHE DECRYPTED MESSAGE IS\n");
for(i=0;mm[i]!=-1;i++)
printf("%c",mm[i]);
printf("\n");
}
//////////////////////////////////////////////////////////////////////////////////////////////
