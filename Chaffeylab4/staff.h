#ifndef STAFF_H
#define STAFF_H
#include"ccc_empl.h"
#include<istream>
#include<vector>
using namespace std;

class Staff
{
public:
    Staff();
    Staff(vector<Employee>a);
    void print();
    void selection_sort();

    ~Staff();
private:
    int min_position(vector<Employee>& a, int from, int to);
    void swap(Employee &x, Employee &y);
    vector<Employee> team;
};
Staff::Staff(vector<Employee>a)
{
    team.operator =(a);

}
Staff::Staff()
{
    team.clear();

}
int Staff::min_position(vector<Employee>& a, int from, int to)
{
   int min_pos = from;
   int i;
   Employee temp1,temp2;
   for (i = from + 1; i <= to; i++)
    {
       temp1=a[i];
       temp2=a[min_pos];
       if (temp1.get_salary()< temp2.get_salary())
           min_pos = i;
     }
   return min_pos;

}
void Staff::selection_sort()
{
   int next; // The next position to be set to the minimum
    int max=team.size() - 1;
   for (next = 0; next <max; next++)
   {
      // Find the position of the minimum
      int min_pos = min_position(team, next, max);
      if (min_pos != next)
         swap(team[min_pos], team[next]);
   }
}
void Staff::swap(Employee& x, Employee& y)
{
    //team.swap(x,y);
   Employee temp = x;
   x = y;
   y = temp;
}
Staff::~Staff()
{
    team.clear();
}
void Staff::print()
{
    Employee temp;
    int n=team.size();
   for (int i = 0; i < n; i++)
    {
        temp= team[i];
        temp.printinfo();
        cout << "\n";
   }

}
#endif // STAFF_H
