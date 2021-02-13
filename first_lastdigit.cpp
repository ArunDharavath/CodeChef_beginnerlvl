#include <bits/stdc++.h> 
using namespace std; 
  
// Find the first digit 
int firstDigit(int n) 
{ 
    // Remove last digit from number 
    // till only one digit is left 
    while (n >= 10)  
        n /= 10; 
      
    // return the first digit 
    return n; 
} 
  
// Find the last digit 
int lastDigit(int n) 
{ 
    // return the last digit 
    return (n % 10); 
} 
  
// Driver program 
int main() 
{ 
    int n_tc, n;
    int sum;
    
    cin >> n_tc;
    for(int i = 0; i < n_tc; i++)
    {
        cin >> n;
        sum = firstDigit(n) + lastDigit(n);
        printf("%d\n", sum);
    }
    return 0; 
} 