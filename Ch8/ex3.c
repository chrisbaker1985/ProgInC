/* This program returns the elapsed time in hours minutes
 * and seconds of two time's provided by the user.			*/


#include <stdio.h>
#include <stdbool.h>

struct time
{
	int seconds;
	int minutes;
	int hours;
};

int main(void)
{
	struct time getTimeFromUser(void), time1, time2, elapsedTime;
	struct time elapsed_time(struct time from, struct time to);
	// First get the times to compare from the user
	printf("Give me two times to compare: \n");
	time1 = getTimeFromUser();
	time2 = getTimeFromUser();
	
	elapsedTime = elapsed_time(time1, time2);
	
	printf("The difference is %.2i:%.2i:%.2i\n", 
		elapsedTime.hours, elapsedTime.minutes, 
		elapsedTime.seconds);
		
	return 0;
}

// Function that gets time structs from the user
struct time getTimeFromUser(void)
{	
	struct time returnTime;	

	do{
		printf("Enter a time (hh:mm:ss): ");
		scanf("%i:%i:%i", 
			&returnTime.hours, &returnTime.minutes, &returnTime.seconds);
		if( returnTime.hours < 0 || 
			returnTime.hours > 23 || 
			returnTime.minutes < 0 || 
			returnTime.minutes > 59 || 
			returnTime.seconds < 0 || 
			returnTime.seconds > 59)
		{
			printf("Invalid time! Please try again\n");
		}		
	}
	while(  returnTime.hours < 0 || 
			returnTime.hours > 23 || 
			returnTime.minutes < 0 || 
			returnTime.minutes > 59 || 
			returnTime.seconds < 0 || 
			returnTime.seconds > 59);
		  
	return returnTime;
		  
}

struct time elapsed_time(struct time startTime, struct time endTime)
{
	struct time diffTime;
	
	diffTime.hours =  endTime.hours- startTime.hours;
	diffTime.minutes = endTime.minutes - startTime.minutes;
	diffTime.seconds = endTime.seconds - startTime.seconds;
	
	if(diffTime.seconds < 0)
	{
		diffTime.seconds += 60;
		diffTime.minutes--;
	}
	else
	{
		//diffTime.seconds += 60;
	}
	
	if(diffTime.minutes < 0)
	{
		diffTime.minutes += 60;
		diffTime.hours--;
	}
	else
	{
		//diffTime.minutes += 60;
	}
	
	if(diffTime.hours < 0)
	{
		diffTime.hours += 24;
	}
	
	return diffTime;
}
