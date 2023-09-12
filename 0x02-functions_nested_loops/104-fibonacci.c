#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 * Return: Nothing!
 */
int main(void)
{
int count, overflow;
unsigned long a = 1, b = 1, sum = 0;
long small_head, small_tail, large_head, large_tail, sum_head, sum_tail;
printf("1");
for (count = 2; count < 93; count++)
{
sum = a + b;
a = b;
b = sum;
printf(", %lu", sum);
}
small_head = a / 1000000000;
small_tail = a % 1000000000;
large_head = b / 1000000000;
large_tail = b % 1000000000;
for (; count < 99; count++)
{
overflow = (small_tail + large_tail) / 1000000000;
sum_tail = (small_tail + large_tail) -(1000000000 * overflow);
sum_head = (small_head + large_head) +overflow;
printf(", %lu%lu", sum_head, sum_tail);
small_head = large_head;
small_tail = large_tail;
large_head = sum_head;
large_tail = sum_tail;
}
printf("\n");
return (0);
}
