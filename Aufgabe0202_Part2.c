int main() 
{
	int a, b, c, d;

	a = 0;	
	b = 2;
	c = 3;
	d = 4;

	a = (b + 2) * 2 * c + 1;

	a = ++b * d++ * ++c * (-1);

	printf("a: %d \n", a);
	printf("b: %d \n", b);
	printf("c: %d \n", c);
	printf("d: %d \n", d);

	return 0;
	
}
