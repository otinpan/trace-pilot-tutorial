#include"parent.h"

Parent::Parent(int n)
  :n_(n)
{
  a_.resize(n);
  b_.resize(n);
}

Parent::~Parent()=default;

// @trace-pilot f6fcee3d8e46452cc812ec7f0430d2924ab12d3b
const std::vector<int>& Parent::a() const{
  return a_;
}

void Parent::update(){
  for(int i=0;i<n_;i++){
    a_[i]=i;
    b_[i]=i*2;
  }
}
