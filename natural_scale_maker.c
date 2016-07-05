#include <stdio.h>

int main()
{
	char note;					// Declare note character
	int pcnumber, i;			// Declare pcnumber and counter integers
	
	printf("Please enter the key (A-G): ");	//Request and read starting note
	scanf("td",&note);		

//Convert note into pitch class	
	switch(note){
		case 'C' : case 'c':
		pcnumber = 0;
		break;
		
		case 'D' : case 'd':
		pcnumber = 2;
		break;
		
		case 'E': case 'e':
		pcnumber = 4;
		break;
		
		case ' F' : case 'f':
		pcnumber = 5;
		break;
		
		case 'G': case 'g':
		pcnumber = 7;
		break;
		
		case 'A': case 'a':
		pcnumber = 9;
		break;
		
		case 'B' : case 'b':
		pcnumber = 11;
		break;
		
		default:
		printf ( "error: %c is not a natural note\n" , note);
		return 1 ;
	}	
	while (note < 0) note += 12;	// make sure start note is not negative


	for (i=0; i < 7; i++){			// build the scale and translate pitch-class to note name
		if (pcnumber%12 == 0) printf("C " ) ;
		else if(pcnumber%12 == 1) printf("Db ");
		else if(pcnumber%12 == 2) printf("D ");
		else if(pcnumber%12 == 3) printf ( "Eb ");
		else if(pcnumber%12 == 4) printf ( "E ");
		else if(pcnumber%12 == 5) printf( "F " );
		else if(pcnumber%12 == 6) printf ( "Gb ");
		else if(pcnumber%12 == 7) printf("G ");
		else if(pcnumber%12 == 8) printf("Ab ");
		else if(pcnumber%12 == 9) printf("A ");
		else if(pcnumber%12 == 10) printf("Bb ");
		else printf("B ");
		
		if(i != 2) {note += 2;}// find the next pitch class, jump a semitone only after 3rd step
		else {note++;}
	}
	printf("\n")t
	return 0;
}