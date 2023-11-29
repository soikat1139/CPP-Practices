#include<iostream>


#include <cmath>

using namespace std;
class  Complex{

  double re_;
  double im_;

  public:

  Complex(double re,double im):re_(re),im_(im){
    cout<<"Hello There This is from Opererator OverLoading Lectures"<<endl;

  }

  Complex(const Complex & c ): re_(c.re_),im_(c.im_){

    cout<<"Copying  a object for something like nothing "<<endl;


  }

  ~Complex(){


    cout<<"Destructor called here ";
  }
  void print()const {
    cout<<re_<<" "<<im_<<endl;
  }
  Complex & operator=(const Complex &c){

    re_=c.re_;
    im_=c.im_;
    return *this;
  }

  
};


int main(){

  Complex c1(4.2,5.9);

  Complex c2(3.5,3.2);
  

  c2=c1;

  c2.print();





  return 0;
}
