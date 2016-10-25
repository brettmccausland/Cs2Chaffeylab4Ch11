#include <iostream>
#include <vector>
#include "ccc_empl.h"

using namespace std;
void Exercise11_2();//brett(in progress)
void Exercise11_4();//rex
void Exercise11_8();//elizabeth
void Exercise11_9();// andre
void Exercise11_12();//andre

void merge(vector<int>& a, int from, int mid, int to);
void merge_sort(vector<int>& a, int from, int to);
void swap(int& x, int& y);
void print(vector<int> a);
void rand_seed();
int min_position(vector<int>& a, int from, int to);
void selection_sort(vector<int>& a);
int rand_int(int a, int b);
int binary_search(vector<int> v, int from, int to, int value);
bool operator<(const Employee& a, const Employee& b);
int main()
{
  system("clear");
  //Exercise11_2();
  //Exercise11_4();
  //Exercise11_8();
  //Exercise11_9();
  //Exercise11_12();


  return 0;
}
void Exercise11_2()
{
  //Modify the selection sort algorithm to sort a vector of employees by salary.
    vector<Employee> staff(5);
     staff[0] = Employee("Cracker, Carl", 48000.0);
     staff[1] = Employee("Hacker, Harry", 35000.0);
     staff[2] = Employee("Lam, Larry", 78000.0);
     staff[3] = Employee("Reindeer, Rudolf", 63000.0);
     staff[4] = Employee("Sandman, Susan", 51500.0);

     sort(staff.begin(), staff.end());

     for (int i = 0; i < staff.size(); i++)
        cout << staff[i].get_name() << " " << staff[i].get_salary() << "\n";
}
void Exercise11_4()
{
  // Modify the merge sort algorithm to sort a vector of employees by salary.
}
void Exercise11_8()
{
  //Implement the merge_sort procedure without recursion,
  //where the size of the vector is a power of 2.
  //First merge adjacent regions of size 1, then adjacent regions of size 2,
  //then adjacent regions of size 4, and so on.

}
void Exercise11_9()
{
  // Implement the merge_sort procedure without recursion,
  // where the size of the vector is an arbitrary number.
  // Hint: Keep merging adjacent areas whose size is a power of 2,
  // and pay special attention to the last area in the sequence.
}
void Exercise11_12()
{
  //Write a program that keeps an appointment book.
  //Make a class Appointment that stores a description of the appointment,
  //the appointment day, the starting time, and the ending time.
  //Your program should keep the appointments in a sorted vector.
  // Users can add appointments and print out all appointments for a given day.
  // When a new appointment is added, use binary search to find where
  //it should be inserted in the vector. Do not add it if it conflicts
  //with another appointment.
}
void merge(vector<int>& a, int from, int mid, int to)
{
   int n = to - from + 1; // Size of the range to be merged
   // Merge both halves into a temporary vector b
   vector<int> b(n);

   int i1 = from;
      // Next element to consider in the first half
   int i2 = mid + 1;
      // Next element to consider in the second half
   int j = 0; // Next open position in b

   // As long as neither i1 nor i2 is past the end, move the smaller
   // element into b

   while (i1 <= mid && i2 <= to)
   {
      if (a[i1] < a[i2])
      {
         b[j] = a[i1];
         i1++;
      }
      else
      {
         b[j] = a[i2];
         i2++;
      }
      j++;
   }

   // Note that only one of the two while loops below is executed

   // Copy any remaining entries of the first half
   while (i1 <= mid)
   {
      b[j] = a[i1];
      i1++;
      j++;
   }
   // Copy any remaining entries of the second half
   while (i2 <= to)
   {
      b[j] = a[i2];
      i2++;
      j++;
   }

   // Copy back from the temporary vector
   for (j = 0; j < n; j++)
      a[from + j] = b[j];
}

/**
   Sorts the elements in a range of a vector.
   @param a the vector with the elements to sort
   @param from start of the range to sort
   @param to end of the range to sort
*/
void merge_sort(vector<int>& a, int from, int to)
{
   if (from == to) return;
   int mid = (from + to) / 2;
   // Sort the first and the second half
   merge_sort(a, from, mid);
   merge_sort(a, mid + 1, to);
   merge(a, from, mid, to);
}
void swap(int& x, int& y)
{
   int temp = x;
   x = y;
   y = temp;
}
void print(vector<int> a)
{
   for (int i = 0; i < a.size(); i++)
      cout << a[i] << " ";
   cout << "\n";
}
void rand_seed()
{
   int seed = static_cast<int>(time(0));
   srand(seed);
}
int rand_int(int a, int b)
{
   return a + rand() % (b - a + 1);
}
int min_position(vector<int>& a, int from, int to)
{
   int min_pos = from;
   int i;
   for (i = from + 1; i <= to; i++)
      if (a[i] < a[min_pos]) min_pos = i;
   return min_pos;
}
void selection_sort(vector<int>& a)
{
   int next; // The next position to be set to the minimum

   for (next = 0; next < a.size() - 1; next++)
   {
      // Find the position of the minimum
      int min_pos = min_position(a, next, a.size() - 1);
      if (min_pos != next)
         swap(a[min_pos], a[next]);
   }
}
int binary_search(vector<int> v, int from, int to, int value)
{
   if (from > to)
      return -1;
   int mid = (from + to) / 2;
   if (v[mid] == value)
      return mid;
   else if (v[mid] < value)
      return binary_search(v, mid + 1, to, value);
   else
      return binary_search(v, from, mid - 1, value);
}
bool operator<(const Employee& a, const Employee& b)
{
   return a.get_salary() < b.get_salary();
}