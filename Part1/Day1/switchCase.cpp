#include "bits/stdc++.h"
using namespace std;

int main ()
{
  // Switch Case    
  /*
     Take the day no and print the corresponding day.
     For 1 print Monday, 2 -> Tuesday and so on.
   */
  int dayNo;
  cout << "Enter day number: ";
  cin >> dayNo;
  cout << endl;

  switch (dayNo)
    {
    case 1:
      cout << "Monday";
      break;
    case 2:
      cout << "Tuesday";
      break;
    case 3:
      cout << "Wednesday";
      break;
    case 4:
      cout << "Thursday";
      break;
    case 5:
      cout << "Friday";
      break;
    case 6:
      cout << "Saturday";
      break;
    case 7:
      cout << "Sunday";
      break;
    default:
      cout << "Wrong Input!";
    }

  return 0;
}
