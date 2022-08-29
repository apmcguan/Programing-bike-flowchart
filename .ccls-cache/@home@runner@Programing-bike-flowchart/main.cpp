#include <iostream>
#include <cmath>
using namespace std;

int main() {
  // initialize variables
  double P;
  double l;
  double S;
  double r;
  double l_in;
  const double pi =3.14159;
  
  

  //prompt the user to input P,L std
  cout<<"Enter the fore (P) in lbs;"; 
  cin>> P;
  cout<<endl;
  cout<<"Enter the length(l) in mm:";
  cin>>l;
  cout<< endl;
  cout<<"Enter the stress(S) in psi:";
  cin>> S; 
  cout<<endl;
    // Convvert l to inches. Note 1 in=25.4mm
  cout<< "converting in. to mm. for length=" <<l/25.4<<endl;
    // calculate R
  r=cbrt((l*P)/pi*S);
  cout
    

    //Display r

    return 0;
}