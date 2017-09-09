#include <stdio.h>
#include <math.h>
 char s[500][23]={0};
void polni(int x, char s1[3]);
void lepenje(char *s1,char *s2);
int main()
{    int i;
     FILE *cfPtr;
    for (i=0;i<20;i++)
    {   if (i==0)
        s[0][0]='0';
        else
        polni(i,s[i]);

    lepenje(s[i],".dat");
    printf("%s\n",s[i]);
    if ( ( cfPtr = fopen( s[i], "w" ) ) == NULL ) {
      printf( "Ne mozham da ja otvoram datotekata\n" );

   } /* kraj if */
    fprintf(cfPtr,"%s%d\n%s","DATOTEKA-",i,"TONI I TIME GI NAPRAVIJA OVIE DATOTEKI");
       fclose( cfPtr );
    }

    return 0;
}

 void lepenje(char *s1,char *s2)
{
    while (*s1 != '\0')
    s1++;
    //printf("%c",*(s1-1));
    while (*s2 != '\0')
    {
        *s1=*s2;
        s1++;
        s2++;
    }
}
void polni(int x, char s1[3])
{
    int br=0,i=0;
    int pom=x;
    while (pom>0)
    {
        br++;
        pom/=10;
    }
    br--;


    while (br>=0)
    {
        pom=x/(int)pow(10,br);

        switch (pom)
        {
    case 0: s1[i]='0'; break;
    case 1: s1[i]='1'; break;
    case 2: s1[i]='2'; break;
    case 3: s1[i]='3'; break;
    case 4: s1[i]='4'; break;
    case 5: s1[i]='5'; break;
    case 6: s1[i]='6'; break;
    case 7: s1[i]='7'; break;
    case 8: s1[i]='8'; break;
    case 9: s1[i]='9'; break;
     default: s1[i]=' '; break;
        }
        x=x%(int)pow(10,br);
        br--;
        i++;
    }
}
