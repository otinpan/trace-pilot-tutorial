#pragma once
#include"parent.h"

// 子クラス
class Child : public Parent{
  public:
    Child(int n);
    ~Child();

    void update() override;
    void print_child();
};
