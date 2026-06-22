#include<iostream>
using namespace std;
class SumNo
{
    public:
    int n,i;
    int sum=0;
    void getData()
    {
        cout<<"Enter a number: ";
        cin>>n;
    }
    void PrintSum()
    {
        for(i=0; i<=n; i++)
        {
            sum+=i;
        }
        cout<<sum<<endl;

    }
};
int main()
{
    SumNo s;
    s.getData();
    s.PrintSum();
    return 0;
}