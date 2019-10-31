

#include <wiringPi.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void) {

	int value = 0;

	int flag = 0;

	if (wiringPiSetup() == -1) {

		printf("Setup wiringPi has failed!");
	} else {

		printf("WiringPi setup succeded, no errors");
	}


	pinMode(1, INPUT);
	pinMode(15, OUTPUT);
	pullUpDnControl(1, PUD_UP);

	printf("Entering the while loop");
	while (1) {

		if (digitalRead(1) == LOW && flag == 1) {

			printf("\nThe sensor is low");
			digitalWrite(15,LOW);
			flag = 0;
		}

		else if (digitalRead(1) == HIGH && flag == 0) {

		
			digitalWrite(15,HIGH);
			printf("\nThe sensor is high");
			flag = 1;
		}


		fflush(stdout);
	
	}
	
	return 0;
}
