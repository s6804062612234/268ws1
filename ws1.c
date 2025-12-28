#include <stdio.h>


int main() {
   int num1, num2, num3, num4, highest, second;
   scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    
   (num1 > num2)?(second = num2, highest = num1):
                  (second = num1, highest = num2);
   (num3 > highest)?(second = highest, highest = num3):
                  (second = (num3 > second?num3: second));
   (num4 > highest)?(second = highest, highest = num4):
                  (second = (num4 > second?num4: second));
   
   printf("%d", second);
   return 0;
}
