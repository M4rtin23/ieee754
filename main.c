#include <bitarray.h>
#include <stdio.h>

void print_8_hexadecimals(int value){
		print_hexadecimal(value>>24);
		print_hexadecimal(value>>16);
		print_hexadecimal(value>>8);
		print_hexadecimal(value);
}

void print_32_bits(int value){
		print_bitarray(value>>24);
		print_bitarray(value>>16);
		print_bitarray(value>>8);
		print_bitarray(value);
}

int main(int argc, char *argv[]){
	float a;
	sscanf(argv[1], "%f", &a);

	printf("DEC:\t%f\n", a);

	printf("HEX:\t");
	print_8_hexadecimals(* (int *) &a);

	printf("\nBIN:\t");
	print_32_bits(* (int *) &a);

	printf("\n");

	return 0;
}
