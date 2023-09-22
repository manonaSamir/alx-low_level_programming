char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int nm1, nm2, res, loop, carry, sum;

	for (nm1 = 0; n1[nm1]; nm1++)
		;
	for (nm2 = 0; n2[nm2]; nm2++)
		;
	if (nm1 > size_r || nm2 > size_r)
		return (0);
	carry = 0;
	for (nm1 -= 1, nm2 -= 1, res = 0; res < size_r - 1; nm1--, nm2--, res++)
	{
		sum = carry;
		if (nm1 >= 0)
			sum += n1[nm1] - '0';
		if (nm2 >= 0)
			sum += n2[nm2] - '0';
		if (nm1 < 0 && nm2 < 0 && sum == 0)
		{
			break;
		}
		carry = sum / 10;
		r[res] = sum % 10 + '0';
	}
	r[res] = '\0';
	if (nm1 >= 0 || nm2 >= 0 || carry)
		return (0);
	for (res -= 1, loop = 0; loop < res; res--, loop++)
	{
		carry = r[res];
		r[res] = r[loop];
		r[loop] = carry;
	}
	return (r);
}