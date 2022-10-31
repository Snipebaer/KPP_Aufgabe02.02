int main() 
{
	int a, b, c, d;

	a = 0;	
	b = 2;
	c = 3;
	d = 4;

	a = (b + 2) * 2 * c + 1;

	a = ++b * d++ * ++c * (-1);

	printf("a: %d \n", a); //-48
	printf("b: %d \n", b); // 3
	printf("c: %d \n", c); // 4
	printf("d: %d \n", d); // 5

	return 0;
	
}
