#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
printf("THIS IS A SIMPLE CLASSIC DICE GAME\n\n");
srand(time(NULL));
int np,nt,scores[50],winner;
printf("How many players :");
scanf("%d",&np);
printf("How many times you want to roll the die :");
scanf("%d",&nt);
for(int i=0;i<np;i++){
scores[i]=eachturn(nt);
if(i!=np-1)
printf("\nyour turn is  over  now  it's  your  friend's\n");

}
     // highest score
for(int i=0;i<np-1;i++){
   for(int j=i+1;j<np;j++){
      if(scores[i]>scores[j]){
         int temp=scores[i];
         scores[i]=scores[j];
         scores[j]=temp;
        }
    }
}
printf("____________________________________");
printf("\n\n  the person who got %d is winner",scores[np-1]);
printf("\n____________________________________\n");
printf("\nHOPE YOU ENJOYED THE GAME :)\n\n");
return 0;

}
int eachturn(int x)
{
char *p;
int totalscore=0,score;
for(int i=0;i<x;i++){
  printf("\npress any key and enter to roll the dice :");
  scanf("%s",p);
  
  printf("");
  score =rand()%6+1;
  printf("\nyour score is :%d\n",score);
  totalscore += score;
  }
printf("\n\n   ****your total score is %d**** \n\n",totalscore);
return totalscore;
}













    