# Output Compare mode

This project sets up a general purpose timer in Output compare mode.


## specifications

the timer gives an interrupt every 1000 ms. 
the timer clock is 108 Mhz

we will have a pin attached on a certain channel.

this pin will be toggled every 1 second. 



	// clock freq  =  108 Mhz
	// prescaler = 2000 
	// 108 Mhz / 2000 = 54000 Hz
	// this means each cycle takees 18.5 us
	// to get 1 second, we use 54000  cycles
	
	
	
	
First we initialize timer OC mode. 

set prescaler etc

we set the OC mode to toggle 


