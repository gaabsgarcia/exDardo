#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");
  int a, b, x, y, r;

  printf("Vamos jogar dardos!\n\n");

  printf("Segue as instruções do jogo: \n"
         "1º Você deverá utilizar a ilustração (sendo ela uma representação do jogo real);\n"
         "2º Alternar entre jogadores para lançar os dados ao alvo;\n"
         "3º Apos o lançamento traçar as coordenadas 'x' e 'y';\n"
         "4º Inserir no programa para calcular e obter a pontuação do jogo.\n\n");

  printf("Insira as coordenadas de 'x' e 'y':\n ");
  scanf(" %d %d", &a, &b );

  x= pow(a,2);
  y= pow(b,2);
  r= x+y;
  r= sqrt(r);

  printf("Temos quatro possibilidades de pontuação:/n "
         "1º O dardo não atingir alvo (0 pontos);\n"
         "2º O dardo atingir o alvo externo (1 pontos);\n"
         "3º O dardo atingir o alvo central (5 pontos);\n"
         "4º O dardo atingir o alvo interno (10 pontos).\n\n");

  printf("Que a melhor pontaria vença!\n"
         "Boa sorte.\n");

  if (r>=5.01 && r<=10)
        {
        printf("Seu resultado é de: 1 pontos.");
        return 0;
        }
  else {
        if (r>=1.01 && r<=5)
            {
            printf("Seu resultado é de: 5 pontos.");
            return 0;
            }
        else {
            if(r>=0 && r<=1)
                {
                printf("Seu resultado é de: 10 pontos.\n"
                       "Parabéns, atingiu a pontuação mais alta.");
                return 0;
                }
            else{
                printf("Seu resultado é de: 0 pontos.\n"
                       "Tente novamente!");
                return 0;
                }
              }
  }


  return 0;
}
