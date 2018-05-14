// Unit 10 LB1: Hospital

#include <iostream>
#include <iomanip>
using namespace std;

double total(double, double, double, double);
double total(double, double);
void display(double, double, double, double, double);

int main()
{
    char response;
    double dailyRate = 0, medicationCharges = 0, hospitalServices = 0, daysSpent = 0, totalIn, totalOut;
    
    cout<<"Was the patient admitted as an in-patient? Enter Y or N.\n";
    cin>> response;
    
    while(!(response == 'Y' || response == 'y' || response == 'N' || response == 'n'))
    {
        cout<<"Please enter the choices outlined before!"<<endl;
        cin>>response;
    }
    
    while(response == 'Y' || response == 'y')
    {
        cout<<"\nHow many days were spent in the hospital?\n";
        cin>> daysSpent;
            while(daysSpent < 0)
            {
                cout<<"Please enter a positvie number for days spent in the hospital\n";
                cin>>daysSpent;
            }
        cout<<"\nWhat was the daily rate?\n";
        cin>> dailyRate;
            while(dailyRate < 0)
            {
                cout<<"Please enter a positive number for the daily rate\n";
                cin>>dailyRate;
            }
        cout<<"\nEnter the hospital medication charges.\n";
        cin>>medicationCharges;
            while(medicationCharges < 0)
            {
                cout<<"Please enter a positive number for the medication charges.\n";
                cin>>medicationCharges;
            }
        cout<<"\nEnter the charges for hospital services (lab tests, etc.).\n";
        cin>>hospitalServices;
            while(hospitalServices < 0)
            {
                cout<<"Please enter a positive number for thr hospital services.\n";
                cin>>hospitalServices;
            }
        totalIn = total(daysSpent, dailyRate, medicationCharges, hospitalServices);
        
        display(daysSpent, dailyRate, medicationCharges, hospitalServices, totalIn);
        
        return 0;
    }
    cout<<"Was the patient admitted as an out-patient? Enter Y or N.\n";
    cin>>response;
    
    while(!(response == 'Y' || response == 'y' || response == 'N' || response == 'n'))
    {
        cout<<"Please enter the choices outlined before!"<<endl;
        cin>>response;
    }
    
    while(response == 'Y' || response == 'y')
    {
        cout<<"\nEnter the charges for hospital services (lab tests, etc.).\n";
        cin>>hospitalServices;
            while(hospitalServices < 0)
            {
                cout<<"Please enter a positive number for thr hospital services.\n";
                cin>>hospitalServices;
            }
        cout<<"\nEnter the hospital medication charges.\n";
        cin>>medicationCharges;
            while(medicationCharges < 0)
            {
                cout<<"Please enter a positive number for the medication charges.\n";
                cin>>medicationCharges;
            }
        totalOut = total(hospitalServices, medicationCharges);
        
        display(daysSpent, dailyRate, medicationCharges, hospitalServices, totalOut);
        
        return 0;
    }
    
    cout<<"Please reassess your life desicions.\n\n";
    return 0;
}

double total(double daysSpent, double dailyrate, double medicationCharges, double hospitalServices)
{
    double total;
    total = (daysSpent * dailyrate) + medicationCharges + hospitalServices;
    return total;
}

double total(double hospitalServices, double medicationCharges)
{
    double total;
    total = hospitalServices + medicationCharges;
    return total;
}

void display(double daysSpent, double dailyRate, double medicationCharges, double hospitalServices, double totalIn)
                {
                    cout<<fixed;
                    cout<<"***********************\n";
                    cout<<"\n   Hospital Bill\n";
                    cout<<"**********************\n\n";
                    cout<<setprecision(0);
                    cout<<"Number of days spent in the hospital: "<<setw(40)<<daysSpent<<endl<<endl;
                    cout<<setprecision(2);
                    cout<<"Hospital Medication Charges: "<<setw(35)<<"$"<<setw(14)<<medicationCharges<<endl<<endl;
                    cout<<"Charges for Hospital Services (lab tests, etc): "<<setw(16)<<"$"<<setw(14)<<hospitalServices<<endl<<endl;
                    cout<<"Total In-Paitent Charges: "<<setw(38)<<"$"<<setw(14)<<totalIn<<endl<<endl;
                    
                }










