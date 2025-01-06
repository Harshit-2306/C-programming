#include <stdio.h>
#include <string.h>
int main()
{
 typedef struct player
 {
  char name[15];
  int run;
  int century;
  float strike_rate;
 } player;
 player arr[4];

 strcpy(arr[0].name, "Rohit Sharma");
 arr[0].century = 48;
 arr[0].run = 17000;
 arr[0].strike_rate = 148.33;

 strcpy(arr[1].name, "Virat Kohli");
 arr[1].century = 81;
 arr[1].run = 25000;
 arr[1].strike_rate = 128.22;

 strcpy(arr[2].name, "Kane Williamson");
 arr[2].century = 45;
 arr[2].run = 15000;
 arr[2].strike_rate = 129.83;

 strcpy(arr[3].name, "joe root");
 arr[3].century = 46;
 arr[3].run = 19000;
 arr[3].strike_rate = 118.33;

 for (int i = 0; i < 4; i++)
 {
  //printf("%s\n", arr[i].name);
  puts(arr[i].name);
  printf("century = %d\n", arr[i].century);
  printf("run = %d\n", arr[i].run);
  printf("strike_rate = %f\n", arr[i].strike_rate);
  printf("\n\n");
 }
 return 0;
}