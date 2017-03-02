#include<iostream>
using namespace std;


class Distance
{
	private:
	int feet;
	int inches;
	
	public:
	void fnFetchData();
	void fnShowData();
	Distance operator +(const Distance&);
	Distance operator =(const Distance&);
	Distance operator -(const Distance&);
};


void Distance::fnFetchData()
{
	cout<<"\n enter the value of feet:";
	cin>>feet;
	cout<<"\n enter the value of inches:";
	cin>>inches;
	
}

void Distance::fnShowData()
{
	cout<<"feet:"<<endl;
	cout<<"inches:"<<endl;
}

Distance Distance::operator +(const Distance& d1)
{
	Distance sum;
	
	sum.feet=feet+d1.feet;
	sum.inches=inches+d1.inches;
	
	while(sum.inches>12)
	{
		sum.inches=sum.inches%!2;
		(sum.feet)++;
	}
	return sum;
}


Distance Distance::operator =(const Distance& d2)
{
	Distance temp;
	
	temp.feet=d2.feet;
	temp.inches=d2.inches;
	
	return (temp);
}

Distance Distance::operator -(const Distance& d2)
{
	Distance Diff;
	
	if(inches>d2.inches)
	{
		diff.inches=inches-d2.inches;
	}
	else
	{
		inches=inches+12;
		feet=feet-1;
		diff.inches=inches-diff.inches;
	}
	sum.feet=feet-d2.feet;	
	return diff;
}


int main(void)
{
	Distance d1,d2,d3,d4;
	
	cout<<"\n enter the distance d1:"<<endl;
	d1.fnFetchData();
	d1.fnShowData();
	cout<<"\n enter the distance d2:"<<endl;
	d2.fnFetchData();
	d2.fnShowData();
	d3=d1+d2;
	cout<<"\n sum of d1 and d2 is:"<<d3<<endl;
	d3=d2;
	cout<<"the values of d3 and d2 are:"<<endl;
	cout<<"d3:"<<d3<<endl;
	cout<<"d2:"<<d2<<endl;
	d4=d1-d2;

	cout<<"d4:"<<d4<<endl;
	
	return 0;
}
