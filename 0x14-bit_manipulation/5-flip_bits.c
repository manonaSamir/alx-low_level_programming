/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: starting
 * @m: target
 *
 * Return: number bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int target, num_bit = 0;

	target = n ^ m;
	while (target)
	{
		num_bit += target & 1;
		target >>= 1;
	}
	return (num_bit);
}
