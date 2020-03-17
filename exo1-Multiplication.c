#include <stdio.h>
#include <unistd.h>
#include <signal.h>


/* Fonction exécutée à la réception de SIGALRM */
void it_horloge(int sig)
{
  printf("Réception du signal %d : SIGALRM\n", sig);
}

int main()
{
  unsigned sec;
  int a = 0;
  int b = 0;
  int i = 0;
  int resultat = 0;
  
  while(1)
  {

    a = rand()%10;
    b = rand()%10;

    resultat = (a)*(b);
    printf("L'opération est : %d * %d\n", a, b);
    signal(SIGALRM, it_horloge);
    sec = alarm(5);
    printf("Entrer le resultat : ");
    scanf("%d", estime);
    pause();
    printf("Le résultat est : %d\n");

    if ((estime == resultat)&&(sec<5))
      {
        printf("Reponse correcte, 1 point de plus");
        i = i + 1;
      }
    else if((estime == resultat)&&(sec>5))
      {
        printf("Reponse correcte mais trop tard");
      }
    else
      {
        printf("Réponse fausse");
      }
    return 0;
    }
  }
