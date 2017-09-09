/*programa za zadaca 8, koja proveru dali kvadratot i kubot na nekoj
broj gi sodrzi cifrite od 1-9*/
#include<stdio.h>
#include<math.h>
int main()/*pocetok na programata*/
{
    int init[10]={0};/*inicijalizirame niza od 10 broevi, so koja ke gi oznacuvame koi cifri se najdeni*/
    int n,i,j,kvadrat,kub,proverka,f;
    printf("Vnesi do kolku broevi da proveri");
    scanf("%d",&n);/*do kolku broevi da proveri*/
    printf("Takvi broevi se:\n");
    for(i=1;i<=n;i++) /*gi ispituvame site broevi od 1 do vnesenata gorna granica*/
{
         for(j=0;j<10;j++)
         init[j]=0;/*inicijalizacija za sekoj nov broj*/
         f=1;      /*flag*/
         proverka=0;/*promenliva za proverka dali site clenovi vo nizata init imaat vrednost 1*/
         kvadrat=i*i; /*kvadrat na vneseniot broj*/
         kub=pow(i,3);/*kub na vneseniot broj*/
         while(kvadrat>0)/*gi proveruvame site cifri od kvadratot*/
         {
            init[kvadrat%10]=1; /*cifrite sto ke gi najdeme kako indeks gi koristime za vo nizata init i na tie mesta stavame 1*/
            kvadrat/=10;
         }
         while(kub>0) /*istata postapka kaj kubot*/
         {
             if(init[kub%10]==1)/*dokolku prethodno sme go nesle ovoj broj*/
             {
             f=0;
             break;/*go prekinuvame ciklusot while*/
             }
             else
             init[kub%10]=1;/*ako ne, go azurirame na 1 soodvetniot element*/
             kub/=10;
        }

    if (f==1)/*ako ne e azuriran f na 0 znaci e vo red*/
    {
       for(j=1;j<10;j++)
       {
          if (init[j]==1)/*proveruvame dali na site mesta vo nizata e vrednost 1 i go zgolemuvame brojacot proverka*/
          proverka+=1;
       }
       if(proverka==9)/*ako na site mesta imame 1 t.e. brojot na site edinici e 1, znaci deka gi imalo site cifri*/
       printf("Brojot %d, odgovara \n",i);
    }
}
}
