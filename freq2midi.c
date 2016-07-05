#include <stdio.h>
#include <math.h>

int Main()
{
	//Declare variables
	double semitoneRatio;	// To store the value of the 12th root of 2
	double C0;				// To store the frequency of MIDI note C0
	double C5; 				// To store the frequency of MIDI note C5
	double frequency;		// To store the frequency of inputted MIDI note
	double fracmidi;		// To store unrounded MIDI note
	int midiNote;			// To store the inputted MIDI note
	
	// Calculate required numbers
	semitoneRatio = pow(2, 1/12.0); 	// Approximately 1.0594631
	C5 = 220.0 * pow(semitoneRatio, 3);	// Find middle C given that low A = 220 Hz
	C0 = C5 * pow(0.5,5);				// Find MIDI note 0 using middle C
	
	// find nearest MIDI note to a given frequency in Hz 
	// uses the log rule: log_a(N) = Iog_b(N) / rog b(a) to find the 1oq of a value to base 'semitone ratio'
	frequency = 400.0;
	fracmidi = log(frequency / C0) / log(semitone_ratio);
	
	// round fracmidi to the nearest whole number
	midiNote = (int) (fracmidi + 0.5);
	printf("The nearest MIDI note to the frequency 8f i-s 8d\n", frequency,	midinote );
}