#include <iostream>

using namespace std;

int main()
{
 // Declare symbolic constants for different tour rates
 const double IBERIAN_RATE_OFF = 545.95,
              IBERIAN_RATE_PEAK = 595.95,
              CONTINENTAL_RATE_OFF = 634.95,
              CONTINENTAL_RATE_PEAK = 679.95,
              SCANDINAVIAN_RATE_OFF = 769.95,
              SCANDINAVIAN_RATE_PEAK = 824.95,
              NEWJERSEY_TAX_RATE = 0.06,
              NON_NEWJERSEY_TAX_RATE = 0.05;
              
 // Declare variables 
 char reply;
 unsigned short numTour;
 unsigned short month;
 bool isNJ = true;
 double taxRate;
 string tour;
 double tourRate;
 string monthName;
 double totalCost;
 double tax, cost;
 string taxName;
 
 
 // Input the type of tour that custumer want to have
 cout << " Please enter the type of tour: i/I for Iberian, c/C for continental and s/S for Scandinavian " << endl;
 cin >> reply;
 reply = toupper ( reply );
 
 // Input the number of days for the tour
 cout << " Please enter the number of days of the tour " << endl;
 cin >> numTour;
 
 // Ask the customer which month they want to travel
 cout << " Please enter the month of the tour (1 for January - 12 for December " << endl;
 cin >> month;
 
 // Ask if they are resident of New jersey or not 
 cout << " Please enter 1 if you are New Jersey resident and 0 otherwise " << endl;
 cin >> isNJ;
 
 // Calculate tax based on their residency
 if ( isNJ )
 {
     taxRate = NEWJERSEY_TAX_RATE;
     taxName = " New Jersey taxes ";
 }
 
 else
 {
     taxRate = NON_NEWJERSEY_TAX_RATE;
     taxName = " federal taxes ";
 }
 
 
 // Assign the name of month based on number that customer provide
 switch ( month ) {
     case 1: monthName = "January";
             break;
     case 2: monthName = "February";
             break;
     case 3: monthName = "March";
             break;
     case 4: monthName = "April";
             break;
     case 5: monthName = "May";
             break;
     case 6: monthName = "June";
             break;
     case 7: monthName = "July";
             break;
     case 8: monthName = "August";
             break;
     case 9: monthName = "September";
             break;
     case 10: monthName = "October";
             break;
     case 11: monthName = "November";
             break;
     case 12: monthName = "December";
             break;
     default : cout << " Invalid Month " << endl;
            
 }
 
 // Decide the rate of the tour based on the month they choose
 switch ( month ) {
     case 1:
            
     case 2:
           
     case 3:
           
     case 4:
           
     case 5:
           
     case 9:
            
     case 11:
          
     case 12: 
     
     if ( 'I' == reply )
     {
        tourRate = IBERIAN_RATE_OFF;
        tour = "Iberian";
     }
     else
     {
        if ( 'C' == reply )
        {
        tourRate = CONTINENTAL_RATE_OFF;
        tour = "Continental";
        }
        
        else
        {
            tourRate = SCANDINAVIAN_RATE_OFF;
            tour = "Scandinavian";
        }
     }
                 break;
                 
                 
     default:  
     if ( 'I' == reply )
     {
         tourRate = IBERIAN_RATE_PEAK;
         tour = "Iberian";
     }
     
     else
     {
         if ( 'C' == reply )
         {
             tourRate = CONTINENTAL_RATE_PEAK;
             tour = "Continental";
         }
         
         else
         {
             tourRate = SCANDINAVIAN_RATE_PEAK;
             tour = " Scandinavian ";
         }
     }
            
 }
 
 
 // Calculate the cost based on number of days they travel and tour rate
 cost = numTour * tourRate;
 
 // Calculate the tax based on tax rate and cost
 tax = taxRate * cost;

 // Compute
 totalCost = cost + tax;
 
    

 
 
 // Output 
 cout.setf( ios::fixed);
 cout.precision ( 2 );
 
 cout << "The cost of a " << numTour << "-day " << tour << " in " << monthName << " is $" << totalCost << endl;
 cout << "This includes $" << tax << " in " << taxName << endl;
 cout << "Thank you for booking with EuroTours, your saleperson today was Divas KC" << endl;
 

 

    return 0;
}


