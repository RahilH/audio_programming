#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Main()
{
	//Declare variables
	double semitoneRatio;	// To store the value of the 12th root of 2
	double C0;				// To store the frequency of MIDI note C0
	double C5; 				// To store the frequency of MIDI note C5
	double frequency;		// To store the frequency of inputted MIDI note
	char message[256];		// To store user input
	char* result; 
	int midinote;
	
	// Calculate required numbers
	semitoneRatio = pow(2, 1/12.0); 	// Approximately 1.0594631
	C5 = 220.0 * pow(semitoneRatio, 3);	// Find middle C given that low A = 220 Hz
	C0 = C5 * pow(0.5,5);				// Find MIDI note 0 using middle C
	
	//Request user input for MIDI note
	printf("\n Please enter a MIDI note (0 - 127): ");
	result = gets(message);
	midinote = atoi(message);
	
	//Check input and carry out function accordingly
	if(result == NULL)
	{
		printf("There was an error reading the input.\n");
		return 1;
	}
	
	if(0 <= midiNote <= 127) 
	{
		frequency = C0 * pow(semitoneRatio, midiNote)
		printf("MIDI note %d has a frequency %f\n", midiNote, frequency); 
		return 0;
	}
	else 
	{
		printf("Inputted MIDI note is out of range")
		return 0;
	}
}