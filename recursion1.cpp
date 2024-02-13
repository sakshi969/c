#include <stdio.h>

int count = 0;

void func() {
   if (count == 3) return;
   printf("%d\n", count);
   count++;
   func();
}

int main() {
   func();
   return 0;
}