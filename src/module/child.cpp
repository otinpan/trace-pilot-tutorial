#include"child.h"

Child::Child(int n)
  :Parent(n)
{

}

Child::~Child()=default;


void Child::update(){
  // 基底クラスのupdateを呼び出すこともできる
// @trace-pilot f6fcee3d8e46452cc812ec7f0430d2924ab12d3b
  Parent::update();
  for(int i=0;i<n_;i++){
    b_[i]=b_[i]*a()[i];
  }
}

void Child::print_child(){
  std::cout<<"n: "<<n_<<"\n";
  for(int i=0;i<n_;i++){
    std::cout<<"b[i] "<<b_[i]<<"\n";
  }
}
