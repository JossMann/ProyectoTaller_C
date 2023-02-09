#include <stdio.h>
#include <stdlib.h>
#include <windows.h>   //Beep()Genera tonos simples en el altavoz.
#include <string.h>

void tocarCancion(int,int);

int main()
{
    int eleccion,y=0;
    int tocar_piano(int);
    int escuchar_cancion(int);

    while(y!=3)
    {
      printf("<<<Piano en Lenguaje>>> C\n");
      printf("\n");
      printf("[1]Tocar el piano\n");
      printf("[2]Escuchar una cancion\n");
      printf("[3]Salir\n");
      scanf("%i",&eleccion);
      system("cls");

      switch(eleccion)
      {
        case 1:
             y=tocar_piano(1);

        break;
        case 2:
            y=escuchar_cancion(2);

        break;
        case 3:
            printf("Salir\n");
             y=3;
        break;
        default:
            printf("Opcion invalida, intenta nuevamente\n");
             y=4;
      }

    }
}


int tocar_piano(int b)
{
  char nota;

    printf("      Que nota quieres tocar?\n");
    printf("\n");
    printf("     _______________________________________________________________________________________________     \n");
    printf("    |      |   |      |   |      |      |   |      |   |      |   |      |     |   |     |   |     |     \n");
    printf("    |      |   |      |   |      |      |   |      |   |      |   |      |     |   |     |   |     |     \n");
    printf("    |      |   |      |   |      |      |   |      |   |      |   |      |     |   |     |   |     |     \n");
    printf("    |      |C# |      |D# |      |      |F# |      |G# |      |A# |      |     |C# |     |D# |     |     \n");
    printf("    |      |Db |      |Eb |      |      |Gb |      |Ab |      |Bb |      |     |Db |     |Eb |     |     \n");
    printf("    |      |   |      |   |      |      |   |      |   |      |   |      |     |   |     |   |     |     \n");
    printf("    |      |w  |      |e  |      |      | t |      | y |      |u  |      |     |i  |     |o  |     |     \n");
    printf("    |      |___|      |__ |      |      |__ |      |__ |      |__ |      |     |__ |     |___|     |     \n");
    printf("    |        |          |        |        |          |          |        |       |         |       |     \n");
    printf("    |        |          |        |        |          |          |        |       |         |       |     \n");
    printf("    |        |          |        |        |          |          |        |       |         |       |     \n");
    printf("    |   C    |   D      |    E   |    F   |    G     |    A     |    B   |  C    |    D    |   E   |     \n");
    printf("    |   a    |   s      |    d   |    f   |    g     |    h     |    j   |  k    |    l    |   p   |     \n");
    printf("    |        |          |        |        |          |          |        |       |         |       |     \n");
    printf("    ================================================================================================     \n");

    printf("\n");
    printf("      Para detener el programa presiona 0 \n");
    printf("\n");


    while(nota != '0')
     {
         nota=getch();

         switch(nota)
         {
            case 'a':
                system("color 04");
                printf("Do  ");
                Beep(523,500);

                break;
            case 'w':
                system("color 02");
                printf("Do#/Reb ");
                Beep(554,500);
                break;

            case 's':
                system("color 03");
                printf("Re ");
                Beep(587,500);
                break;

             case 'e':
                system("color 06");
                printf("Re#/Mib ");
                Beep(622,500);
                break;
             case 'd':
                system("color 08");
                printf("Mi ");
                Beep(659,500);
                break;
             case 'f':
                system("color 05");
                printf("Fa ");
                Beep(698,500);
                break;
            case 't':
                system("color 06");
                printf("Fa#/Solb ");
                Beep(740,500);
                break;
             case 'g':
                system("color 02");
                printf("Sol ");
                Beep(784,500);
                break;
             case 'y':
                system("color 01");
                printf("Sol#/Lab ");
                Beep(830,500);
                break;
             case 'h':
                system("color 04");
                printf("La ");
                Beep(880,500);
                break;
             case 'u':
                system("color 05");
                printf("La#/Sib ");
                Beep(932,500);
                break;
             case 'j':
                system("color 04");
                printf("Si ");
                Beep(988,500);
                break;
             case 'k':
                system("color 03");
                printf("Do6 ");
                Beep(1046,500);
                break;

              case 'i':
                system("color 01");
                printf("Do#6 ");
                Beep(1109,500);
                break;

             case 'l':
                system("color 06");
                printf("Re6 ");
                Beep(1175,500);
                break;
              case 'o':
                system("color 03");
                printf("Re#6/Eb6 ");
                Beep(1245,500);
                break;

             case 'p':
                system("color 05");
                printf("Mi6 ");
                Beep(1318,500);
              break;



            case '0':
                system("cls");
                system("color 07");
                break;

            default:
                printf("\n Tecla invalida\n");
                break;
         }

     }





    return b;
}


int escuchar_cancion(int b)
{
     int opcion, w=0;
     while(w !=6)
     {
  system("cls");
  printf("\tQue cancion deseas escuchar\n");
  printf("\t[1] La cucaracha\n");
  printf("\t[2] Noche de paz\n");
  printf("\t[3] Estrellita\n");
  printf("\t[4] Himno a la alegria\n");
  printf("\t[5] Cumplea%cos feliz\n",164);
  printf("\t[6] Regresar al menu anterior\n");


  scanf("%i",&w);
   system("cls");
  switch(w)
  {
      case 1:
       printf("\tElegiste la Cucaracha\n\n");
       tocarCancion(40,1);
      break;

      case 2:
       printf("\tElegiste Noche de paz\n\n");
       tocarCancion(54,2);
      break;

      case 3:
        printf("\tElegiste Estrellita\n");
        tocarCancion(58,3);
      break;

      case 4:
        printf("\tElegiste Himno a la alegria\n");
        tocarCancion(52,4);
        break;

       case 5:
        printf("\tCumplea%cos feliz\n",164);
        tocarCancion(28,5);
        break;


      default:
      printf("Opcion invalida\n");
  }

     }
    return b;


}

void tocarCancion(int notas, int opcion)
{

 char notas_cucaracha [50]=
 {
'0','g','g','g','C','E','0',
 'g','g','g','C','E','0',
 'C','C','b','b','a','a','g','0',
 'g','g','g','b','D','0',
 'g','g','g','b','D','0',
 'G','A','G','F','E','D','C'
 };
 float duracion_cucaracha[50]=
 {
     0.2,0.5,0.5,0.5,1,0.7,0,
         0.5,0.5,0.5,1,0.7,0,
         0.5,0.5,0.5,0.5,0.5,0.5,2,0.5,
         0.5,0.5,0.5,1,0.7,0,
         0.5,0.5,0.5,1,1.3,0,
         0.5,0.5,0.5,0.5,0.5,0.5,2
 };


 char noche_de_paz [60]=
 {
  'g','a','g','e','0',
  'g','a','g','e','0',
  'D','D','b','b','C','C','g','0',
  'a','a','C','b','a','g','a','g','e','0',
  'a','a','C','b','a','g','a','g','e','0',
  'D','D','F','D','b','C','C','E','0',
  'C','g','e','g','f','d','c'
  };
float duracion_noche[60]=
{
   1.5,0.5,1,2.5,0.5,
   1.5,0.5,1,2.5,0.5,
   2,1,2,1,2,1,2.5,0.5,
   2,1,1.5,0.5,1,
   1.5,0.5,1,2.5,0.5,
   2,1,1.5,0.5,1,
   1.5,0.5,1,2.5,0.5,
   2,1,1.5,0.5,1,
   2.5,0.5,2.5,0.5,
   1,1,1,1,1,1,3

};
 char estrellita[60] =
 {
     'c','c','g','g','a','a','g','0',
     'f','f','e','e','d','d','c','0',
     'g','g','f','f','e','e','d','0',
     'g','g','f','f','e','e','d','0',
     'c','c','g','g','a','a','g','0',
     'f','f','e','e','d','d','c','0'
 };
 float duracion_est[60] =
 {
     0.5,0.5,0.5,0.5,0.5,0.5,1,0.2,
     0.5,0.5,0.5,0.5,0.5,0.5,1,0.2,
     0.5,0.5,0.5,0.5,0.5,0.5,1,0.2,
     0.5,0.5,0.5,0.5,0.5,0.5,1,0.2,
     0.5,0.5,0.5,0.5,0.5,0.5,1,0.2,
     0.5,0.5,0.5,0.5,0.5,0.5,1,0.2,
 };

 char himno_alegria [60] =
 {
   'b','b','C','D','D','C','b','a',
   'g','g','a','b','b','a','a','0',
   'b','b','C','D','D','C','b','a',
   'g','g','a','b','a','g','g','0',

   'a','0','b','g','a','b','C','b','g',
   'a','b','C','b','a','g','a','d'
 };
 float duracion_alegria[60]=
 {

      0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,
      0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,
       0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,
      0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,

      1,0.5,0.5,0.5,0.5,0.25,0.25,0.5,0.5,0.5,0.25,0.25,0.5,0.5,0.5,0.5,1
 };

char cumple_feliz[60] =
 {
   'c','c','d','c','f','e','0',
   'c','c','d','c','g','f','0',
   'c','c','C','a','f','e','d','0',
   't','t','a','f','g','f'
 };
float duracion_cumple [60]=
{
   0.5,0.5,1,1,1,1,1,
   0.5,0.5,1,1,1,1,1,
   0.5,0.5,1,1,1,1,1,1,
    0.5,0.5,1,1,1,2
};

char cancion[65] = {};
char vacio [65]= {};
float tiempos [65]={};
float tiempo_vacio[65]={};
int i;
int tiempo=500;

int Do=523;    //c
    int doS_reB=554;     //q
 int Re=587;    //d
    int reS_miB=622;     //w
 int Mi=659;    //e
 int Fa=698;    //f
    int faS_solB=740;    //i
 int Sol=784;   //g
    int solS_laB=831;    //r
 int La=880;    //a
     int laS_siB=932;     //t
 int Si=988;    //b
 int Do6=1046;  //C
     int DoS_ReB=1109;    //Q
 int Re6=1175;  //D
     int ReS_MiB=2489;    //W
 int Mi6=1318;  //E
 int Fa6=1397;  //F
     int FaS_SolB=1480;   //I
 int Sol6=1568; //G
     int SolS_LaB=1661;   //R
 int La6=1760;  //A
     int LaS_SiB=1865;    //T
 int Si6=1975;  //B

 int Do7=2093;  //M
 int j;
switch (opcion)
{
    case 1:
    strcpy(cancion,notas_cucaracha);
    for (j=0; j<notas; j++)
    {
        tiempos[j]=duracion_cucaracha[j];
    }
    break;
    case 2:
    strcpy(cancion,noche_de_paz);
     for (j=0; j<notas; j++)
    {
        tiempos[j]=duracion_noche[j];
    }
    break;
    case 3:
    strcpy(cancion,estrellita);
     for (j=0; j<notas; j++)
    {
        tiempos[j]=duracion_est[j];
    }
    break;
    case 4:
    strcpy(cancion,himno_alegria);
     for (j=0; j<notas; j++)
    {
        tiempos[j]=duracion_alegria[j];
    }

    break;
    case 5:
    strcpy(cancion,cumple_feliz);
     for (j=0; j<notas; j++)
    {
        tiempos[j]=duracion_cumple[j];
    }

    break;

}

        for(i=0;i<notas;i++)

       {
        switch(cancion[i])
        {

         case 'c':
           printf("Do ");
           Beep(Do,tiempo*tiempos[i]);
         break;
         case 'd':
           printf("Re ");
           Beep(Re,tiempo*tiempos[i]);
         break;
         case 'e':
           printf("Mi ");
           Beep(Mi,tiempo*tiempos[i]);
         break;
          case 'f':
           printf("Fa ");
           Beep(Fa,tiempo*tiempos[i]);
         break;
          case 'g':
           printf("Sol ");
           Beep(Sol,tiempo* tiempos[i]);
         break;
          case 'a':
           printf("La ");
           Beep(La,tiempo*tiempos[i]);
         break;
         case 'b':
           printf("Si ");
           Beep(Si,tiempo*tiempos[i]);
         break;
         case 'C':
           printf("Do6 ");
           Beep(Do6,tiempo*tiempos[i]);
         break;

         case 'D':
           printf("Re6 ");
           Beep(Re6,tiempo*tiempos[i]);
         break;
         case 'E':
           printf("Mi6 ");
           Beep(Mi6,tiempo*tiempos[i]);
         break;
         case 'F':
           printf("Fa6 ");
           Beep(Fa6,tiempo*tiempos[i]);
         break;
         case 'G':
           printf("Sol6 ");
           Beep(Sol6,tiempo*tiempos[i]);
         break;
         case 'A':
           printf("La6 ");
           Beep(La6,tiempo*tiempos[i]);
         break;
          case 'B':
           printf("Si6 ");
           Beep(Si6,tiempo*tiempos[i]);
         break;

         case 'M':
           printf("Do7 ");
           Beep(Do7,tiempo*tiempos[i]);
         break;

         case 'q':
           printf("Do#_Reb ");
           Beep(doS_reB,tiempo*tiempos[i]);
         break;
         case 'w':
           printf("Re#_Mib ");
           Beep(reS_miB,tiempo*tiempos[i]);
         break;
         case 'i':
           printf("Fa#_Solb ");
           Beep(faS_solB,tiempo*tiempos[i]);
         break;
         case 'r':
           printf("Sol#_Lab ");
           Beep(solS_laB,tiempo*tiempos[i]);
         break;
         case 't':
           printf("La#_Sib ");
           Beep(laS_siB,tiempo*tiempos[i]);
         break;

         case 'W':
           printf("Do#_Reb6 ");
           Beep(DoS_ReB,tiempo*tiempos[i]);
         break;
         case 'I':
           printf("Re#_Mib6 ");
           Beep(ReS_MiB,tiempo*tiempos[i]);
         break;
         case 'R':
           printf("Sol#_Lab6  ");
           Beep(SolS_LaB,tiempo*tiempos[i]);
         break;
         case 'T':
           printf("La#_Sib6 ");
           Beep(LaS_SiB,tiempo*tiempos[i]);
         break;

         case '0':
            printf("\n");
            Sleep(tiempo*tiempos[i]);
            break;

         default:
            printf("No se encontro la nota\n");
        }
  }
  strcpy(cancion, vacio);   //copia los n primeros caracteres de una cadena en otra
  for (j=0; j<notas; j++)
    {
        tiempos[j]=tiempo_vacio[j];
    }
}

