# Lab_6_dz
Домашняя работа к лабораторной работе №6

# Задание №1

# Условие задачи
<img width="801" height="57" alt="image" src="https://github.com/user-attachments/assets/8c0ad334-b512-4c6a-b429-0e5b1a86f2be" />

# Блок-схема
<img width="598" height="531" alt="Lab_6_dz drawio" src="https://github.com/user-attachments/assets/c75175b4-1f02-415e-92f7-451873fc2b21" />

# Реализация программы
```
#include<stdio.h>
#include<locale.h>

int main()
{
	int x;
	setlocale(LC_ALL, "RUS");
	puts("Введите четырёхзначное число x");
	scanf("%d", &x);
	if ((x % 10 == x / 1000 ) && (x % 100 / 10 == x % 1000 / 100 )) {
		printf("Число %d - перевёртыш", x);

	}
	else {
		printf("Число %d - не перевёртыш", x);
	}

	return 0;
}
```

# Результат программы
<img width="1098" height="178" alt="image" src="https://github.com/user-attachments/assets/413ea3b2-d989-403c-820f-6fdcc45ce83b" />

# Задание 2

# Условие задачи
<img width="420" height="317" alt="image" src="https://github.com/user-attachments/assets/18c0963f-f79b-47c9-ac10-c2afcf74cbd3" />

# Блок-схема
<img width="651" height="556" alt="Lab_6_dz_2_ drawio" src="https://github.com/user-attachments/assets/92c1609e-34ef-4f95-9de1-fae8f48327b7" />


# Реализация программы
```
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
	double x, y;

	setlocale(LC_ALL, "RUS");
	puts("Введите координату x");
	scanf("%lf", &x);
	puts("Введите координату y");
	scanf("%lf", &y);

	if (((x >= -2 && x <= 12) && (y >= 2 && y <= 5)) ||
		((x >= -2 && x <= 4) && (y >= -2 && y <= 2)) ||
		((x >= -9 && x <= 4) && (y >= -5 && y <= -2))) {

		printf("Точка с координатами x = %lf, y = %lf, пренадлежит заданной области", x, y);
	}
	else {
		printf("Точка с координатами x = %lf, y = %lf, не пренадлежит заданной области", x, y);
	}


	return 0;

}
```

# Результат программы 
<img width="1102" height="207" alt="image" src="https://github.com/user-attachments/assets/cafec1ec-140a-43b4-bedd-93d07d1cfbe4" />






