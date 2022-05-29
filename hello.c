#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
  printf("Hello, World!\n");
  char str [] = "256";
  char str2 [] = "2.56";

  int value = atoi(str);
  float value2 = atof(str2);

  printf("%d", value);
  printf("%f", value2);

  char str3 [10];
  strcpy(str3, "Wai\n");
  printf("%s", str3);

  char str4 [15] = "unko";
  char str5 [] = "tachi";

  strcat(str4, str5);
  printf("%s", str4);

  char str6[20];
  char str7[] = "Hello";
  char str8[] = "World";

  int i =4;
  sprintf(str6, "%s%s%d", str7, str8, i);
  printf("%s", str6);

  char str9[256];
  scanf("%s", str9);
  int i2;
  i = strlen(str9);
  printf("%d", i);


  return 0;
}
