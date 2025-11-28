# Bank Loan Calculator

## About the Project
This is a simple **C program** that calculates the **EMI (Equated Monthly Installment)** for a bank loan.  
You just enter the **loan amount**, **annual interest rate**, and **loan duration (in years)**, and it shows:

- Monthly EMI  
- Total amount to be paid  
- Total interest paid  

I made this project to practice **functions, header files, and modular programming in C**.

---

## Folder Structure

---

## How It Works
1. The program asks for **loan amount**, **interest rate**, and **loan duration**.  
2. It calculates **EMI**, **total payment**, and **total interest** using separate functions.  
3. Then it prints everything nicely in the console.

**EMI Formula used:**

EMI = P * R * (1+R)^N / ((1+R)^N - 1)


Where:  
- `P` = Loan amount  
- `R` = Monthly interest rate (Annual Rate ÷ 12 ÷ 100)  
- `N` = Total number of months (Years × 12)  

---

## How to Run
1. Open terminal in the project folder.  
2. Compile using GCC:

Enter Loan Amount: 100000
Enter Annual Interest Rate (in %): 10
Enter Loan Duration (in years): 5


Example Output:
------ Loan EMI Calculation Result ------
Monthly EMI: 2124.70
Total Amount Payable: 127482.00
Total Interest Paid: 27482.00

What I Learned

How to use functions to make code cleaner.

How to use header files and separate .c files.

How to organize a project in a proper folder structure.
