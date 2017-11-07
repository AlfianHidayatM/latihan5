#include <iostream>
using namespace std;

int main(){
	float weight, underweight, normal, overweight;
    int height;
    
    cout << "Please enter your height in cm : ";
    cin >> height;
    cout << "Please enter your weight in kg : ";
    cin >> weight;
    
     if (weight<height/2.5)
      cout << "Result : Underweight" << endl;
      
     else if (height/2.5 <= weight <= height/2.3)
      cout << "Result : Normal" << endl;
}
