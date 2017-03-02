#include<iostream>
#include<iomanip>
using namespace std;


class fraction
{
	private:
	int inum,iden;
	
	public:
	void fngetdata(void);
	void fnshowdata(void);
	friend bool fnCheckFraction(fraction,fraction);
	
};


void fraction::fngetdata(void)
{
	cout<<"\n enter the numerator and denominator of the fraction:\n";
	cin>>inum>>iden;
}

void fraction::fnshowdata(void)
{
	cout<<inum<<"/"<<iden<<endl;
}

bool fnCheckFraction(fraction a,fraction b)
{
	if((a.inum*b.iden)==(a.iden*b.inum))
	return true;
	else
	return false;
	
}


int main(void)
{
	fraction f1,f2;
	bool bresult;
	
	f1.fngetdata();
	cout<<"fraction 1:";
	f1.fnshowdata();
	
	f2.fngetdata();
	cout<<"fraction 2:";
	f2.fnshowdata();
	
	bresult=fnCheckFraction(f1,f2);
	
	if(bresult==true)
	cout<<"\n both fractions are equal \n";
	else
	cout<<"\n both fractions are not equal \n";
	
	return 0;
}
