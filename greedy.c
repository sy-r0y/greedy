/*
 * Program to implement the Greedy Algorithm.
 */

#include<stdio.h>
#include<math.h>

#define CENT 1
#define PENNY (1*CENT)
#define NICKEL (5*CENT)
#define DIME (10*CENT)
#define QUARTER (25*CENT)
#define DOLLAR (100*CENT)
  
int greedy(int,int);
int main(int argc,char *argv[]) {

  int coins=0;
  float owe;
  do{
    printf("\nMoney Owed:- ");
    scanf("%f",&owe);
      //    owe=GetFloat();
  }while(owe<=0);
  int centsowed=(int)(round((100*owe))); //Convert the money owed to equivalent amount in cents.

  printf("Total Coins: %d",greedy(centsowed,coins));
  return 0;
}
int greedy(int owe,int coins) {
  /* 
   * Proceed by deducting the maximum amount that can be deducted from the money owed.
   * So try with the highest denomination down to the lowest. 
  */
  while(owe>=DOLLAR) { 
    coins++;
    owe=owe-DOLLAR;
  }
  while(owe>=QUARTER) {
    coins++;
    owe=owe-QUARTER;
  }
  while(owe>=DIME) {
    coins++;
    owe=owe-DIME;
  }
  while(owe>=NICKEL) {
    coins++;
    owe=owe-NICKEL;
  }
  while(owe>=PENNY) {
    coins++;
    owe=owe-PENNY;
  }
  return coins;
}
