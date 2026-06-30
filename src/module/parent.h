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

  // codex由来
// @trace-pilot f6fcee3d8e46452cc812ec7f0430d2924ab12d3b
  protected:
    const std::vector<int>& a() const;

  private:
    // 静的なページ由来
    // @trace-pilot 6d20499ca9643c55a7870362afb4ead2565f3c4f
    // 可変長配列
    std::vector<int> a_;
  
  protected: // 子クラスでも使用できる
    int n_;
    std::vector<int> b_;
// @trace-pilot f6fcee3d8e46452cc812ec7f0430d2924ab12d3b
};
