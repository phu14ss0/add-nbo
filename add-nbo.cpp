#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <netinet/in.h>

int main(int argc, char* argv[])
{
	uint32_t d1, d2, result;

	FILE *fp1 = fopen(argv[1], "rb");
	FILE *fp2 = fopen(argv[2], "rb");

	fread(&d1, sizeof(d1), 1, fp1);
	fread(&d2, sizeof(d2), 1, fp2);

	d1 = ntohl(d1);
	d2 = ntohl(d2);
	result = d1+d2;
	printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", d1, d1, d2, d2, result, result);

	fclose(fp1);
	fclose(fp2);

	return 0;
}	
