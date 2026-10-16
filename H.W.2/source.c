#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_CTYPE, "RUS");

	//задание конкретных значений переменных
	int h = 100;
	int A = 1;
	float k = 0.1f;

	//вычисление пути по склону
	float S1 = h / sin(A);

	//вычисление пути после горки
	float S2 = h / k * (1 - k * (cos(A) / sin(A)));

	//вычисление всего пути
	float total_S = S1 + S2;

	printf("РАСЧЕТ ПУТИ, ПРОЙДЕННОГО САНКАМИ\n");
	printf("================================\n\n");
	printf("УСЛОВИЯ:\n");
	printf("- Высота горки: %d метров.\n", h);
	printf("- Угол наклона: %d радиан.\n", A);
	printf("- Коэффициент трения: %.2f.\n\n",k);
	printf("РАСЧЕТЫ:\n");
	printf("- Путь по склону: %d / sin(%d) = %.2f метров.\n", h, A, S1);
	printf("- Путь после горки: %d / %.2f * (1 - %.2f * ctg(%d)) =  %.2f метров.\n", h, k, k, A, S2);
	printf("================================\n");
	printf("ОБЩИЙ ПУТЬ: %.2f МЕТРОВ.", total_S);

	return 0;
}