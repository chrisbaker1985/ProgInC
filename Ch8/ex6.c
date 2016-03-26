/* This program take a date and time and adds a second the time
 * adjusting the date and times accordingly						*/ 

#include <stdio.h>
#include <stdbool.h>

struct time
{
	int hours;
	int minutes;
	int seconds;
};

struct date
{
	int month;
	int day;
	int year;
};	

struct dateTime
{
	struct date date;
	struct time time;
};

struct month
{
	int numberOfDays;
	char name[3];
};
	
const struct month months[12] =
	{ { 31, {'J','a','n'} }, { 28, {'F','e','b'} },
	  { 31, {'M','a','r'} }, { 30, {'A','p','r'} },
	  { 31, {'M','a','y'} }, { 30, {'J','u','n'} },
	  { 31, {'J','u','l'} }, { 31, {'A','u','g'} },
	  { 30, {'S','e','p'} }, { 31, {'O','c','t'} },
	  { 30, {'N','o','v'} }, { 31, {'D','e','c'} } };

const int daysPerMonth[12] = 
		{ 31, 28, 31, 30, 31, 30, 30, 31, 30, 31, 30, 31 };
		
		
int main(void)
{
	struct dateTime userDateTime,
		getDateAndTimeFromUser(void), 
		clockKeeper(struct dateTime clock);	
	
	userDateTime = getDateAndTimeFromUser();
	
	userDateTime = clockKeeper(userDateTime);
	
	printf("%c%c%c %.2i, %i %.2i:%.2i:%.2i\n",
		months[userDateTime.date.month - 1].name[0], 
		months[userDateTime.date.month - 1].name[1],
		months[userDateTime.date.month - 1].name[2],
		userDateTime.date.day,
		userDateTime.date.year, userDateTime.time.hours,
		userDateTime.time.minutes, userDateTime.time.seconds);
		
	return 0;
}

struct dateTime getDateAndTimeFromUser(void)
{
	struct time getTimeFromUser(void);
	struct date getDateFromUser(void);
	
	struct dateTime returnDateTime;
	
	printf("Give me a date and time: \n");
	returnDateTime.date = getDateFromUser();
	returnDateTime.time = getTimeFromUser();
	
	return returnDateTime;
}

struct dateTime clockKeeper(struct dateTime clock)
{
	struct time timeUpdate (struct time now);
	struct date dateUpdate(struct date updateDate);
	bool isNextDay (struct time timeToCheck);
	
	clock.time = timeUpdate(clock.time);
	
	if(isNextDay(clock.time))
	{
		clock.date = dateUpdate(clock.date);
	}
	
	return clock;
}

bool isNextDay (struct time timeToCheck)
{
	return (timeToCheck.seconds == 0 && 
		timeToCheck.minutes == 0 &&
		timeToCheck.hours == 0);
}

// Function to update the time by one second
struct time timeUpdate (struct time now)
{
	now.seconds++;
	
	if(now.seconds == 60)
	{
		now.seconds = 0;
		now.minutes++;		
		if(now.minutes == 60)
		{
			now.minutes = 0;
			now.hours++;
			if(now.hours == 24)
			{
				now.hours = 0;
			}
		}
	}	
	return now;
}

// Function that adds a day to a date
struct date dateUpdate(struct date updateDate)
{
	struct date returnDate;
	
		
	if(updateDate.day != daysPerMonth[updateDate.month - 1])
	{
		returnDate.day = updateDate.day + 1;
		returnDate.month = updateDate.month;
		returnDate.year = updateDate.year;
	}
	else if (updateDate.month == 12) // end of year
	{
		returnDate.day = 1;
		returnDate.month = 1;
		returnDate.year = updateDate.year + 1;
	}
	else 						// end of month
	{
		returnDate.day = 1;
		returnDate.month = updateDate.month + 1;
		returnDate.year = updateDate.year;
	}
	
	return returnDate;
}

// Function to find the number of days in a month
int numberOfDays (struct date d)
{
	int days;
	bool isLeapYear (struct date d);
		
	if(isLeapYear(d) == true && d.month == 2)
	{
		days = 29;
	}
	else
	{
		days = daysPerMonth[d.month - 1];
	}
	
	return days;
}

bool isLeapYear (struct date d)
{
	bool leapYearFlag;
	
	if( (d.year % 4 == 0 && d.year % 100 != 0) ||
			d.year % 400 == 0)
	{
		leapYearFlag = true; // It's a leap year
	}
	else
	{
		leapYearFlag = false; // Not a leap year
	}
	
	return leapYearFlag;
}

struct date getDateFromUser(void)
{	
	struct date returnDate;
	int numberOfDays (struct date n);
	

	do{
		printf("Enter a date (mm dd yyyy): ");
		scanf("%i%i%i", 
			&returnDate.month, &returnDate.day, &returnDate.year);
		if(returnDate.month < 1 || 
		  returnDate.month > 12 ||
		  returnDate.day < 1 || 
		  returnDate.day > numberOfDays(returnDate) ||
		  returnDate.year < 1)
		{
			printf("Invalid date! Please try again\n");
		}		
	}
	while(returnDate.month < 1 || 
		  returnDate.month > 12 ||
		  returnDate.day < 1 || 
		  returnDate.day > numberOfDays(returnDate) ||
		  returnDate.year < 1);
		  
	return returnDate;
		  
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
