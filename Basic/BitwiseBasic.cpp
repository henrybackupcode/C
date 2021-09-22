#include <stdio.h>>

void printBits( int a ) {
	for ( int n = 31 ; n >= 0; n-- ) {
		printf("%d", a>>n & 1 );
	} // for
	
	printf("%\t -> %d\n", a);
} // printBits

void printBitsUnsign( int a ) {
	for ( int n = 31 ; n >= 0; n-- ) {
		printf("%d", a>>n & 1 );
	} // for
	
	printf("%\t -> %u\n", a);
} // printBits

int main(){
	int n1 = 45;
	//	printBits(n1);
	//	printBits(n1>>1);

	// set the 5th bit from right to 1?
	// mask
	int mask = 1 << 4;
	n1 |= mask;
	printBits(n1);
	
	//set the 3rd bit from right to 0
	mask = ~(1<<2);
	n1 &= mask;
	printBits(n1); 
	
	// toggle the 3rd bit from right
	mask = 1 << 2;
	n1 ^= mask;
	printBits(n1); 
	
	unsigned int n3 = 4294967251;
	//	printBitsUnsign(n3);
	return 0;
} // int main
