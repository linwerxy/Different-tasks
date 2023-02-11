#include <math.h>
#include <stdio.h>

int a, b, c;

int T(int x)
{
	return a * pow(x, 2) + b * x + c;
}

int main()
{	
	int d1_0, d2_1, delta_2, tmp_delta, ans;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	ans = T(2);
	d1_0 = T(1) - T(0);
	d2_1 = ans - T(1);
	delta_2 = -d1_0 + d2_1;
	tmp_delta = d2_1;
	

	for (int i = 3; i <= 100; i++) 
	{
		tmp_delta = tmp_delta + delta_2;
		ans = ans + tmp_delta;
		printf("%d) %d ", i, ans);
		printf("%d\n", T(i));
	}
	

	return 0;
}
