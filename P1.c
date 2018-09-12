//Sarah Luiza Martins Arantes
//11611EBI012
#include <stdio.h>


int main()
{
    int est=0, i=0, j=0;
    char bits[256];
	while (j>=0)
	{j=0;
		printf("Insira um numero para verificar se trata-se de um multiplo de 3: ");
	    scanf("%s", bits);
	    for (i=0; bits[i]!='\0'; i++)
	    {
	    	if (bits[i]!='0' && bits[i]!='1')
	    	j++;
		}
		j--;
	}
	for (i=0; bits[i]!='\0'; i++)
	{
		if (bits[i]=='0')
		{
			if (est==0)
				est=0;
			else if (est==2)
			    est=1;
			else
			    est=2;
		}
		else if (bits[i]=='1')
		{
			if (est==2)
			    est=2;
			else if (est==0)
			    est=1;
			else
			    est=0;
		}
	}
	if (est==0)
	    printf("\n%s e um multiplo de 3", bits);
	else
	    printf("\n%s nao e um multiplo de 3", bits);
    return 0;
}
