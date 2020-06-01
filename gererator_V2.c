#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*ptr1;
	size_t	l;

	l = strlen(s1);
	if ((ptr = (char *)malloc((l + 1) * sizeof(char))) == NULL)
		return (NULL);
	ptr1 = ptr;
	while (*s1 != '\0')
	{
		*ptr++ = *s1++;
	}
	*ptr = '\0';
	return (ptr1);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	char	*q;

	if (!s1 || !s2)
		return (NULL);
	if (!(p = (char*)malloc((strlen(s1) + strlen(s2) + 1)
		* sizeof(char))))
		return (NULL);
	q = p;
	while (*s1 != '\0')
		*p++ = *s1++;
	while (*s2 != '\0')
		*p++ = *s2++;
	*p = '\0';
	return (q);
}

// UPS: 1Z XXX XXX YY ZZZZ ZZZC

// 1Z 7F88F4 02 4
// 1Z7F88F4024xxxxxxx
// 1Z7F88F41341886xx9
// 1Z9W234A0340x11535

// https://t.17track.net/nl#nums=

/* 
california:
	1Z9W234A0340661535
	1Z9W234A0340611535

	1Z7F88F41341886329
	1Z7F88F41342098894
miami:
	1Z2RV706YW29181885
	1Z2RV706YW28555509
	
 */


/* void	print_random(char *tracking, int count)
{
	int i;
	int j;
	int num;
	int k = 0;

	for (i = 0; i < count; i++)
	{
		for (j = 0; j < strlen(tracking); j++)
		{
			if (tracking[k] != 'x')
				printf("%c", tracking[k]);
			else if (tracking[k] == 'x')
				printf("%d", rand() % 10);
			k++;
		}
		k = 0;
		if (i != count - 1)
		printf("\n");
	}
} */

// 18 number 

// 1Z XXX XXX YY ZZZZ ZZZC
// acount 2RV706  7F88F4   9W234A


void	gen_UPS()
{
	char		*tracking = ft_strdup("1Z");
	
	printf("0,%s| %d\n\n", tracking, (int)strlen(tracking));
	/*============== generate account number ============== */
	char		acc[3][6] = {"2RV706", "7F88F4", "9W234A"};
	int			acc_index = rand() % 3;
	char		*acc_value = acc[acc_index];
	//strcat(tracking, acc_value);
	tracking = ft_strjoin(tracking, acc_value);
	printf("1,%s| %d\n\n", tracking, (int)strlen(tracking));

	/*============== generate Service Codes ============== */
	char		SC[16][2] = {"01", "02", "03", "12", "13", "15", "22", "32", "33", "41", "42", "44", "66", "72", "78", "90" };
	int			SC_index = rand() % 16;
	char		*SC_value = SC[SC_index];
	//strcat(tracking, SC_value);
	tracking = ft_strjoin(tracking, SC_value);
	printf("2,%s| %d\n\n", tracking, (int)strlen(tracking));

	/*============== generate invoice number ============== */

}

void	check_type(int type)
{
	switch (type)
	{
		case 0: // All

		break;
		case 1:	// UPS
			gen_UPS();
		break;
		case 2: // Fedex

		break;
		case 3: // DHL

		break;

		default:
			printf("error\n");
		break;
	}
}

int		main(int ac, char **av)
{
	int		count;
	int		type;
	char	*tracking;
	char	*country;

	/* bach t9ra input dyal tracking ola bin ... */
	/* printf("0.All\n1.UPS\n2.Fedex\n3.DHL\nchno bghiti: ");
	scanf("%d", &type); */

	check_type(1);
	//printf("Country (ex: CN, FR, UK...): ");
	//scanf("%s", country);
	/* bach t9ra input dyal x7al bghiti t generi */
	/* printf("x7al bghiti t generi: ");
	scanf("%d", &count); */

	return 0;
}

