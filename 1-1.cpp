#include <stdio.h>
double conversion(int a, int b);
double calculate(double t);
int main()
{
	int h, m;
	double input1, input2;
	printf("��� �ð��� �Է��Ͻÿ�(�ð� ��):");
	scanf("%d %d", &h, &m);
	input1 = conversion(h, m);
	input2 = calculate(input1);
	printf("%d�ð� %d��(%.1lf �ð�) ����Ͽ� �µ��� ���� %.2lf���̴�.", h, m, input1, input2);
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