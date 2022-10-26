// to check whether a number is prime or not
#include<bits/stdc++.h>
using  namespace std;
bool check_prime(int n){
         if(n<=1)
             return false;
         for(int i=2; i*i<=n; i++){
             if(n%i==0)
                  return false;
         }
         return true;
  }
int main(){
  int n;
  cout<<"Enter the number:";
  cin>>n;
  if(check_prime(n))
    cout<<"It is a prime number"<<endl;
  else
    cout<<"It is not a prime number"<<endl;
}
