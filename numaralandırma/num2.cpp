#include<iostream>

using namespace std;

int main(){
	enum Color{
		red=3,
		blue
	};
	
	enum Fruit{
		banana,
		apple
	};
	
	Color color=red;
	Fruit fruit=banana;
	
	if(color==fruit)
	   cout<<"Renk ve Meyve esittir\n";
	else
	   cout<<"Renk ve Meyve esit degildir\n";
	   
	cout<<red;
	cout<<blue;
	
	return 0;      
}
