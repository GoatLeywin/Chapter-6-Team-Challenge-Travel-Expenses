#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>

using namespace std;
int main()
{

}

void total_number_of_days(double number_of_days)
{
	//declare variables
	double number_of_days;

	//get an input about the total number of days spent on the trip
	cout << "Enter the amount of days spent on the trip: ";
	cin >> number_of_days; //stores the input into number_of_days

	//add spacer
	cout << endl << " ------------------------------------------------------------ " << endl;
	if (number_of_days < 1);
	{
		//loops for the number of days if the input for days if less than 1
		do
		{

			cout << endl;

			//sends a message saying that the amount of days is incorrect
			cout << "Invalid amount of days inputted, please try again." << endl;

			//get an input about the total number of days spent on the trip
			cout << "Enter the amount of days spent on the trip: ";
			cin >> number_of_days; //stores the input into number_of_days


			cout << endl;

		} while (number_of_days < 1);
	}

	//passes the verified number of days into function
	total_number_of_days(number_of_days);
}

void arrival_and_departure(int& hour_of_arrival, int& minute_of_arrival, int& hour_of_departure, int& minute_of_departure) { // FUNCTION FOR ARRIVAL AND DEPARTURE
    //FUNCTION FOR THE ARRIVAL AND DEPARTURE TIME
    // ---------------------- START OF PROGRAM ---------------------- 

    cout << "ARRIVAL INFORMATION" << endl;
    cout << "-----------------------------------------------" << endl;


    /*
    validates and loops hour of arrival until a valid answer is given
    */
    do
    {
        //asks the user for the time of arrival
        cout << "Please put your hour of arrival (military time): ";
        cin >> hour_of_arrival; //stores the hour of arrival
    } while (hour_of_arrival > 24 || hour_of_arrival < 1);



    // ---------------------- HOUR TO MINUTE ----------------------

    /*
    validates and loops minute(s) of arrival until a valid answer is given
    */
    do
    {
        //asks the user for the time of arrival
        cout << "Please put your minute(s) of arrival: ";
        cin >> minute_of_arrival; //stores the minute of arrival
    } while (minute_of_arrival < -1 || minute_of_arrival > 60);


    //IMPORTANT IMPORTANT IMPORTANT IMPORTANT IMPORTANT IMPORTANT IMPORTANT
    // ---------------------- ARRIVAL TO DEPARTURE ---------------------- 
    cout << endl; // creates a separator


    cout << "DEPARTURE INFORMATION" << endl;
    cout << "-----------------------------------------------" << endl;

    /*
    validates and loops hour of departure until a valid answer is given
    */
    do
    {
        //asks the user for the time of departure
        cout << "Please put your hour of departure (military time): ";
        cin >> hour_of_departure; //stores the hour of departure
    } while (hour_of_departure > 24 || hour_of_departure < 1);



    // ---------------------- HOUR TO MINUTE ----------------------

    /*
    validates and loops minute(s) of departure until a valid answer is given
    */
    do
    {
        //asks the user for the time of departure
        cout << "Please put your minute(s) of departure: ";
        cin >> minute_of_departure; //stores the minute of departure
    } while (minute_of_departure < -1 || minute_of_departure > 60);


    //each_meal_eaten(hour_of_arrival, minute_of_arrival, hour_of_departure, minute_of_departure);
}

void each_meal_eaten(int hour_of_arrival, int minute_of_arrival, int hour_of_departure, int minute_of_departure, double AM_breakfast_cost, double AM_lunch_cost, double AM_dinner_cost, double PM_breakfast_cost, double PM_lunch_cost, double PM_dinner_cost, double allowance, double meal_allowance) {
    int check_arrive = 0 , check_depart = 0 ; 

    cout << endl;

    if (hour_of_arrival < 7)
    {
        cout << "Arrival Breakfast Cost: ";
        cin >> AM_breakfast_cost;

        AM_breakfast_cost -= breakfast_allowance;

        if (AM_breakfast_cost > 0)
        {
            allowance = allowance + AM_breakfast_cost;
        }
    }

    if (hour_of_arrival < 12)
    {
        cout << "Arrival Lunch Cost: ";
        cin >> AM_lunch_cost;

        AM_lunch_cost -= lunch_allowance;

        if (AM_lunch_cost > 0)
        {
            allowance = allowance + AM_lunch_cost;
        }
    }

    if (hour_of_arrival < 18)
    {
        cout << "Arrival Dinner Cost: ";
        cin >> AM_dinner_cost;

        AM_dinner_cost -= dinner_allowance;

        if (AM_dinner_cost > 0)
        {
            allowance = allowance + AM_dinner_cost;
        }
    }

    cout << endl; 

    if (hour_of_departure > 8)
    {
        cout << "Departure Breakfast Cost: ";
        cin >> PM_breakfast_cost;

        PM_breakfast_cost -= breakfast_allowance;

        if (PM_breakfast_cost > 0)
        {
            allowance = allowance + PM_breakfast_cost;
        }
    }

    if (hour_of_departure > 13)
    {
        cout << "Departure Lunch Cost: ";
        cin >> PM_lunch_cost;

        PM_lunch_cost -= lunch_allowance;

        if (PM_lunch_cost > 0)
        {
            allowance = allowance + PM_lunch_cost;
        }
    }

    if (hour_of_departure > 19)
    {
        cout << "Departure Dinner Cost: ";
        cin >> PM_dinner_cost;

        PM_dinner_cost -= dinner_allowance;

        if (PM_dinner_cost > 0)
        {
            allowance = allowance + PM_dinner_cost;
        }
    }
     
    cout << "------------------------------------------" << endl << "You owe : $" << allowance; 

}


