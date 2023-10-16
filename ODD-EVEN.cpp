/*22070123129*/
/*Varun Pagote*/
/*Experiment 4*/

#include<iostream>
using namespace std;
int main()
{
    int i = 67;
    int bit_to_be_set;
    cout<<"Enter the bit set: ";
    cin>>bit_to_be_set;
    int k = i|(1<<bit_to_be_set);
    int bit_to_be_reset;
    cout<<"Enter th5e bit reset: ";
    cin>>bit_to_be_reset;
    int j=1&(~(1<<bit_to_be_reset));
    cout<<k<<endl;
    cout<<j<<endl;
}