/*program zadaca2.c*/
/*presmetuvanje na sistem so tri nepoznati*/
#include <stdio.h>
/*prototip na funkcijata vnesimatrica*/
void vnesimatrica( int niza[3][4]);
/*prototip na funkcijata pecatimatrica*/
void pechatimatrica( int a[3][4] );
/*prototip na funkcijata za presmetuvanje na determinanta na matrica*/
float det(int mat[3][4]);
int D[3][4];
int Dx[3][4];
int Dy[3][4];
int Dz[3][4];


int main() /*pocetok na glavnata programa*/
{
    int i,j;
	printf("sega vnesuvaj gi koeficientite\n");
	vnesimatrica(D); /*ovde ja vnesuvame matricata*/
	
	 for ( i = 0; i<3; i++ )  /*ovde gi polnime matricite Dx,Dy,Dz od vnesenite koeficienti*/
        {
         for ( j = 0; j<4; j++ )
         {
         Dx[i][j]=D[i][j];
         Dy[i][j]=D[i][j];
         Dz[i][j]=D[i][j];
         } /* kraj za vnatreshnoto for */

        } /* kraj na nadvoreshnoto fof */
	 printf("\n");
     pechatimatrica(D);

	for (i=0;i<3;i++)  /*ovde gi menuvame kolonite 0, 1, 2 na matricite Dx, Dy, Dz, soodvetno so kolonata na slobodnite clenovi na ravenkite*/
	{
	   Dx[i][0]=D[i][3];
	   Dx[i][0]=D[i][3];
       Dx[i][0]=D[i][3];
       Dy[i][1]=D[i][3];
	   Dy[i][1]=D[i][3];
       Dy[i][1]=D[i][3];
       Dz[i][2]=D[i][3];
	   Dz[i][2]=D[i][3];
       Dz[i][2]=D[i][3];
     }


     if (det(D)==0) /*ovde proveruvame da ne dobieme delenje so 0*/
     printf("nema realni resenija ravenkata\n");
     else  /*ovde gi presmetuvame x, y, z resenijata na ravenkite*/
     {
     printf("X ima vrednost %f\n", det(Dx)/det(D));
     printf("Y ima vrednost%f\n",det(Dy)/det(D));
     printf("Z ima vrednost%f\n",det(Dz)/det(D));
     }
return 0;
}   /*kraj na programata*/
/* funkcija za vnesuvanje na matricata na koeficientite na ravenkata*/
void vnesimatrica(  int n[3][4] )
{
   int i; /* brojach na redovi */
   int j; /* brojach na koloni */

   /* pomini niz redovite */
   for ( i = 0; i<3; i++ ) {

      for ( j = 0; j<4; j++ ) {
         scanf("%d ",&n[i][j]);
      } /* kraj za vnatreshnoto for */

   } /* kraj na nadvoreshnoto for */
} /* kraj na funkcijata vnesimatrica*/
/*funkcija koja presmetuva determinanata na matrica*/
float det(int mat[3][4])
{

    float d;
    d=mat[0][0]*mat[1][1]*mat[2][2]+mat[0][1]*mat[1][2]*mat[2][0]+mat[0][2]*mat[1][0]*mat[2][1]-mat[2][0]*mat[1][1]*mat[0][2]-mat[0][0]*mat[2][1]*mat[1][2]-mat[2][2]*mat[1][0]*mat[0][1];
 return d;
}
 /*funkcija za pecatenje na matricata*/
 void pechatimatrica( int  p[3][4] )
{
   int i; /* brojach na redovi */
   int j; /* brojach na koloni */

   /* pomini niz redovite */
   for ( i = 0; i<3; i++ ) {
      /* ispechati gi vrednostite na kolonite */
      for ( j = 0; j<4; j++ ) {
         printf( "%d  ", p[i][j] );
      } /* kraj za vnatreshnoto for */
      printf( "\n" ); /* nova linija na izlezot */
   } /* kraj na nadvoreshnoto for */
} /* kraj na funkcijata pecatimatrica */
