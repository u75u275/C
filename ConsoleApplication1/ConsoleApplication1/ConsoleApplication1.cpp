#include <stdio.h>
/* печать таблицы температур по ‘аренгейту
и ÷ельсию дл€ fahr = 0, 20, ..., 300 */
int main()
{
	int fahr, celsius;
	int lower, upper, step;
	lower = 0; /* нижн€€ граница таблицы температур */
	upper = 300; /* верхн€€ граница */
	step = 20; /* шаг */
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
  