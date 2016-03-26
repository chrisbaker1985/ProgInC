// Program that calcualtes the number of elapsed days between two dates

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
	struct date date1, date2;
	struct date getDateFromUser(void);
	int dayDifference(struct date dateA, struct date dateB);
	
	printf("Give me two dates to compare: \n");
	date1 = getDateFromUser();
	date2 = getDateFromUser();
	
	printf("The number of elapsed days is %i\n", 
			dayDifference(date1, date2));
	
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

int dayDifference(struct date dateA, struct date dateB)
{
	int getDaysByDate(struct date target);
	
	return getDaysByDate(dateB) - getDaysByDate(dateA);
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
