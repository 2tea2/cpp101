//copyright 2019 2tea

#include <iostream>
using namespace std ;

 int main () {

	double Kilogram = 0.456 ;
	double Stone = 0.071 ;
    double Slug = 0.031 ;
    double Pennyweight = 291.667 ;
    double Grain = 7000 ;

    double Meter = 0.305 ;
    double Hand = 3 ;
    double Furlong = 0.002 ;
    double Cubit = 0.667 ; 
    double RackUnit = 6.857 ;

    double pounds ; 
    double feet ;
    
    cout << "Welcome to the weight and height converter 9000!"<< endl;
	cout << "Enter a weight in pounds " << endl;
	cin >> pounds ;

	cout << " Enter a height in feet " << endl;
    cin >> feet ;

    cout << pounds << " lbs is " << ( pounds * Kilogram ) << " Kilograms" << endl;
    cout << pounds << " lbs is " << ( pounds * Stone )  << " Stone" << endl;
    cout << pounds << " lbs is " << ( pounds * Slug )  << " Slug" << endl;
    cout << pounds << " lbs is " << ( pounds * Pennyweight )  << " Pennyweight" << endl;
    cout << pounds << " lbs is " << ( pounds * Grain )  << " Grain" << endl;

    cout << " " << endl;

    cout << feet << " feet is " << ( feet * Meter ) <<  " Meter " << endl;
    cout << feet << " feet is " << ( feet * Hand ) << " Hands " << endl;
    cout << feet << " feet is " << ( feet * Furlong ) << " Furlong " << endl;
    cout << feet << " feet is " << ( feet * Cubit ) << " Cubit " << endl;
    cout << feet << " feet is " << ( feet * RackUnit ) << " Rack Unit " << endl;


    cout << "Goodbye!" << endl;

    
// Finished
 }
