/* fgets */

#include <stdio.h>

int main()

{

char from_a_txt[30];
char from_a_txt2[30];

FILE *file_pointer;
file_pointer=fopen("a.txt", "r");

fscanf(file_pointer, "%s" from_a_txt);
printf("�о�� �κ� : %s \n", from_a_txt);

fgets(from_a_txt2, 30, file_pointer);
printf("�о�� �κ� : %s \n", from_a_txt2);

fclose(file_pointer);

return 0;

}

// https://desire-with-passion.tistory.com/169