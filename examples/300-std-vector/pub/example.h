#pragma once

#include "C.h"

#include <assert.h>
#include <list>
#include <vector>

class A
{
public:
  A()
  {
    vectorObj_.emplace_back(3);
    vectorObj_.emplace_back(9);

    for (int i = 0; i < 1000000; ++i)
      largeVector_.emplace_back(i);

    objList_.emplace_back(19);
    objList_.emplace_back(29);
  }
  ~A();

  typedef std::vector<C>::iterator               iterator;
 
public:
  std::vector<C> g() const {
    std::vector<C> ret;
    ret.emplace_back(11);
    ret.emplace_back(101);
    return ret;
  }

  std::vector<C> getLargeVector() const {
    return largeVector_;
  }

  std::vector<C*> getObjPtrVec() const {
    return vectorObjPtr_;
  }

  int sumInLargeVector() const {
    int s = 0;
    for (const auto& c : largeVector_) {
       s += c.f();
    }
    return s;
  }
  iterator i() {
    return vectorObj_.begin();
  }
  std::vector<C>::reverse_iterator r() {
    auto itr = vectorObj_.rbegin();
    assert(itr->f() == 9);
    return itr;
  }

  std::list<C> l() const {
    return objList_;
  }

private:
  std::vector<C> vectorObj_;
  std::vector<C> largeVector_;
  std::vector<C*> vectorObjPtr_;
  std::list<C> objList_;
};
