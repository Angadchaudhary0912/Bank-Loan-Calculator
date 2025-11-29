#ifndef LOAN_H
#define LOAN_H

// Function declarations
float calculateEMI(float P, float annual_rate, int years);
float calculateTotalPayment(float EMI, int years);
float calculateTotalInterest(float total_payment, float P);

#endif
