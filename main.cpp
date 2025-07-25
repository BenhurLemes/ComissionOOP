#include <iostream>
#include <iomanip>
#include "CommissionEmployee.hpp"

int main(int argc, char const *argv[])
{
    CommissionEmployee employee("Sue", "Jones", "222-22-2222", 1000, .06);
    std::cout<< std::fixed << std::setprecision(2);

    // obtém os dados do empregado comissionado
    std::cout << "Employee information obtained by get functions: \n"
    << "\nFirst name is " << employee.getFirstName()
    << "\nLast name is " << employee.getLastName()
    << "\nSocial security number is "
    << employee.getSocialSecurityNumber()
    << "\nGross sales is " << employee.getGrossSales()
    << "\nCommission rate is " << employee.getCommissionRate() << "\n";
    
    employee.setGrossSales( 8000 ); // configura as vendas brutas
    employee.setCommissionRate( .1 ); // configura a taxa de comissão
    
    std::cout << "\nUpdated employee information output by print function: \n"
    << "\n";
    employee.print(); // exibe as novas informações do empregado
    
    // exibe os rendimentos do empregado
    std::cout << "\n\nEmployee’s earnings: $" << employee.earnings() << "\n";
    return 0;
}
