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
  const int totalCustomers = 16500;
  const double percent_Energy_Drinks_buyers = 0.15;
  const double percent_citrus_preference = 0.58;

  int energyDrinksBuyers = totalCustomers * percent_Energy_Drinks_buyers;
  cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week: " << energyDrinksBuyers << endl;
  int citrusPreference = energyDrinksBuyers * percent_citrus_preference;
  cout << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks: " << citrusPreference << endl;


  return 0;
}