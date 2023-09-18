#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Program that generates random valid passwords
 * Return: 0 if works
 */

int main(void)
{
char array[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char password[100];
srand(time(NULL));
int sum = 0, i;
for (i = 0; sum < (2772 - 122); i++)
{
r = rand() % 62;
password[i] = array[r];
sum = sum + password[i];
i++;
}
r = 2772 - sum;
password[i] = r;
printf("%c", password);
return (0);
}
