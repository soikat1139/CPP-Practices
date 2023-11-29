// Learning Cpp Programming:


#include <iostream>

using namespace std;




template <typename T>

class DynamicArray{

   size_t m_size;

   T* arr;

   public:

   DynamicArray(size_t size):m_size(size),arr(new T[size]){

   }

   ~DynamicArray(){
    delete [] arr;

    cout<<"The class has been Destructed Successfully"<<endl;

   }

   void setValue(int index,T value) {

    arr[index]=value;



   }

   void print ()const{

    for(size_t i=0;i<m_size;i++){


      cout<<arr[i]<<endl;
    }




   }

  const T& operator[](size_t index) const {
    return arr[index];

  }

  T& operator[](size_t index) {
    return arr[index];

  }


};






int main(){

DynamicArray<int> ar(10);

ar.setValue(4,40);
ar.setValue(5,50);
ar.setValue(6,60);
ar[7]=70;

ar.print();






    return 0;
}
