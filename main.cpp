/*
  Title: Chapter 2 Excersise 10
  File Name: Chapter 2Ex10_Mark_Goldstein.cpp
Date: 9/25/24
Requirements: A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the following.
*/





#include <iostream>
using namespace std;
int main() 
{
  int total_customers;
  cout << "Enter the total number of customer's surveyed: ";
  cin >> total_customers;

  const double percentage_energy_drink_buyers = 0.15;
  const double percentage_citrus_flavored = 0.58;

  int energy_drink_buyers = total_customers * percentage_energy_drink_buyers;
  cout << "The approximate number of customers who purchase one or more energy drinks per week: " << energy_drink_buyers << endl;

  int citrus_flavored_energy_drink_buyers = energy_drink_buyers * percentage_citrus_flavored;
  cout << "The approximate number of customers who prefer citrus-flavored energy drinks: " << citrus_flavored_energy_drink_buyers << endl;


  return 0;
}