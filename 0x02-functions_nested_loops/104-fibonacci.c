#include <stdio.h>
#include <gmp.h>

int main(void)
{
	mpz_t a, b, next;
	mpz_init(a);
	mpz_init_set_ui(b, 1);
	mpz_init_set_ui(next, 2);

	printf("%s, %s", mpz_get_str(NULL, 10, a), mpz_get_str(NULL, 10, b));

	for (int count = 2; count < 98; count++)
	{
		mpz_add(next, a, b);
		printf(", %s", mpz_get_str(NULL, 10, next));

		mpz_set(a, b);
		mpz_set(b, next);
	}

	printf("\n");

	mpz_clear(a);
	mpz_clear(b);
	mpz_clear(next);

	return 0;
}
