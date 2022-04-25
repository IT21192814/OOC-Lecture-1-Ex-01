#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float length ,width;
  cout<<"Enter length and width: ";
  cin>>length>>width ;
  float perimeter=2*(length+width);
  cout<<"Perimeter= "<<perimeter<<endl;
  cout<<"\nPerimeter is : "<<setw(10)<<setiosflags(ios::fixed)<<setprecision(2)<<perimeter<<endl;
  return 0;
}