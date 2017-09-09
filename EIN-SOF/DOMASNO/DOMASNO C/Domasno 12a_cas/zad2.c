/*Program zad2.c*/
/*telefonski broevi*/
#include <stdio.h>
#include <string.h>
#include<ctype.h>
/*prototip na funkcijata generiraj*/
void generiraj(int a,char *str[10] );
/*pocetok na glavnata programa*/
int main()
{
    char vlez[8];  /*ovde go vnesuvame niza od znaci*/
    char *struktura[10]={"YZ ","***","ABC","DEF","GHI","JKL","MNO","PQR","STU","VWX"};
    int i,j,br; /*brojaci*/
    printf("Vnesi go sedumbukveniot zbor\n");
    gets(vlez);
    /*za pretvoranje od bukvi vo brojki*/
    for (i=0;i<7;i++)
    {
        for (j=0;j<10;j++)
        {
            if (strchr(struktura[j],vlez[i])!=NULL)  /*proveruvam dali bukvata vlez[i] ja ima vo stringot struktura[j]*/
            printf("%d",j);
        }
        
    }
    /*vnesuvame broj i generirame iminja*/
    printf("\n Vnesi go brojot za koj sakas da se generiraat zborovite\n");
    scanf("%d",&br);
    generiraj(br,struktura); /*povik na funkcijata generiraj*/
return 0;
    } /*kraj na main*/
/*definiranje na funkcijata generiraj*/
void generiraj(int a,char *str[10] )
{   int cifra[9]; /*ovde gi smestuvame cifrite od vneseniot broj*/
    int i,j,k,l,m,n,p; /*brojaci*/
    int f=1; /*flag za pecatenje*/
    char niza[7]=""; /*ovde gi stavame generiranite zborovi*/
    i=0;
    /*so ovoj ciklus gi naogame cifrite na brojot*/
    while (a>0)

    {

          cifra[i]=a%10;
          printf("%d  ",cifra[i]);
          i++;
          a/=10;

    }
    printf("\n");
    /*ovde gi generirame zborovite so sedum vgnezdeni ciklusi*/
       for (i=0;i<3;i++)
        {
            niza[0]=str[cifra[6]][i];



            for (j=0;j<3;j++)
            {

                niza[1]=str[cifra[5]][j];


                for (k=0;k<3;k++)
                {

                    niza[2]=str[cifra[4]][k];

                    for (l=0;l<3;l++)
                    {

                       niza[3]=str[cifra[3]][l];

                       for (m=0;m<3;m++)
                       {

                            niza[4]=str[cifra[2]][m];

                         for (n=0;n<3;n++)
                         {

                                niza[5]=str[cifra[1]][n];


                             for (p=0;p<3;p++)
                             {

                                niza[6]=str[cifra[0]][p];
                                /*kaj 0 za treta bukva vnesuvame prazno mesto proveruvame dali vo niza ima prazno mesto*/
                                for (a=0;a<7;a++)
                                {   /*ako ima flagot go postavuvame na 0*/
                                    if (isspace(niza[a]))
                                    f=0;
                                }
                                if (f==1) /*ako flagot e 1 pecati*/
                                    puts(niza);
                                f=1; /*postavi go povtrono na edinica*/
                                printf("\n");
                             }
                         }
                       }
                    }
                }
            }

        }
 printf("\n");
} /*kraj na funkcijata generiraj*/




    
    
