#include <string>
using std::string;

class CommissionEmployee
{
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales;
    double commissionRate;
public:
    CommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);
    ~CommissionEmployee();

    void setFirstName(string );
    string getFirstName() const;

    void setLastName(string );
    string getLastName() const;

    void setSocialSecurityNumber(string );
    string getSocialSecurityNumber() const;

    void setGrossSales(double);
    double getGrossSales() const;
    
    void setCommissionRate(double);
    double getCommissionRate() const;

    double earnings() const;
    void print() const;

};