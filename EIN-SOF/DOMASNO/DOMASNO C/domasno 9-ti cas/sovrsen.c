 /*program zadaca4.c*/
 /*proveruva dali nekoj broj e sovrsen*/
#include <stdio.h>

int main()  /*pocetok na glavnata programa*/
{
	int n,i,j; /*n e granica na koja ja vnesuvame do kade da bara sovrseni broevi*/
	int sum; /*ja presmetuvame sumata na cifrite na brojot*/
	printf("vnesi granica sovrsenite broevi");
	scanf("%d",&n);
	i=n; /*gi barame sovrsenite broevi pocnuvajki od n pa nadolu so pomos na i*/
    while (i>0)
	{   sum=0;   /*ja inicijalizirame sumata*/
		for (j=1;j<i;j++)
		{
			if ((i%j)==0)  /*gi barame delitelite na brojot*/
            sum+=j;        /*ja presemetuvaem sumat ana negovite deliteli*/
        }
     if (sum==i) /*ako sumata negovite delenici e ednakva na brojot togas toj e sovrsen*/
	 printf("brojot %d e sovrsen\n",sum);
	 i-=1; /*odimena prverka na naredniot broj*/
	}
	return 0;
}        /*kraj na programata*/
