#include<iostream>
#include"module/child.h"

int multiply(int a,int b);

int main(){
  int n;
  // 入力
  std::cin>>n;

  // csvファイル由来
  // @trace-pilot 696d348a2d51a9f8659e23ea030bb88ce94b7ebb
  int magic_number=27;

  std::cout<<multiply(n,magic_number)<<std::endl;

  Child child(n);
  child.update();
  child.print_child();
}


// ChatGPT由来
// @trace-pilot b4ec6bab1dfc8551c4d8e7cb49447d034853733c
int multiply(int a, int b) {
    return a * b;
}