#include <stdio.h>
#include <string.h>

int main()
{
 typedef struct player
 {
  char name[30]; // Increased size to accommodate longer names
  int run;
  int century;
  float strike_rate;
 } player;

 player arr[4] = {
     {"Rohit Sharma", 17000, 48, 148.33},
     {"Virat Kohli", 25000, 81, 128.22},
     {"Kane Williamson", 15000, 45, 129.83},
     {"Joe Root", 19000, 46, 118.33}};

 for (int i = 0; i < 4; i++)
 {
  puts(arr[i].name); // Print the player's name
  printf("Century = %d\n", arr[i].century);
  printf("Run = %d\n", arr[i].run);
  printf("Strike Rate = %.2f\n", arr[i].strike_rate);
  printf("\n");
 }

 return 0;
}
