#include<iostream>
#include<string>
using namespace std;
float areaRect(int width , int length);
float areaCircle(float radius);

int main(void){
	int menu,width,length,radius;
    
	do{
		cout << "Select Menu for Area" <<endl ;
		cout << "1.Rectangle " <<endl ;
		cout << "2.Circle " <<endl ;
		cout << "0.Exit Program " <<endl ;
		cout << "Enter Menu : " ;
		cin >> menu;
		switch(menu){
		case 1 :
			cout << "Area of Rectangle " << endl;
			cout << "Enter Width : ";
			cin >> width ;
			cout << "Enter Length : " ; 
			cin >> length;
			cout << "Area = " << areaRect(width,length) << endl;
			break;
		case 2 :
			cout << "Area of Circle " << endl;
			cout << "Enter Radius : ";
			cin >> radius ;
			cout << "Area = " << areaCircle(radius) <<endl;
			break;
		case 0 :
			cout << "Exit Program " <<endl;
			break;
		default:
			cout << " Pls Input 0 , 1 , 2 "<<endl;
			break;
		}
	}while(menu != 0);
}

float areaRect(int f_width,int f_length){
	int r_area = f_width * f_length;
	return (r_area);
}

float areaCircle(float f_radius){
	float Pi = 3.14 , c_area;
	c_area =  Pi * f_radius * f_radius ;
	return (c_area);
}