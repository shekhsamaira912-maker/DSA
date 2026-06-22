#include<iostream>
using namespace std;
class EvenNo
{
    public:
    int n,i=1;
    void getData()
    {
        cout<<"Enter a number: ";
        cin>>n;
    }
    void printEven()
    {
       while(i<=n)
       {
        cout<<i<<endl;
        i++;
       }
    }

};
int main()
{
    EvenNo e;
    e.getData();
    e.printEven();
    return 0;
}