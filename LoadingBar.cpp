#include <iostream>
#include "windows.h"
int main(){
 system("cls");
char a = 177, b = 219;
std::cout <<"\t\t\t\t\tLoading...\n";//căn chỉnh
std::cout <<"\t\t\t\t";//căn chỉnh
for(int i =0;i<26;i++){
  std::cout <<a;
}
std::cout <<"\r";
std::cout <<"\t\t\t\t";//căn chỉnh
for(int i = 0;i<26;i++){
  std::cout <<b;
  Sleep(100);
}
std::cout <<std::endl;
  return 0;
}

