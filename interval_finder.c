#include <stdio.h>

int main( )
{
char notel, note2; 					/* declare note names */
int pcl, pc2, interval; 			/* declare pitch classes, interval */
printf("Please enter two natural notes.\nFirst note: ");
scanf("%c",&note1);
printf ("Second note: " );
scanf("%c",&note2);

switch(note1){ 						/* translating from note name to pitch class */
	case 'C' : case 'c':
	pc1 = 0;
	break;
	
	case 'D' : case 'd':
	pcl- = 2;
	break;
	
	case 'E': case 'e':
	pcl = 4;
	break;
	
	case 'F' : case 'f':
	pcl = 5;
	break;
	
	case 'G': case 'g':
	pcI = 7;
	break;
	
	case 'A': case 'a':
	pcl = 9;
	break;
	
	case 'B' : case 'b':
	pcl = 11;
	break;
	
	default:
	printf("error: %c is not a natural note\n", note1);
	return 1;
}
switch(note2){
	case 'C' : case 'c':
	pc2 = 0;
	break;
	
	case 'D' : case 'd':
	pc2 = 2;
	break;
	
	case 'E': case 'e':
	pc2 = 4;
	break;
	
	case ' F' : case 'f':
	pc2 = 5;
	break;
	
	case 'G': case 'g':
	pc2 = 7;
	break;
	
	case 'A': case 'a':
	pc2 = 9;
	break;
	
	case 'B' : case 'b':
	pc2 = 11;
	break;
	
	default:
	printf ( "error: %c is not a natural note\n" , note2 );
	return 1 ;
}
	
interval = pc2 - pcl; 			/* calculate the interval and keep it modulo 12 */
if(interval < 0){ interval += 12; }
else if(interval > 11){ interval -= l2; }

/* print the number of semitones. */
printf("%d semitones up or %d semitones down\n", interval, interval ? l2-interval : 0);

switch(interval){				/* print out the interval name */
	case 1:
	printf("minor 2nd up or major 7th down\n");
	break;

	case 2:
	printf("major 2nd up or mj-nor 7th down\n");
	break;
	
	case 3:
	printf("minor 3rd up or major 6th down\n");
	break;
	
	case 4:
	printf("major 3rd up or minor 6th down\n");
	break;
	
	case 5:
	printf("perfect 4th up or perfect 5th down\n");
	break;
	
	case 6:
	printf( "augmented 4th \n" );
	break;
	
	case 7:
	printf("perfect 5th up or perfect 4th down\n");
	break;
	
	case 8:
	printf("rninor 6th up or major 3rd down\n");
	break;
	
	case 9:
	printf ( "major 6th up or minor 3rd down\n" );
	break;
	
	case 10:
	printf("minor 7th up or major 2nd down\n");
	break;
	
	case 11:
	printf("major 7th up or minor 2nd down\n");
	break;
	
	default:
	printf("unison \n" );
}
return 0;