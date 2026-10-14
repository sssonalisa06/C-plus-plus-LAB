#include<iostream>
#include<cmath>
using namespace std;

float AREA(float r)
{
	return 3.14* r* r;
}

float AREA(float l, float b)
{
	return l*b;
}

float AREA( float x, float y, float z)
{
	float s=(x+ y+ z)/2;
	return sqrt(s*(s-x)*(s-y)*(s-z));
}

int main()
{
	float r, l, b, x, y, z;
	
	cout<<"enter radius of circle:";
	cin>> r;
	cout<< "Area of circle="<<AREA(r)<< endl;
	
	cout<<"enter the length and breadth of rectangle:";
	cin>>l>>b;
	cout<<"Area of reactangle="<<AREA(l,b)<< endl;
	cout<<"enter three sides of triangle:";
	cin>>x>>y>>z;
	if (x>0 && y>0 && z>0 && x+y>z && x+z>y && y+z>x)
	{
	cout<<"area of triangle="<<AREA(x,y,z)<< endl;
	}
	else
	{
		cout<<"INVALID triangle sides"<< endl;
	}
	return 0;
}
