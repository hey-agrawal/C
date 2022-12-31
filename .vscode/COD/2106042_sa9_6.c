#include<stdio.h>

int main() {
  char str[20], *pt;
  int i = 0, c = 0;
  printf("Count Vowels In String \n");
  printf("\nEnter Any string in small [below 20 chars] : ");
  gets(str);
  pt = str;
  while (*pt != '\0') {
    if (*pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o'||  *pt == 'u')
      c++;
    i++;
    pt++;
  }
  printf("\nVowels Count In the String : %d", c);
  

  return 0;
}