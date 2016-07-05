#include <stdio.h>

int nameToPc(char name){	// this function implements translation
	switch(name){
		case 'C': case 'c':
		return 0;
		
		case 'D': case 'd':
		return 2;
		
		case 'E' : case 'e' :
		return 4;
		
		case 'F' : case 'f' :
		return 5;
		
		case 'G' : case 'g' :
		return 7;
		
		case 'A': case 'a':
		return 9;
		
		case 'B': case 'b':
		return 11;
		
		default: /* error code */
		return 100;
	}
}

int main( ) {
	char notel, note2; 					/* declare note names */
	int pcl, pc2, interval; 			/* declare pitch classes, interval */
	printf("Please enter two natural notes.\nFirst note: ");
	scanf("%c",&note1);
	printf("Second note: ");
	scanf("%c",&note2);
	
	/* to calculate the interval, we call nameToPcO to translate */
	interval = nameToPc(note2) - nameToPc(note1) ;
	if(interval > 20 || interval < -11) {
		printf("either Ec or 8c are invalid notes\n", note1. note2);
		return 1;
	}
	if(interval < 0) interval += 12;
	else if (interval > 11) interval) -= 12;
	printf("%d semitones up or %d semitones down\n", interval, interval ? l2-interval : 0 );
	return 0;
}
