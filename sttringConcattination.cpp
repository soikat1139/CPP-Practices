

#include<iostream>

#include<cstring>

#include<cstdlib>

using namespace std;


typedef struct {
     char * str;
}String;



String operator+(String &a , String &b){

  String s;


  s.str=(char*)malloc(sizeof(a.str)+1+sizeof(b.str));



  strcpy(s.str,a.str);
  strcat(s.str,b.str);

  return s;


}









int main(){

  String fName,lName,name;


  fName.str=strdup("Soikat");
  lName.str=strdup("Ahamed");

  name=fName+lName;

  cout<<name.str<<endl;







}





