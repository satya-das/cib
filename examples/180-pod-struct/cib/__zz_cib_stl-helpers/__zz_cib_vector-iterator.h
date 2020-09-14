#pragma once

#include <iterator>
#include <type_traits>
#include <vector>

namespace __zz_cib_stl_helpers {

template <typename _ValueType>
class vector_iterator
{
  template <typename _T, typename = void>
  struct UnderlyingIterator
  {
    using type = typename std::vector<_T>::iterator;
  };

  template <typename _T>
  struct UnderlyingIterator<_T, std::enable_if_t<std::is_const_v<_T>, void>>
  {
    using type = typename std::vector<std::remove_const_t<_T>>::const_iterator;
  };

  using UnderlyingIteratorType = typename UnderlyingIterator<_ValueType>::type;

  UnderlyingIteratorType mIter;

private:
  vector_iterator(UnderlyingIteratorType iter) noexcept
    : mIter(iter)
  {
  }

  auto base() const noexcept
  {
    return mIter.base();
  }

public:
  using pointer           = typename std::iterator_traits<_ValueType*>::pointer;
  using iterator_category = typename std::iterator_traits<_ValueType*>::iterator_category;
  using value_type        = typename std::iterator_traits<_ValueType*>::value_type;
  using difference_type   = typename std::iterator_traits<_ValueType*>::difference_type;
  using reference         = typename std::conditional<std::is_pointer_v<value_type>,
                                              std::remove_const_t<value_type>,
                                              typename std::iterator_traits<_ValueType*>::reference>::type;

  vector_iterator() noexcept {}

  reference operator*() const noexcept
  {
    return *mIter;
  }
  pointer operator->() const noexcept
  {
    return mIter.operator->();
  }
  vector_iterator& operator++() noexcept
  {
    ++mIter;
    return *this;
  }
  vector_iterator operator++(int) noexcept
  {
    return vector_iterator(mIter++);
  }

  vector_iterator& operator--() noexcept
  {
    --mIter;
    return *this;
  }
  vector_iterator operator--(int) noexcept
  {
    return vector_iterator(mIter--);
  }

  reference operator[](difference_type n) const noexcept
  {
    return mIter[n];
  }
  vector_iterator& operator+=(difference_type n) noexcept
  {
    mIter += n;
    return *this;
  }
  vector_iterator operator+(difference_type n) const noexcept
  {
    return vector_iterator(mIter + n);
  }
  vector_iterator& operator-=(difference_type n) noexcept
  {
    mIter -= n;
    return *this;
  }
  vector_iterator operator-(difference_type n) const noexcept
  {
    return vector_iterator(mIter - n);
  }

  bool operator==(const vector_iterator& rhs) noexcept
  {
    return base() == rhs.base();
  }
  bool operator!=(const vector_iterator& rhs) noexcept
  {
    return base() != rhs.base();
  }

  bool operator<(const vector_iterator& rhs) noexcept
  {
    return base() < rhs.base();
  }
  bool operator>(const vector_iterator& rhs) noexcept
  {
    return base() > rhs.base();
  }
  bool operator<=(const vector_iterator& rhs) noexcept
  {
    return base() <= rhs.base();
  }
  bool operator>=(const vector_iterator& rhs) noexcept
  {
    return base() >= rhs.base();
  }

  difference_type operator-(const vector_iterator& rhs) noexcept
  {
    return base() - rhs.base();
  }
};
} // namespace __zz_cib_stl_helpers
