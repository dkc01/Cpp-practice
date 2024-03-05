/******************************************************************************

Name: Divas KC
Date: Oct 3, 2023
Project: Project4
Email: dkc@ramapo.edu

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   // Declare constants
   const double SOCIAL_SECURITY_TAX_RATE = 0.062,
                SOCIAL_SECUTITY_MAX_AMOUNT = 9114.00,
                MEDICARE_TAX_RATE = 0.0145,
                MIN_AMOUNT = 100000,
                
                FEDERAL_TAX_RATE_A = 0.22,
                FEDERAL_TAX_RATE_B = 0.24,
                FEDERAL_TAX_RATE_C = 0.32,
                FEDERAL_TAX_RATE_D = 0.35,
                FEDERAL_TAX_RATE_E = 0.37;
                
    // Constants for subtracting amount for federal tax
    const double SUB_AMT_SINGLE_A = 6164.50,
                 SUB_AMT_SINGLE_B = 19768.50,
                 SUB_AMT_SINGLE_C = 26247.00,
                 SUB_AMT_SINGLE_D = 37045.00,
                 
                 
                 SUB_AMT_MARRIED_JOINTLY_A = 8766.00,
                 SUB_AMT_MARRIED_JOINTLY_B = 12329.00,
                 SUB_AMT_MARRIED_JOINTLY_C = 39537.00,
                 SUB_AMT_MARRIED_JOINTLY_D = 52494.00,
                 SUB_AMT_MARRIED_JOINTLY_E = 65451.00,
                 
                 SUB_AMT_MARRIED_SEPARATELY_A = 6164.50,
                 SUB_AMT_MARRIED_SEPARATELY_B = 19768.50,
                 SUB_AMT_MARRIED_SEPARATELY_C = 26247.00,
                 SUB_AMT_MARRIED_SEPARATELY_D = 32725.50;
                 
                 
   // Declare variables
  double income;
  double federalTax;
  double federalTaxRate;
  double socialSecurityTax;
  double medicareTax;
  double amountAfterTax;
  double annualIncome;
  char status;
  string taxFillingStatus;
  double subAmt;
  double taxableIncomeSocial;
  
  
   // Ask user to enter their status
   cout << "Enter your status: S/s for single or M/m for married filling seperately"
        << " and J/j for married filling jointly " << endl;
   cin >> status;
   status = tolower( status );
   
   // Ask user their annual income
   cout << "Enter your annual income " << endl;
   cin >> annualIncome;
   
   
   // Calculate federal tax for single status, married filling separately and jointly 
   
   if ( 's' == status )
   {
       if ( annualIncome >= MIN_AMOUNT)
       {
           if ( annualIncome > 539900 )
           {
               federalTaxRate = FEDERAL_TAX_RATE_E;
               subAmt = SUB_AMT_SINGLE_D;
           }
           
           else
           {
               if ( annualIncome > 215950 )
               {
                   federalTaxRate = FEDERAL_TAX_RATE_D;
                   subAmt = SUB_AMT_SINGLE_C;
               }
               
               else
               {
                   if ( annualIncome >170050 )
                   {
                       federalTaxRate = FEDERAL_TAX_RATE_C;
                       subAmt = SUB_AMT_SINGLE_B;
                   }
                   
                   else 
                   {
                       federalTaxRate = FEDERAL_TAX_RATE_B;
                       subAmt = SUB_AMT_SINGLE_A;
                   }
               }
           }
       }
   }
   
   else
   {
       if ( 'j' == status )
       {
           if ( annualIncome >= MIN_AMOUNT )
           {
               if ( annualIncome > 647850 )
               {
                   federalTaxRate = FEDERAL_TAX_RATE_E;
                   subAmt = SUB_AMT_MARRIED_JOINTLY_E;
               }
               
               else
               {
                   if ( annualIncome > 431900 )
                   {
                       federalTaxRate = FEDERAL_TAX_RATE_D;
                       subAmt = SUB_AMT_MARRIED_JOINTLY_D;
                   }
                   
                   else
                   {
                       if ( annualIncome > 340100 )
                       {
                           federalTaxRate = FEDERAL_TAX_RATE_C;
                           subAmt = SUB_AMT_MARRIED_JOINTLY_C;
                       }
                       
                       else
                       {
                           if ( annualIncome > 178150 )
                           {
                               federalTaxRate = FEDERAL_TAX_RATE_B;
                               subAmt = SUB_AMT_MARRIED_JOINTLY_B;
                           }
                           
                           else
                           {
                               federalTaxRate = FEDERAL_TAX_RATE_A;
                               subAmt = SUB_AMT_MARRIED_JOINTLY_A;
                           }
                           
                       }
                   }
               }
           }
       }
       
       else
       {
           if ( 'm' == status )
           {
               if ( annualIncome >= MIN_AMOUNT )
               {
                    if ( annualIncome > 323925 )
                    {
                        federalTaxRate = FEDERAL_TAX_RATE_E;
                        subAmt = SUB_AMT_MARRIED_SEPARATELY_D;
                    }
                    
                    else
                    {
                        if ( annualIncome > 215950 )
                        {
                            federalTaxRate = FEDERAL_TAX_RATE_D;
                            subAmt = SUB_AMT_MARRIED_SEPARATELY_C;
                        }
                        
                        else
                        {
                            if ( annualIncome > 170050 )
                            {
                                federalTaxRate = FEDERAL_TAX_RATE_C;
                                subAmt = SUB_AMT_MARRIED_SEPARATELY_B;
                            }
                            
                            else
                            {
                                federalTaxRate = FEDERAL_TAX_RATE_B;
                                subAmt = SUB_AMT_MARRIED_SEPARATELY_A;
                            }
                        }
                    }
               }
           }
       }
   }
   
   
  
   
   // Calculate federal tax
   federalTax = ( annualIncome * federalTaxRate ) - subAmt;
   
    
    // Calculate social security tax 
    if ( annualIncome <= 147000 )
    {
        taxableIncomeSocial = annualIncome;
    }
    else
    {
        taxableIncomeSocial = 147000;
    }
    
    socialSecurityTax = taxableIncomeSocial * SOCIAL_SECURITY_TAX_RATE;
    
    
    // Calculate Medicare tax
    medicareTax = MEDICARE_TAX_RATE * annualIncome;
    
    
    
    
    // Calculate amount after deducing all taxes
    amountAfterTax = annualIncome - federalTax - socialSecurityTax - medicareTax;
    
    
   // Display the status, income, federal tax. social security tax, medicare tax, and amount after tax
   cout.setf(ios::fixed);
   cout.precision( 2 );
  
   cout << "Here are your taxes:" << endl;
   cout << "Status : " << taxFillingStatus << endl;
   cout << "Income : $ " << annualIncome << endl;
   cout << "Federal Tax : $ " << federalTax << endl;
   cout << "Social Security Tax : $ " << socialSecurityTax << endl;
   cout << "Medicare Tax : $ " << medicareTax << endl;
   cout << "After-tax take home pay : $ " << amountAfterTax << endl;
   

    return 0;
}




