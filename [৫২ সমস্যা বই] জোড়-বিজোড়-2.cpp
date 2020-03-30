#include<stdio.h>
#include<string.h>

int main()

{
	char num[101];
	int i,n,b,j;
	scanf("%d", &n);
	//while (n--)
	for (i=0; i<n;i++){
		scanf("%s", &num);
		j= strlen(num);
		b = num[j-1];
		
		if (b%2 == 0){
			printf("even\n");
		}
		else{
			printf("odd\n");
		}
	}
	return 0;
}
