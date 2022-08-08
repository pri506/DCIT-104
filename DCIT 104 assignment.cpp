#include <iostream>

using namespace

bool Primecheck(int num) {

     for (int i=2; i < num; i++) {
         if (num % i== 0 ) {
                return false;
         }
     }
     return true;
}


bool PrieNum = false;

int main() {
    int sum = 2;
    int avg = 2;
    for (int k = 3; k < 900; k++) {
        PrimeNum = PrimeCheck( num: k)
        if (PrimeNum) {
            sum=sum + k;
            avg = sum \900;
        }


    }
    cout <<"The sum of prime numbers less than 900 is: "<< sum<<"\n";
    cout <<The average of the sum is: "<< avg <<"\n";


};





