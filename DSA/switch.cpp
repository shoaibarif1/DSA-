#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"input a character:";
    cin>>button;
   switch (button)
   {
   case 'a':
   cout<<"hello";
    
    break;

      case 'b':
   cout<<"hlo";
    
    break;
      case 'c':
   cout<<"sem";
    
    break;
      case 'd':
   cout<<"rammo";
    
    break;
      case 'e':
   cout<<"bero";
    
    break;
   
   default:
   cout<<"im still learning more:"<<endl;
    break;
   }
  
    return 0;
}