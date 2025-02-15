#include<iostream>
using namespace std;

class Person //Parent class
{ char name[ 30 ]; int age; };
class Employee : public Person //Child class
{ int empid; float salary; };
int main( void )
{
Person p;
cout<<sizeof( p )<<endl;
Employee emp;
cout<<sizeof( emp )<<endl;
return 0;
}