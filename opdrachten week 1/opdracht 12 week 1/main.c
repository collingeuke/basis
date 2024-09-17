#include <stdio.h>
#include <math.h>

int main()
{
	
    int totalSeconds;
    int hours;
    int minutes;
    int seconds;

    printf_s("Geef een hoeveelheid seconden: ");
    scanf_s("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf_s("%d uur, %d minuten, %d seconden", hours, minutes, seconds);
}