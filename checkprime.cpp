#include<iostream>
using namespace std;
int main(){
    system("cls");
    string check="number is prime";
    int num;
    int i;
    cout<<"enter number to check if prime ";
    cin>>num;
    if(num<=1){
        cout<<"number is not prime";}else{
            for(i=2;i<num;i+=1){
                if(num%i==0){
                    check="number is not prime";}else{(void)0;}
                }
                cout<<check;
            }
  return 0;          
}
    
