#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float height,weight,BMI;
	printf("�п�J�z������(��쬰����):");
	scanf("%f",&height);
	printf("�п�J�z���魫(��쬰����):");
	scanf("%f",&weight);
	printf("= = = = = = = = = = = = = = = = = = = = = = =\n");
	BMI=weight/(height*height);
	printf("�z��BMI�Ȭ�:%1f\n",BMI);
	system("pause");
	return 0;
}
