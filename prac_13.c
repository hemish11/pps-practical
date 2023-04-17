#include <stdio.h>

void main()
{
	printf("===============================");
	printf("\n\tPay Slip");
	printf("\n===============================\n\n");

	float basic, da, hra, ma, pf, gross;

	printf("Enter Basic Amount : ");
	scanf("%f", &basic);

	da = basic * 0.1;
	hra = basic * 0.075;
	ma = 300;
	pf = basic * 0.125;
	gross = basic + da + hra + ma;

	printf("\n_____________________________\n");
	printf("\n Basic = %.2f", basic);
	printf("\n Da    = %.2f", da);
	printf("\n Hra   = %.2f", hra);
	printf("\n Ma    = %.2f", ma);
	printf("\n Pf    = %.2f", pf);
	printf("\n Gross = %.2f", gross);
	printf("\n Nt    = %.2f", gross - pf);
	printf("\n_____________________________\n\n");
}
