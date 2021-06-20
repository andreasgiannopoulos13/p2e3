#include <stdio.h>

int main (void)
{
	FILE *fp;
	double grd1, grd2, grd3, MO1, MO2 = 0; 
	char name1[20];
	int temp;
	fp = fopen("students.txt", "r");
	if(fp == NULL)
	{
		printf("Error.\n");
		return 0;
	}
	while(1)
	{
		temp = fscanf(fp,"%s%lf%lf%lf", name1, &grd1, &grd2, &grd3);
		if(temp != 4)
		   break;
		MO1 = (grd1 + grd2 + grd3)/3;
		if(MO1 > MO2 || MO1 == MO2)
		{
			printf("%s \n", name1);
			printf("%lf \n", MO1);
			MO2=MO1;
		}
    }
	fclose(fp);
	return 0;
}
