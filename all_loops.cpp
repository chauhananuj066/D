#include<iostream>
int main ()
{  
    //Rectangle pattern.
     int n=5;
    for(int i=0;i<n;i++) //outer loop = how many rows will have to print.
    {
    for(int j=0;j<n;j++) //inner loop = what logic and columns.
    {
     std::cout<<'*';  
    }
    std::cout<<std::endl; 
    }
}