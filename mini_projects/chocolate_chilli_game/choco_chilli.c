#include<stdio.h>
int main(){
  int player1, player2;
  printf("*************CHOCOLATE CHILLI GAME****************\n");
  int chocolate = 13;
  printf("total chocolate: 13\n");
  while (chocolate)
  {
    do
    {
      printf("choose the chocolate form 1 to 3: player1. \n");
      scanf("%d", &player1);
      chocolate = chocolate - player1;
      printf("chocolate remaining: %d\n", chocolate);
    } while (player1 <= 0 || player1 > 3);
    if (chocolate <= 0)
    printf("player 1 wins, player2 got chilli\n");
    do
    {
      printf("choose the chocolate form 1 to 3: player2. \n");
      scanf("%d", &player2);
      chocolate = chocolate - player2;
      printf("chocolate remaining: %d\n", chocolate);
    } while (player2 <= 0 || player2 > 3);
    if (chocolate <= 0)
    printf("player 2 wins, player1 got chilli\n");  
  }
}