#include <math.h>

// Calculate EMI
float calculateEMI(float P, float annual_rate, int years) {
    float R = annual_rate / 12 / 100;  // Monthly interest rate
    int N = years * 12;                 // Total number of months
    return (P * R * pow(1 + R, N)) / (pow(1 + R, N) - 1);
}

// Calculate total payment
float calculateTotalPayment(float EMI, int years) {
    int N = years * 12;
    return EMI * N;
}

// Calculate total interest
float calculateTotalInterest(float total_payment, float P) {
    return total_payment - P;
}
