#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc,char* argv[]){
  char *str[] = {"Heads","Tails"};
  int i,x = 0,y = 0;

  srand(time(NULL));
  printf("Tossing a coin...\n");
  for(i = 0 ; i < 3 ; i++){
    if(rand()%2 == 0){
      printf("Round %d: %s\n",i,str[0]);
      x++;
    }
    else{
      printf("Round %d: %s\n",i,str[1]);
      y++;
    }
  }
  printf("Heads: %d, Tails: %d\n",x,y);

  return 0;
}
