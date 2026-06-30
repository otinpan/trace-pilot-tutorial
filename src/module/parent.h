#pragma once
#include<iostream>
#include<vector>

// 基底クラス
class Parent{
  public:
    // コンストラクタ (インスタンス作成時に呼ばれる)
    Parent(int n);
    // デストラクタ (インスタンス削除時に呼ばれる)
    ~Parent();

    // 仮想関数 同じインターフェースを持つ
    virtual void update(); // 子クラスによって上書きされる可能性がある

  protected:
    const std::vector<int>& a() const;

  private:
    // 可変長配列
    std::vector<int> a_;
  
  protected: // 子クラスでも使用できる
    int n_;
    std::vector<int> b_;
};
