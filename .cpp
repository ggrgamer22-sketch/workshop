#include <iostream>
using namespace std;

int main ()

{
    int pin,rpin = 4676, value ; 
    cout<<"enter your pin -";
    cin>>pin;
    int amount;
if (pin != 4676)
{ 

    cout<<"try again your pin is incorrect";
}
else
{

    cout<<"enter your amount=";
    cin>>amount;
    if(amount<=200){cout<<"got money";}
    else{cout<<"no money";}
}
return 0;




}