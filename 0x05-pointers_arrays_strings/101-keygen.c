#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *generate_password(void)
{
static char password[7];
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int i;

srand(time(NULL));

for (i = 0; i < 6; i++) {
int index = rand() % (sizeof(charset) - 1);
password[i] = charset[index];
}

password[6] = '\0';

return password;
}

int main(void)
{
char *password = generate_password();
printf("%s\n", password);

return 0;
}

