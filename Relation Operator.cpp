#include <stdio.h>

int main (){
	int t, angka1, angka2;
	scanf("%d",&t);

	for (int i=1;i<=t;i++)
	{
		scanf("%d %d",&angka1, &angka2);
		if (angka1 > angka2)
			{
				printf(">");
			}
		else if (angka1<angka2)
			{
				printf("<");
			}
		else{
				printf("=");
			}
		printf("\n");
	}
}
