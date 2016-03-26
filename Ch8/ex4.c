// Program that returns the day of the week for a given date
#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};	
	
	
int main(void)
{
	struct date getDateFromUser(void), dateToEvaluate;
	void printDayOfWeek(int daysTotal);
	
	printf("Give me a date and i'll give you a day\n");
	dateToEvaluate = getDateFromUser();
	
	printDayOfWeek(getDaysByDate(dateToEvaluate));
	
	return 0;	
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

int getDaysByDate(const struct date target)
{
	int f, g, n;
	
	if(target.month <= 2)
	{
		f = target.year - 1;
		g = target.month + 13;
	}
	else
	{
		f = target.year;
		g = target.month + 1;
	}
	
	n = 1461 * f / 4 + 153 * g / 5 + target.day;

	return n;
}

void printDayOfWeek(int daysTotal)
{
	// Why the hell do I have to adjust this?
	daysTotal -= 2;
	int dayOfWeek = daysTotal % 7;
	switch (dayOfWeek)
	{
		case 0:
			printf("This date falls on a Sunday\n");
			break;
		case 1:
			printf("This date falls on a Monday\n");
			break;
		case 2:
			printf("This date falls on a Tuesday\n");
			break;
		case 3:
			printf("This date falls on a Wednesday\n");
			break;
		case 4:
			printf("This date falls on a Thursday\n");
			break;
		case 5:
			printf("This date falls on a Friday\n");
			break;
		case 6:
			printf("This date falls on a Saturday\n");
			break;												
	}
}

// Function to find the number of days in a month
int numberOfDays (struct date d)
{
	int days;
	bool isLeapYear (struct date d);
	const int daysPerMonth[12] = 
		{ 31, 28, 31, 30, 31, 30, 30, 31, 30, 31, 30, 31 };
		
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
