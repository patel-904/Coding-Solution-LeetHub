//Task1 => Access the private file 
//Requriment, Introduction => You can gain  Same  Knowladge of Access modifier and its 3 types are:-
//                1.) private -> inside the class access 
//                2.) public  -> everywhere use in program 
//                3.) protected -> I can display in next program full details 
                
//we can study here only two types private , public 
//Remamber : class contain object like ex. 
//           Hero h1 ; here Hero is class and h1 is object 
//   clss have same properties / task 

// we can access private file by useing getter & setter 
//syntex :-   int getvalue() {
//                   return value ; }
//
//            void setvalue(argument){
//                   privatefile name = variabel ;}

// Important things :- class name - Hero  object name - ankit 
//                     by using "." we can give the value and set the value 
// 
#include<iostream>
using namespace std;


class Hero{
   // properties 
    private: 
    int rollnumber;
    public: 
    int age ;
    char gread ;
    
    int getRollnumber(){
    return rollnumber;
    }
    
    // Not neccasarry but you can use 
    int getAge(){
    return age;
    }
    
    char getGread(){     // Remember gread is char 
    return gread;
    }
    
    void setRollnumber(int r){
    rollnumber = r ;
    }
    
    void setAge(int age){   // if variable and data member name same so use this keyword 
    this->age = age;
    }
    
    void setGread(char gread){
    this->gread = gread ;
    }
    
    void print() {
    cout << endl;
    cout << "[ Rollnumber : " << this->rollnumber << "," << endl;   // only rollnumber alwayas currect 
    cout << "Age : " << age << "," << endl;
    cout << "Gread :" << gread << "]"<<endl ;
    cout << endl << endl;
    }
    
};

int main(){

Hero ankit;
ankit.setRollnumber(011);
ankit.setAge(22);
ankit.setGread('B');
// you can also use for public file its currect and main method without making any function 
ankit.age= 23 ;
ankit.gread = 'C' ;  // very big mistake is for a char always use  single code 

ankit.print();


}
