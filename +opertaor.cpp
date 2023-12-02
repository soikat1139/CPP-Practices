#include<iostream>
using namespace std;


   struct cmplx{

    double re,im;

   };


   cmplx operator+ (cmplx &a ,cmplx &b){
     cmplx r;


     r.re=a.re+b.re;

     r.im=a.im+b.im;

     return r;


   }



int main(){
   


   // So now  I am going to use operator overloading  function


   cmplx d1,d2,d;


   d1.re=10.5;
   d1.im=12.25;

   d2.re=20.5;
   d2.im=30.25;

   d=d1+d2;

   cout<<d.re<<endl;
   cout<<d.im<<endl;

   cout<<10+5<<endl;

  return 0;
}

