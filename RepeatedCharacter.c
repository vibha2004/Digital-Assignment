#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int i, j, len, count = 0, flag = 0, repeatFlag = 0;
  char *ptr, *ptr2;
  
  printf("Enter a string: ");
  scanf("%s", str);

  
  ptr = str;
  while (*ptr != '\0') {
    ptr++;
  }
  len = ptr - str;
  printf("Length of the string is: %d\n", len);

 

 
  int letterCount = 0;
  char letters[26] = {0};
  ptr = str;
  while (*ptr != '\0') {
    if (*ptr >= 'a' && *ptr <= 'z') {
      if (letters[*ptr - 'a'] == 0) {
        letterCount++;
        letters[*ptr - 'a'] = 1;
      }
    }
    ptr++;
  }
  printf("Total number of letters in word without repetition: %d\n", letterCount);

  
  for (i = 0; i < len; i++) {
    repeatFlag = 0;
    for (j = i + 1; j < len; j++) {
      if (*(str + i) == *(str + j)) {
        printf("First repeated character is: %c\n", *(str + i));
        repeatFlag = 1;
        break;
      }
    }
    if (repeatFlag) {
      break;
    }
  }
  if (!repeatFlag) {
    printf("No repeated characters found in the string.\n");
  }

  
  for (i = 0; i < len; i++) {
    flag = 0;
    ptr = str + i + 1;
    while (*ptr != '\0') {
      if (*(str + i) == *ptr) {
        flag = 1;
        break;
      }
      ptr++;
    }
    if (!flag) {
      printf("First non-repeated character is: %c\n", *(str + i));
      break;
    }
  }

  return 0;
}
