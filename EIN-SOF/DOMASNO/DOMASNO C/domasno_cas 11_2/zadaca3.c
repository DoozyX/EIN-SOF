#include <stdio.h>
#include <string.h>
#include <ctype.h>
/* funkciski prototipi*/
void morse(char c);
void remorse(const char* string);
int main()
{    int x=0,i,j; /*se koristat kako brojaci*/
     char buffer[256];/* se vcituva vneseniot tekst*/
     char m[8]={0}; /*se stavaat morzovite kodovi koi se oddeleni so prazno mesto*/
     int flag;  /*za izbor*/
     char c[1]; /*pomosno za eliminiranje na enter*/

  printf("Za vnesuvanje na tekst i pretvaranje vo morzova azbuka pritisni 1, a za obratno pritisni 0\n");
  scanf("%d",&flag);
  gets(c); /*ovde se stava enter vo c za da ne ni previ problemi podolu*/

  if (flag) /*za pretvoranje na tekst vo morzova azbuka*/
  {
  printf(" Konverzija na tekst vo morzov kod\n");
  printf("------------------------------------------\n");
  printf("Napisi go tekstot i pritisni enter: ");
  gets(buffer);

  /*ovoj ciklus se koristi za citanje na znak po znak od baferot*/
  while(buffer[x])
  {
    if(buffer[x] == ' ')
    {
      printf("\n");
      while(buffer[x] == ' ') /*izbegniuvanje na prazni mesta*/
        x++;

      if(buffer[x] == NULL) /*zavrsuvame so citanje od baferot*/
        break;


    }
    morse(buffer[x]);  /*povik na funkcijata so morse so karakter od bafer*/
    x++;
  }

  } /*kraj na if*/
  else  /* za pretvoranje od morzova azbuka vo tekst*/
  {
    printf(" Pretvoranje na morzova azbuka vo tekst\n");
    printf("------------------------------------------\n");
    printf("Ispisi ja morzovata recenica so prazni mesta pomegu karakterite i pritisni enter: ");
    gets(buffer);


  while(buffer[x]) /*so ovoj ciklus citame od baferot*/
  { i=0;

    if(buffer[x] == ' ')
    {

      while(buffer[x] == ' ')  /*ovde gi preskoknuvame praznite mesta*/
        x++;

      if(buffer[x] == NULL)  /*ovde zavrsuvame so citanje na bafer*/
        break;


    }
    for (j=0;j<8;j++)
    m[j]=0;
    while ((buffer[x] != ' ') && (buffer[x]!=NULL))  /*gi kopirame morzevite kodovi vo m*/
    {

    m[i]=buffer[x];
    i++;
    x++;
    }

    remorse(m); /*ja povikuvame remorse*/

  }
  printf("\n");

  }

  return 0;  /*uspesen kraj na programata*/
} /*kraj na programata*/

/*definiranje na funkcijata morse*/
void morse(char c)
{ int i;
  char code[8] = {0}; /*ovde se smestuvaat soodvetnite morzevi kodovi*/

  switch(toupper(c)) /*gi proveruva site mozni bukvi so toa sto prvin gi pravi site golemi*/
  {
  /*proverka na bukvite*/
  case 'A': strcpy(code, ".-");  break;
  case 'B': strcpy(code, "-..."); break;
  case 'C': strcpy(code, "-.-."); break;
  case 'D': strcpy(code, "-..");  break;
  case 'E': strcpy(code, ".");  break;
  case 'F': strcpy(code, "..-."); break;
  case 'G': strcpy(code, "--.");  break;
  case 'H': strcpy(code, "...."); break;
  case 'I': strcpy(code, "..");  break;
  case 'J': strcpy(code, "-.-."); break;
  case 'K': strcpy(code, "-.-");  break;
  case 'L': strcpy(code, ".-.."); break;
  case 'M': strcpy(code, "--");  break;
  case 'N': strcpy(code, "-.");  break;
  case 'O': strcpy(code, "---");  break;
  case 'P': strcpy(code, ".--."); break;
  case 'Q': strcpy(code, "--.-"); break;
  case 'R': strcpy(code, ".-.");  break;
  case 'S': strcpy(code, "...");  break;
  case 'T': strcpy(code, "-");  break;
  case 'U': strcpy(code, "..-");  break;
  case 'V': strcpy(code, "...-"); break;
  case 'W': strcpy(code, ".--");  break;
  case 'X': strcpy(code, "-..-"); break;
  case 'Y': strcpy(code, "-.--"); break;
  case 'Z': strcpy(code, "--.."); break;

  /* proverka na brojkite*/
  case '0': strcpy(code, "-----"); break;
  case '1': strcpy(code, ".----"); break;
  case '2': strcpy(code, "..---"); break;
  case '3': strcpy(code, "...--"); break;
  case '4': strcpy(code, "....-"); break;
  case '5': strcpy(code, "....."); break;
  case '6': strcpy(code, "-...."); break;
  case '7': strcpy(code, "--..."); break;
  case '8': strcpy(code, "---.."); break;
  case '9': strcpy(code, "----."); break;

 /*na nekoi drugi znaci*/
  case '.': strcpy(code, ".-.-.-"); break;
  case ',': strcpy(code, "--..--"); break;
  case '?': strcpy(code, "..--.."); break;

  default: printf("[pogresen karakter '%c']\n", c); break;
  }
  /*so ovij for ciklus gi pecatime morzievite znaci*/
  for(i=0; i<8; i++)
  {
    if(code[i] == '-')
    {
      printf("%c", code[i]);

    }
    else if(code[i] == '.')
    {
      printf("%c", code[i]);

    }
  }

  printf("\n");
} /*kraj na funkcijata morse*/

 /*definiranje na funkcijata remorse*/
 void remorse(const char* string) {
   /*proverka na bukvite*/
   if (strcmp(string, ".-"  ) == 0)   putchar('A');
   if (strcmp(string, "-...") == 0)   putchar ('B');
   if (strcmp(string, "-.-.") == 0)   putchar ('C');
   if (strcmp(string, "-.." ) == 0)   putchar ('D');
   if (strcmp(string, "."   ) == 0)   putchar ('E');
   if (strcmp(string, "..-.") == 0)   putchar ('F');
   if (strcmp(string, "--." ) == 0)   putchar ('G');
   if (strcmp(string, "....") == 0)   putchar ('H');
   if (strcmp(string, ".."  ) == 0)   putchar ('I');
   if (strcmp(string, ".---") == 0)   putchar ('J');
   if (strcmp(string, "-.-" ) == 0)   putchar ('K');
   if (strcmp(string, ".-..") == 0)   putchar ('L');
   if (strcmp(string, "--"  ) == 0)   putchar ('M');
   if (strcmp(string, "-."  ) == 0)   putchar ('N');
   if (strcmp(string, "---" ) == 0)   putchar ('O');
   if (strcmp(string, ".--.") == 0)   putchar ('P');
   if (strcmp(string, "--.-") == 0)   putchar ('Q');
   if (strcmp(string, ".-." ) == 0)   putchar ('R');
   if (strcmp(string, "..." ) == 0)   putchar ('S');
   if (strcmp(string, "-"   ) == 0)   putchar ('T');
   if (strcmp(string, "..-"  ) == 0)  putchar ('U');
   if (strcmp(string, "...-") == 0)   putchar ('V');
   if (strcmp(string, ".--" ) == 0)   putchar ('W');
   if (strcmp(string, "-..-") == 0)   putchar ('X');
   if (strcmp(string, "-.--") == 0)   putchar ('Y');
   if (strcmp(string, "--..") == 0)   putchar ('Z');
   /* proverka na brojkite*/
   if (strcmp(string, "-----") == 0)   putchar ('0');
   if (strcmp(string, ".----") == 0)   putchar ('1');
   if (strcmp(string, "..---") == 0)   putchar ('2');
   if (strcmp(string, "...--") == 0)   putchar ('3');
   if (strcmp(string, "....-") == 0)   putchar ('4');
   if (strcmp(string, ".....") == 0)   putchar ('5');
   if (strcmp(string, "-....") == 0)   putchar ('6');
   if (strcmp(string, "--...") == 0)   putchar ('7');
   if (strcmp(string, "---..") == 0)   putchar ('8');
   if (strcmp(string, "----.") == 0)   putchar ('9');


  /*na nekoi drugi znaci*/
  if (strcmp(string, ".-.-.-") == 0)   putchar ('.');
  if (strcmp(string, "--..--") == 0)   putchar (',');
  if (strcmp(string, "...--..") == 0)  putchar ('?');
} /*kraj na funkcijata remorse*/



