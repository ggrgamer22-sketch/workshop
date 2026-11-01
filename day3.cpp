#include<iostream>
using namespace std;

int main()

{
 int number = 1900;

 if (number%4 == 0){
    cout<<"it is a leap year";

 }
 else if ( number%100 == 0)
 cout<<"it  is not a leap year";
 
 else
{

  
    cout<<"it is not a leap year";
}

return 0;
}

