This project sets up a basic timer 6

the timer gives an interrupt every 1 ms. 
the timer clock is 108 Mhz



	// timer clock is 108 Mhz
	// scale it by 2
	// now clock is 54 Mhz
	// one clock cycle is 18.5 ns
	// count up to 54000 to have 1 ms delay
	// the interrupt will be triggered every 1 ms

	// set up a variable in ISR and count up every time.
	// this variable should give you ticks in ms
