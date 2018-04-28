#include <stdio.h>
#include <math.h>

int main (void) 
{
rslts ("00110010", "0001011");
  
return 0;
}

void
rslts (char ch1[], char ch2[]) 
{
int dec_1 = decimal (ch1);
int dec_2 = decimal (ch2);
  
printf ("~для 1-го числа: %i\n", ~dec_1);
printf ("~ для 2-го числа: %i\n", ~dec_2);
printf ("& для чисел: %i\n", dec_1 & dec_2);
printf ("| для чисел: %i\n", dec_1 | dec_2);
printf ("^ для чисел: %i\n", dec_1 ^ dec_2);
} 
 
int decimal (char ch[]) 
{
int dec = 0;
int ch_int[8];
for (int i = 0; i <= 7; ++i)
    {
      
    if (ch[i] == '1')
	
ch_int[i] = 1;
else ch_int[i] = 0;
}
for (int i = 0; i <= 7; i++)
    {
  dec = dec + ch_int[i] * pow (2, 7 - i);
    } 
return dec;
}
