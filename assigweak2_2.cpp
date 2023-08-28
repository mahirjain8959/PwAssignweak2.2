#include<iostream>
using namespace std ;
int main(){
    // question number 1
    int note ;
    cout <<"Enter the total amount :";
    cin >> note ;
    switch (note){
    case 500:
    
        break;
    
    default:
        break;
    }
    // question number 2
    int a = 5 , b , c;
    b = a = 15 ;
    c = a < 15;
    cout <<"a = " << a <<", b = " << b << ", c = " << c <<endl;
    // output is a = 15 , b = 15 , c = 0

    // question number 3
int x = 3;
float y = 3.0;
if (x == y){
    cout << "x is equal to y"<<endl;
} else cout <<"x is not equal to y"<<endl;
// output is x is equal to y

// question number 4
int text = 0;
cout << "first character "<<'1'<<endl;
cout <<"second character "<<(text? 3: '1')<< endl;
// output first character1
 // second character 49              

 // question number 5
  int A = 18; int B = 12;  
    bool t = (A > 20 && B < 15)? true : false;
    cout <<"Value of t: " << t <<endl;
     // output is value of t is 0 

     // question number 6
     int number = -4;
     char result;
     result = number > 0 ? 'P' : 'N';
     cout << result << endl;
}