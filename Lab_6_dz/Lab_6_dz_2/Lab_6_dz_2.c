#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	double x, y;

	setlocale(LC_ALL, "RUS");
	puts("¬ведите координату x");
	scanf("%lf", &x);
	puts("¬ведите координату y");
	scanf("%lf", &y);

	if (((-2 <= x <= 12) && (2 <= y <= 5)) || ((-2 <= x <= 4 ) && (-2 <= y <= 2 )) || ((-9 <= x <= 4) && (-5 <= y <= -2))) {
		printf("“очка с координатами x = %lf, y = %lf, пренадлежит заданной области");
	}
	else {
		printf("“очка с координатами x = %lf, y = %lf, не пренадлежит заданной области");
	}


	return 0;

}