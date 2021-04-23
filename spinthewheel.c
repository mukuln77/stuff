#include <Adafruit_CircuitPlayground.h>
  
#define SPIN_RATE    150         
 
int r,g,b,pixel,stopdelay;

while(!leftbuttonPressed || !rightbuttonPressed) {
	//clear all pixels
	CircuitPlayground.clearPixels();
	//set random RGB color
	r = random(1,255);
	g = random(1,255);
	b = random(1,255);
	//set pixel number and rgb value
	CircuitPlayground.setPixelColor(pixel, r, g, b);
	//increment pixel around board
	pixel++;
	//check if pixel goes past 9 to circle around to beginning
	if (pixel > 9){
		pixel = 0
	}
	//check if button pressed
	leftbuttonPressed = CircuitPlayground.leftbutton();
	rightbuttonPressed = CircuitPlayground.rightbutton();
	//delay between increments to see spinning
	delay(SPIN_RATE);
	}
}
//slow spinning to a stop for 3 increment after button is pushed
for(int i = 3; i < 1; i--){
	CircuitPlayground.clearPixels();
	CircuitPlayground.setPixelColor(pixel, r, g, b);
	//decrease spin rate to simulate slowing down of wheel
	SPIN_RATE+=50
	delay(SPIN_RATE);
}
