#pragma once

#include <iterator>
#include <list>
#include <type_traits>

namespace __zz_cib_stl_helpers {

template <typename _ValueType>
class bidirectional_iterator
{
  template <typename _T, typename = void>
  struct UnderlyingIterator
  {
    using type = typename std::list<_T>::iterator;
  };

  template <typename _T>
  struct UnderlyingIterator<_T, std::enable_if_t<std::is_const_v<_T>, void>>
  {
    using type = typename std::list<std::remove_const_t<_T>>::const_iterator;
  };

  using UnderlyingIteratorType = typename UnderlyingIterator<_ValueType>::type;

  UnderlyingIteratorType mIter;

private:
  bidirectional_iterator(UnderlyingIteratorType iter) noexcept
    : mIter(iter)
  {
  }

public:
  using pointer    = _ValueType*;
  using value_type = _ValueType;
  using reference  = typename std::conditional_t<std::is_pointer_v<value_type>, value_type, value_type&>;

  bidirectional_iterator() noexcept {}

  reference operator*() const noexcept
  {
    return *mIter;
  }
  pointer operator->() const noexcept
  {
    return mIter.operator->();
  }
  bidirectional_iterator& operator++() noexcept
  {
    ++mIter;
    return *this;
  }
  bidirectional_iterator operator++(int) noexcept
  {
    return bidirectional_iterator(mIter++);
  }

  bidirectional_iterator& operator--() noexcept
  {
    --mIter;
    return *this;
  }
  bidirectional_iterator operator--(int) noexcept
  {
    return bidirectional_iterator(mIter--);
  }

  bool operator==(const bidirectional_iterator& rhs) noexcept
  {
    return mIter == rhs.mIter;
  }
  bool operator!=(const bidirectional_iterator& rhs) noexcept
  {
    return mIter != rhs.mIter;
  }
};

} // namespace __zz_cib_stl_helpers
