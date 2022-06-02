#include <stdio.h>
#include <time.h>
void GetDateTime(void);

int main()
{
	printf("Before the GetDateTime() function is called.\n");
	GetDateTime();
	printf("After the GetDateTime() function is called.\n");
	return 0;
}

/* GetDateTime() definition */
void GetDateTime(void)
{
	time_t now;
	int i;
	char *str;

	printf("Within GetDateTime().\n");
	time(&now);
	str = asctime(localtime(&now));
	for (i = 0; str[i] != '\0'; i++)
		printf("%c", str[i]);
}
