#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int PrintInstr(int);
int GetRand(int);
void PrintStuff(int,int,int,int);

int main(void)
{

  int numLine;
  int num1;
  int num2;
  int num3;

  srand(time(NULL));
  int randNum;

  int i, j;

  numLine = PrintInstr(numLine);

  for (i = 0; i < numLine; i++)
  {
    num1 = GetRand(randNum);
    num2 = GetRand(randNum);
    if (num2 == num1)
    {
    num2 = GetRand(randNum);
    }
    num3 = GetRand(randNum);
    if (num3 == num1 || num2)
    {
    num3 = GetRand(randNum);
    }
    PrintStuff(i, num1, num2, num3);
  }
   return 0;
}//end main

int PrintInstr(int numLine)
{

  
  printf("How many lines would you like?\n");
  scanf(" %d", &numLine);
  printf("You would like %d lines.\n", numLine);
  
  return numLine;
}

int GetRand(int randNum)
{
  
  randNum = rand() % 52 + 1;
  
  return randNum;
}//end function

void PrintStuff(int i, int num1, int num2, int num3)
{

  printf("Set #%d: %2d %2d %2d\n", i+1, num1, num2, num3);

  return;
}//end function