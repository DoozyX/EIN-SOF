#include<stdio.h>
void sreken(int br);

int main()
{   int broj;

   printf("Vnesi koj broj sakas da proveris dali e sreken");
   scanf("%d",&broj);
        printf("brojot %d gi ima slednite kvadrati:\n",broj);
        sreken(broj);
    return 0;
}


void sreken(int x)
{
    int br=0,cifri[6]={0};
    int pom=x,i=0,kvadrat=0;
    static int j=0;
    
    if(x==1)
    {printf(" i e sreken broj\n");
     return;
    }
    while (pom>0)
    {
        br++;
        cifri[i]=pom%10;
        pom/=10;
        i++;
    }

     j++;
    for(i=0;i<br;i++)
    {kvadrat+=cifri[i]*cifri[i];
    }
     printf("%d ",kvadrat);
     if(j>20)
     {printf(" i ne e sreken broj\n");return; }
     else
     sreken(kvadrat);

}
