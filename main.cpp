#include <iostream>
#include <iomanip>
#include <cmath>
#include "formula.h"

using namespace std;

float energy_charge;

void clear_screen() {
    system("CLS");
}

void main_menu() {
    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*   Program for Life   *" << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*1 Financial Planning  *" << endl << setw(70);
    cout << "*2 BMI                 *" << endl << setw(70);
    cout << "*3 Electric Consumption*" << endl << setw(70);
    cout << "*4 Basal Metabolic Rate*" << endl << setw(70);
    cout << "*5 Calculate Tax       *" << endl << setw(70);
    cout << "*6 Exit                *" << endl << setw(70);
    cout << "************************" << endl << setw(60);
    cout << "Enter Choice: ";    
}

void finance_menu() {
    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*   FINANCIAL PLANNING *" << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*1 Investment          *" << endl << setw(70);
    cout << "*2 Loan Payment        *" << endl << setw(70);
    cout << "*3 Exit                *" << endl << setw(70);
    cout << "************************" << endl << setw(60);
    cout << "Enter Choice: ";
}

void bmi_menu() {
    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*        B M I         *" << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*1 Metric System       *" << endl << setw(70);
    cout << "*2 Imperial System     *" << endl << setw(70);         
    cout << "*3 Exit                *" << endl << setw(70);
    cout << "************************" << endl << setw(60);
    cout << "Enter Choice: ";    
}

void electric_menu() {
    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "* ELECTRIC CONSUMPTION *" << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*1 Calculate Watt      *" << endl << setw(70);
    cout << "*2 Electric Bill(<150) *" << endl << setw(70);         
    cout << "*3 Exit                *" << endl << setw(70);
    cout << "************************" << endl << setw(60);
    cout << "Enter Choice: ";    
}

void bmr_menu() {
    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*          BMR         *" << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*1 Male                *" << endl << setw(70);
    cout << "*2 Female              *" << endl << setw(70);         
    cout << "*3 Exit                *" << endl << setw(70);
    cout << "************************" << endl << setw(60);
    cout << "Enter Choice: ";    
}

void tax_menu() {
    float t;
    char esc;

    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*         TAX          *" << endl << setw(70);
    cout << "************************" << endl << setw(70);

    cout << "Enter Net income(year): " << setw(51);
    cin >> t;
    cout << "Tax: " << setw(0);
    cout << tax_cal(t) << endl << setw(70);
    cout << "************************" << endl << setw(74);
    cout << "Press Y to return to menu...";
    cin >> esc;
    if (esc == 'Y' || esc == 'y') {
        main_menu();
    } 
}

void investment() {
    float principal, rate, years;
    char esc;

    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*INVESTMENT CALCULATION*" << endl << setw(70);
    cout << "************************" << endl << setw(68);

    cout << "Enter Initial Amount: " << setw(81);
    cin >> principal;
    cout << "Enter Annual Interest Rate (in %): " << setw(69);
    cin >> rate;
    cout << "Enter Number of Years: " << setw(60);
    cin >> years;

    float future_value = principal * pow(1 + (rate / 100), years);
    cout << "Future Value: " << setw(0) << fixed << setprecision(2) << future_value << " THB" << endl << setw(70);
    cout << "************************" << endl << setw(74);
    cout << "Press Y to return to menu...";
    cin >> esc;
    if (esc == 'Y' || esc == 'y') {
        main_menu();
    }
}

void loan_payment() {
    float principal, annual_rate, years;
    char esc;

    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*   LOAN CALCULATION   *" << endl << setw(70);
    cout << "************************" << endl << setw(65);

    cout << "Enter Loan Amount: " << setw(81);
    cin >> principal;
    cout << "Enter Annual Interest Rate (in %): " << setw(69);
    cin >> annual_rate;
    cout << "Enter Number of Years: " << setw(63);
    cin >> years;

    float monthly_rate = annual_rate / 12 / 100;
    float number_of_payments = years * 12;
    float monthly_payment = (principal * monthly_rate) / (1 - pow(1 + monthly_rate, -number_of_payments));
    cout << "Monthly Payment: " << setw(0) << fixed << setprecision(2) << monthly_payment << " THB" << endl << setw(70);
    cout << "************************" << endl << setw(74);
    cout << "Press Y to return to menu...";
    cin >> esc;
    if (esc == 'Y' || esc == 'y') {
        main_menu();
    }
}

void metric_bmi() {
    float w;
    float h;
    char esc;

    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*   BMI METRIC SYSTEM  *" << endl << setw(70);
    cout << "************************" << endl << setw(70);

    cout << "Enter Weight (In kilos): " << setw(71);
    cin >> w;
    cout << "Enter Height (In meters): " << setw(51);
    cin >> h;
    cout << "BMI: " << setw(0);
    cout << metric_cal(w, h) << endl << setw(70);
    cout << "************************" << endl << setw(65);
    cout << "Press Y to return to menu...";
    cin >> esc;
    if (esc == 'Y' || esc == 'y') {
        main_menu();
    }
}

void imperial_bmi() {
    float w;
    float h;
    char esc;

    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "* BMI IMPERIAL SYSTEM  *" << endl << setw(70);
    cout << "************************" << endl << setw(71);

    cout << "Enter Weight (In pounds): " << setw(71);
    cin >> w;
    cout << "Enter Height (In Inches): " << setw(51);
    cin >> h;
    cout << "BMI: " << setw(0);
    cout << imperial_cal(w, h) << endl << setw(70);
    cout << "************************" << endl << setw(65);
    cout << "Press Y to return to menu...";
    cin >> esc;
    if (esc == 'Y' || esc == 'y') {
        main_menu();
    }
}

void watt() {
    float p;
    float t;
    char esc;

    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*      W A T T S       *" << endl << setw(70);
    cout << "************************" << endl << setw(59);

    cout << "Enter Power: " << setw(67);
    cin >> p;
    cout << "Enter Time (In hours): " << setw(53);
    cin >> t;
    cout << "Watts: " << setw(0);
    cout << watt_cal(p, t) << endl << setw(70);
    cout << "************************" << endl << setw(65);
    cout << "Press Y to return to menu...";
    cin >> esc;
    if (esc == 'Y' || esc == 'y') {
        main_menu();
    }
}

void result() {
    float service = 8.19;
    float ft = 0.3972;
    char esc;
    clear_screen();
    cout << setw(80) << "***********************************************" << endl;
    cout << setw(80) << "*     E S T I M A T I O N   R E S U L T S     *" << endl;
    cout << setw(80) << "***********************************************" << endl;    
    cout << setw(80) << "* Consumption not exceeding 150 kWh per month *" << endl;
    cout << setw(80) << "***********************************************" << endl;    

    cout << setw(54) << "Section 1 Base Tariff" << endl;
    cout << setw(49) << "Energy charge:" << setw(30) << fixed << setprecision(2) << energy_charge << " Baht" << endl;
    cout << setw(50) << "Service charge:" << setw(29) << fixed << setprecision(2) << service << " Baht" << endl;
    cout << setw(53) << "Total Base Tariff:" << setw(26) << fixed << setprecision(2) << service + energy_charge << " Baht" << endl;

    cout << setw(52) << "Section 2 Ft Charge" << endl;
    cout << setw(59) << "Used energy x Ft charge:" << setw(20) << fixed << setprecision(2) << energy_charge * ft << " Baht" << endl;

    cout << setw(50) << "Section 3 Tax 7%:" << endl;
    cout << setw(62) << "(Base Tariff + Ft) * 7/100:" << setw(17) << fixed << setprecision(2) << (energy_charge * ft) * 7 / 100 << " Baht" << endl << endl;

    cout << setw(57) << "Total Electricity Charge:" << setw(22) << fixed << setprecision(2) << (energy_charge * ft) * 7 / 100 + energy_charge + service + (energy_charge * ft) << " Baht" << endl;
    cout << setw(80) << "***********************************************" << endl;
    cout << setw(50) << "Press Y to exit...";
    cin >> esc;
    if (esc == 'Y' || esc == 'y') {
        main_menu();
    }
}

void consumption() {
    float w;

    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*    ELECTRIC BILL     *" << endl << setw(70);
    cout << "************************" << endl << setw(58);

    cout << "Enter Watt: ";
    cin >> w;
    energy_charge = consumption_cal(w);
    result();
}

void bmrmale() {
    float mw;
    float mh;
    float ma;
    char esc;

    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*       MALE BMR       *" << endl << setw(70);
    cout << "************************" << endl << setw(64);

    cout << "Enter Weight (kg): " << setw(64);
    cin >> mw;
    cout << "Enter Height (cm): " << setw(57);
    cin >> mh;
    cout << "Enter Age: " << setw(73);
    cin >> ma;
    cout << "Basal Metabolic Rate (Cal): ";
    cout << malembr(mw, mh, ma) << endl << setw(70);
    cout << "************************" << endl << setw(65);
    cout << "Press Y to exit...";
    cin >> esc;
    if (esc == 'Y' || esc == 'y') {
        main_menu();
    }
}

void bmrfemale() {
    float fw;
    float fh;
    float fa;
    char esc;

    clear_screen();
    cout << endl << setw(70);
    cout << "************************" << endl << setw(70);
    cout << "*      FEMALE BMR      *" << endl << setw(70);
    cout << "************************" << endl << setw(64);

    cout << "Enter Weight (kg): " << setw(64);
    cin >> fw;
    cout << "Enter Height (cm): " << setw(58);
    cin >> fh;
    cout << "Enter Age: " << setw(73);
    cin >> fa;
    cout << "Basal Metabolic Rate (Cal): ";
    cout << femalembr(fw, fh, fa) << endl << setw(70);
    cout << "************************" << endl << setw(65);
    cout << "Press Y to exit...";
    cin >> esc;
    if (esc == 'Y' || esc == 'y') {
        main_menu();
    }    
}

int main() {
    main_menu();
    char ans;
    
    while (true) {
        cin >> ans;
        switch (ans) {
            case '1':
                finance_menu();
                char finance_ans;
                cin >> finance_ans;
                switch (finance_ans) {
                    case '1':
                        investment();
                        break;
                    case '2':
                        loan_payment();
                        break;
                    case '3':
                        main_menu();
                        break;
                }
                break;
            
            case '2':
                bmi_menu();
                char bmi_ans;
                cin >> bmi_ans;
                switch (bmi_ans) {
                    case '1':
                        metric_bmi();
                        break;
                    case '2':
                        imperial_bmi();
                        break;
                    case '3':
                        main_menu();
                        break;
                }
                break;
            
            case '3':
                electric_menu();
                char electric_ans;
                cin >> electric_ans;
                switch (electric_ans) {
                    case '1':
                        watt();
                        break;
                    case '2':
                        consumption();
                        break;
                    case '3':
                        main_menu();
                        break;
                }
                break;
            
            case '4':
                bmr_menu();
                char bmr_ans;
                cin >> bmr_ans;
                switch (bmr_ans) {
                    case '1':
                        bmrmale();
                        break;
                    case '2':
                        bmrfemale();
                        break;
                    case '3':
                        main_menu();
                        break;
                }
                break;
            
            case '5':
                tax_menu();
                break;
                
            case '6':
                cout << "Thank you for using the system!" << endl;
                return 0;
        }
    }
}
