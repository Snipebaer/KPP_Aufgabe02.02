int main() 
{
	int a, b, c, d;
	b = 5;

	a = b / 2;
	c = b % 2;
	d = b << a;
	b = 1 - --b;



	b *= -3;
	d %= 3;
	c += b * d +4;
	a = --b + d++;

	printf("a: %d \n", a); // 10
	printf("b: %d \n", b); // 8
	printf("d: %d \n", d); // 3

	return 0;
	
}
