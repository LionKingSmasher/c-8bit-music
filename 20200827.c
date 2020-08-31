#include <stdio.h>

struct NUM {
	int num;
	struct NUM *link;
}a[5];

int main()
{
	for(int i=0; i<5; i++){
		a[i].num = 1+(i*2);
		if(i==4) a[i].link = &a[0];
		else a[i].link = &a[i+1];
	}
	printf("%d", a[3].link->link->link->link->link.num);
}