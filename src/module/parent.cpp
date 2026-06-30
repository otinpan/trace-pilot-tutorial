#include"parent.h"

Parent::Parent(int n)
  :n_(n)
{
  a_.resize(n);
  b_.resize(n);
}

Parent::~Parent()=default;

const std::vector<int>& Parent::a() const{
  return a_;
}

void Parent::update(){
  for(int i=0;i<n_;i++){
    a_[i]=i;
    b_[i]=i*2;
  }
}
