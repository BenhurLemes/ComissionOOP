#include <iostream>
using std::cout;

#include "CommissionEmployee.hpp"

CommissionEmployee::CommissionEmployee(const string &first, const string&last, const string &ssn, double sales, double rate){
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrossSale(sales); // usar a função para instanciar a atributo
    setCommissionRate(rate); // aqui também
}

void CommissionEmployee::setFirstName(const string &first){
    firstName = first;
}

string CommissionEmployee::getFirstName() const{
    return firstName;
}

void CommissionEmployee::setLastName(const string &last){
    lastName = last;
}

string CommissionEmployee::getLastName() const{
    return lastName;
}

void CommissionEmployee::setSocialSecurityNumber(const string &ssn){
    socialSecurityNumber = ssn;
}

string CommissionEmployee::getSocialSecurityNumber() const{
    return socialSecurityNumber;
}

void ComissionEmployee::setGrossSales(double sales){
    grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee::getGrossSales() const{
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate){
    commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee::getCommissionRate() const{
    return commissionRate;
}

double CommissionEmployee::earnings() const{
    return commisionRate * grossSales;
}

 void CommissionEmployee::print() const
 {
    cout << "commission employee:" << firstName << ‘ ‘ << lastName
    << "\nsocial security number: " << socialSecurityNumber
    << "\ngross sales: " << grossSales
    << "\ncommission rate: " << commissionRate;
 } 