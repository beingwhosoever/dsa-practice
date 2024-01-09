#include <iostream>
using namespace std;
int main()
{
 int t_students, agrade_boys, agrade_girls;
 agrade_boys = 17;
 t_students = (80*45)/100; 
 agrade_girls = t_students - agrade_boys; 
 cout << "Number of 'A' grade scoring girls is = " << agrade_girls << endl;
 return 0;
}
