#include <stdio.h>
#include <math.h>

int main() {
    float P, annual_rate, R, EMI, total_payment, total_interest;
    int years, N;

    printf("Enter Loan Amount: ");
    scanf("%f", &P);

    printf("Enter Annual Interest Rate (in %%): ");
    scanf("%f", &annual_rate);

    printf("Enter Loan Duration (in years): ");
    scanf("%d", &years);

    R = annual_rate / 12 / 100;  // Monthly interest rate
    N = years * 12;              // Total number of months

    EMI = (P * R * pow(1 + R, N)) / (pow(1 + R, N) - 1);
    total_payment = EMI * N;
    total_interest = total_payment - P;

    printf("\n------ Loan EMI Calculation Result ------\n");
    printf("Monthly EMI: %.2f\n", EMI);
    printf("Total Amount Payable: %.2f\n", total_payment);
    printf("Total Interest Paid: %.2f\n", total_interest);

    return 0;
}