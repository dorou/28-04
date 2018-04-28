#include <stdio.h>

int bit(int n);
int main(void) {
	int n;
	scanf("%i",&n);
	printf("Число: %d\n", n);
    printf("Количество вкл. битов: %d\n", bit(n));
	return 0;
}

int bit(int n)
{
	int s = 0;
	int i = 0;
	while(i<16)
	{
		if((1&n) == 1) {
		s++;
		}
		n>>=1;
		i++;
	}
	return s;
} 