#include<iostream>
using namespace std;
int main(){
    char color1;
    char color2;
    
   cout << "Enter the first color (r, o, g, b, y, u): ";
   cin >> color1;
   cout << "Enter the second color (r, o, g, b, y, u): "; 
   cin >> color2;
   if ((color1 == 'r' && color2 == 'o') || (color1 == 'o' && color2 == 'r')) {
       cout<<"dark"; 
       
   } else if ((color1 == 'g' && color2 == 'b') || (color1 == 'b' && color2 == 'g')) { 
       cout<<"green"; 
       
   } else if ((color1 == 'y' && color2 == 'u') || (color1 == 'u' && color2 == 'y')) { 
       cout<<"yellow"; 
       
   } else {
       cout<<"unknown combination"; 
       
   }
}