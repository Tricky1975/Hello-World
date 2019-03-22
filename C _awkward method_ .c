include <stdio.h>

void printChar(char c) {
    printf(c);
}

int main(void) {
   printChar(0x48); 
   printChar(0x65); 
   printChar(0x6c); 
   printChar(0x6c); 
   printChar(0x6f); 
   printChar(0x20); 
   printChar(0x77); 
   printChar(0x6f); 
   printChar(0x72); 
   printChar(0x6c); 
   printChar(0x64); 
   printChar(0x21); 
   printChar(0xa);  
   return 0;
}
