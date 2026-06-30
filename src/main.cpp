#include<iostream>
#include"module/child.h"

int multiply(int a,int b);

int main(){
  int n;
  // 入力
  std::cin>>n;

  int magic_number=27;

  std::cout<<multiply(n,magic_number)<<std::endl;

  Child child(n);
  child.update();
  child.print_child();
}


int multiply(int a, int b) {
    return a * b;
}