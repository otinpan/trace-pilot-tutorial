#include"child.h"

Child::Child(int n)
  :Parent(n)
{

}

Child::~Child()=default;


void Child::update(){
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
