/**
 * main - multiplies two numbers
 * @argc: counts the arguments.
 * @argv: string array for the arguments entered
 *
 * Return: 0 (Sucess) else 1 (Failure).
 */

int main(int argc, char *argv[])
{
int i, sum = 1;
if (argc > 2)
{
printf("Error\n");
return (1);
}
for (i = 1; i < argc; i++)
sum *= *argv[i];
printf("%d\n", sum);
return (0);
}
