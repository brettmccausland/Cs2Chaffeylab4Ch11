#ifndef CCC_EMPL
#define CCC_EMPL


#include <string>

using namespace std;

class Employee
{
public:

   Employee();
   ~Employee();
   Employee(string employee_name, double initial_salary);
   void set_salary(double new_salary);
   void set_name(string new_name);
   double get_salary() const;
   string get_name() const;
   void printinfo()const;
   void operator =(const Employee r);
private:
   string name;
   double salary;
};
void Employee::operator =(const Employee r)
{
    this->set_salary(r.get_salary());
    this->set_name(r.get_name());
}
Employee::~Employee()
{

}
Employee::Employee()
{
   salary = 0;
   name= " ";
}
void Employee::printinfo()const
{
    cout<<name<<": "<<salary;
}
Employee::Employee(string employee_name, double initial_salary)
{
   name = employee_name;
   salary = initial_salary;
}

void Employee::set_salary(double new_salary)
{
   salary = new_salary;
}
void Employee::set_name(string new_name)
{
   name = new_name;
}
double Employee::get_salary() const
{
   return salary;
}

string Employee::get_name() const
{
   return name;
}
#endif // CCC_EMPL

