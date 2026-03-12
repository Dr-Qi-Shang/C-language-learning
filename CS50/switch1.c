#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int year;
	double rate,capital,deposit;
	scanf("%d,%lf",&year,&capital);

	switch (year) {                      
	
	case 1:                       /* 加法运算 */
		rate = 0.0225;
		break;
	case 2:                      /* 减法运算 */
		rate = 0.0243;
		break;
	case 3:                    /* 乘法运算 */
		rate = 0.0270;
		break;
    case 5:
        rate = 0.0288;
        break;
    case 8:
        rate = 0.0300;
        break;
        default:printf("Error rate!");
        exit(0);
    }



	/***********End************/
	deposit = capital * pow(1+rate,year);
	printf("rate = %.6f, deposit = %.6f\n",rate,deposit);
	return 0;
}