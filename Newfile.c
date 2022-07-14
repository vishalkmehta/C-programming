// Online C compiler to run C program online
// celcius to fahrenheit
# include<stdio.h>
 
 float convertTemp(float celsius);
 int main(){
      float far= convertTemp(37);
      printf("far : %f", far);
      return ;
 }
 
 float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
     return far;
 }