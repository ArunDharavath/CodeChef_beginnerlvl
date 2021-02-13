#include<iostream>
using namespace std;
long long division(long long n1, long long n2) 
{
   long long ans=  n1%n2;
   return ans;
}
int main() {
   int n;
   long long divider;
   cin >> n >> divider;
   int counter=0;
   long long num;
   
   for(int i = 0; i < n; i++)
   {
     cin >> num;
     if(division(num, divider) == 0)
     {
       counter++;
     }
   }

   cout << counter;
}