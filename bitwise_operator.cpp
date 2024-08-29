//REVATHI OC
//23070123105
#include<iostream>
#include<bitset>
using namespace std;
int main()
    {
       cout<<"1.Bitwise Operator"<<endl;
       int a=2,b=3;
       cout<<boolalpha;
       cout<<"a&b: "<<bitset<4>(a&b)<<endl;
       cout<<"a|b: "<<bitset<4>(a|b)<<endl;
       cout<<"a^b: "<<bitset<4>(a^b)<<endl;
       cout<<"a<<b: "<<bitset<4>(a<<b)<<endl;
       cout<<"a>>b: "<<bitset<4>(a>>b)<<endl;
       return 0;
       
    }