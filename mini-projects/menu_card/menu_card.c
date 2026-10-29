#include<stdio.h>
int main(){
int choice, lists, qty, price, again, total = 0;

printf("*******************************************\n");
printf("|                ASCETO CAFE              |\n");
printf("*******************************************\n");
printf("                    MENU                   \n");
printf("_________________________________________\n\n");

printf("1.COFFEE DRINKS\n");
printf("2.SALADS\n");
printf("3.SOUPS\n");
printf("4.DESSERTS\n");
printf("\n5.Exit...\n");

printf("-----------------\n");
printf("Enter your choice: \n");
scanf("%d", &choice);
if(choice <1 || choice > 5){
printf("Choose the correct option.\n\n");
}
switch (choice)
{
case 1:
  printf("*********COFFEE DRINKS************\n\n");
  printf("1.Espresso     Rs.50/-\n");
  printf("2.Latte        Rs.60/-\n");
  printf("3.Long black   Rs.80/-\n");
  printf("4.Iced Coffee  Rs.55/-\n");
  printf("Enter the item: \n");
  scanf("%d", &lists);
       switch (lists)
       {
       case 1:
        printf("1.Espresso     Rs.50/-\n");
        break;
        case 2:
        printf("2.Latte        Rs.60/-\n");
        break;
        case 3:
        printf("3.Long black   Rs.80/-\n");
        break;
        case 4:
        printf("4.Iced Coffee  Rs.55/-\n");
        break;
        default:
        printf("Invalid item!\n");
        break;
       }
  break;
case 2:
printf("*********SALADS************\n\n");
printf("1.AVOCADO      Rs.40/-\n");
printf("2.CUCUMBER     Rs.55/-\n");
printf("3.CARROTS      Rs.60/-\n");
printf("4.MIXED        Rs.75/-\n");
printf("Enter the item: \n");
scanf("%d", &lists);
      switch (lists)
      {
      case 1:
        printf("1.AVOCADO      Rs.40/-\n");
        break;
      case 2:
        printf("2.CUCUMBER     Rs.55/-\n");
        break;
        case 3:
        printf("3.CARROTS      Rs.60/-\n");
        break;
        case 4:
        printf("4.MIXED        Rs.75/-\n");
        break; 
      default:
      printf("Invalid item!\n");
        break;
      }
  break;
case 3:
printf("*********Soups************\n\n");
printf("1.PUMPKIN      Rs.70/-\n");
printf("2.CARROT       Rs.65/-\n");
printf("3.CHICKEN      Rs.80/-\n");
printf("4.BUTTER       Rs.75/-\n");
printf("Enter the item: \n");
scanf("%d", &lists);
       switch (lists)
      {
      case 1:
        printf("1.PUMPKIN      Rs.70/-\n");
        break;
        case 2:
        printf("2.CARROT       Rs.65/-\n");
        break;
        case 3:
        printf("3.CHICKEN      Rs.80/-\n");
        break;
        case 4:
        printf("4.BUTTER       Rs.75/-\n");
        break; 
      default:
      printf("Invalid item!\n");
        break;
      }
  break;
case 4:
printf("*********DESSERTS************\n\n");
printf("1.CHOCOLATE CHEESECAKE  Rs.60/-\n");
printf("2.BANANA BAOT PIE       Rs.45/-\n");
printf("3.STRAWBERRY PUDDING    Rs.55/-\n");
printf("4.BROWNIE GELATO        Rs.45/-\n");
printf("Enter the item: \n");
scanf("%d", &lists);
       switch (lists)
      {
      case 1:
        printf("1.CHOCOLATE CHEESECAKE  Rs.60/-\n");
        break;
        case 2:
        printf("2.BANANA BAOT PIE       Rs.45/-\n");
        break;
        case 3:
        printf("3.STRAWBERRY PUDDING    Rs.55/-\n");
        break;
        case 4:
        printf("4.BROWNIE GELATO        Rs.45/-\n");
        break; 
      default:
      printf("Invalid item!\n");
        break;
      } 
      
default:
  break;
}


}




