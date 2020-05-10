#include <stdio.h>
double conversion(int a, int b);
double calculate(double t);
int main()
{
	int h, m;
	double input1, input2;
	printf("경과 시간을 입력하시오(시간 분):");
	scanf("%d %d", &h, &m);
	input1 = conversion(h, m);
	input2 = calculate(input1);
	printf("%d시간 %d분(%.1lf 시간) 경과하여 온도는 섭씨 %.2lf도이다.", h, m, input1, input2);
}
double conversion(int a, int b)
{
	double t;
	t = a + (b / 60.0);
	return t;
}
double calculate(double a)
{
	double T;
	T = ((4 * a * a) / (a + 2)) - 20;
	return T;
}