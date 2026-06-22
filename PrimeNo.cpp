#include<iostream>
using namespace std;
class PrimeNo
{
    int n;
    bool found=0;
    public:

    void getdata()
	{
    	cout<<"Enter a number: ";
        cin>>n;  
	}
	
	void Prime()
	{
	for(int i=2; i<=n/2; i++)
    {
        if(n%2==0)
        {
        	found=1;
        	break;
		}
    }
    if(found==0)
    {
    	cout<<n<<" the given number is not Prime number.";
	}
	else
	{
		cout<<n<<" the given number is Prime number.";
	}		
	}
    
};

int main()
{
    PrimeNo a;
    a.getdata();
    a.Prime();
    return 0;
}
