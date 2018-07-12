#include<stdio.h>
#include<string.h>
 
int digit(char);
 
int main(){
 
    char roman_Number[20];
    int i=0;
    int number =0;
 
    scanf("%s",roman_Number);
 
    while(roman_Number[i]){
         
 
         if(digit(roman_Number[i]) >= digit(roman_Number[i+1]))
             number = number + digit(roman_Number[i]);
         else{
             number = number + (digit(roman_Number[i+1]) - digit(roman_Number[i]));
             i++;
         }
         i++;
    }
 
    printf("%ld",number);
 
    return 0;
 
}
 
int digit(char c){
 
    int value=0;
 
    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case '\0': value = 0; break;
         default: value = -1; 
    }
 
    return value;
}
