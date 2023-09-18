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
int i, random, checksum;
checksum = 2772;
for (i = 0; checksum > 100; i++)
{
random = (rand() % 100);
printf("%c", random);
checksum -= random;
i++;
}
printf("%c", checksum);
return (0);
}
