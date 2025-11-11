#include<stdio.h>
#include<locale.h>

int main()
{
	int x;
	setlocale(LC_ALL, "RUS");
	puts("¬ведите четырЄхзначное число x");
	scanf("%d", &x);
	if ((x % 10 == x / 1000 ) && (x % 100 / 10 == x % 1000 / 100 )) {
		printf("„исло %d - перевЄртыш", x);

	}
	else {
		printf("„исло %d - не перевЄртыш", x);
	}

	return 0;
}
