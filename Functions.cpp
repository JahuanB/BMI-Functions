#include <iostream>

using namespace std;

double sum (double num1, double num2){
  return num1+num2;
}

double bmi(double h, double w){
  return 703*w/(h*h);
}
double area(double l, double w){
  return l*w;
}

int main() {
  double n1,n2,ht,wt,l,w;
  n1=10;
  n2=15;
  ht=73;
  wt=170;
  l=6;
  w=7;

  cout<<"SUM="<<sum(n1,n2)<<endl;
  cout<<"BMI="<<bmi(ht,wt)<<endl;
  cout<<"AREA="<<area(l,w)<<endl;
  cout<<"MY BMI="<<bmi(68,180);
}