#include <iostream>
#include <vector>
using namespace std;
void Exercise11_2();
void Exercise11_4();
void Exercise11_8();
void Exercise11_9();
void Exercise11_12();
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
  //Modify the selection sort algorithm to sort a vector of employees by
  //salary.
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
