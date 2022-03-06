
#include"biblioteca.hpp"


float factorial(float a)
{
   int i;
   long double facto; 
   
   facto=1;
   for(i=1;i<=a;i++)
        facto = facto * i;
    
    return facto;
}
