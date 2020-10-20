#pragma once

#include <iterator>
#include <type_traits>
#include <vector>

namespace __zz_cib_stl_helpers {

template <typename _ValueType>
class vector_reverse_iterator
{
  template <typename T, typename = void>
  struct UnderlyingIterator
  {
    using type = typename std::vector<T>::reverse_iterator;
  };

  template <typename T>
  struct UnderlyingIterator<T, std::enable_if_t<std::is_const_v<T>, void>>
  {
    using type = typename std::vector<std::remove_const_t<T>>::const_reverse_iterator;
  };

  using UnderlyingIteratorType = typename UnderlyingIterator<_ValueType>::type;

  UnderlyingIteratorType mIter;

private:
  vector_reverse_iterator(UnderlyingIteratorType iter) noexcept
    : mIter(iter)
  {
  }

public:
  using pointer           = typename std::iterator_traits<_ValueType*>::pointer;
  using iterator_category = typename std::iterator_traits<_ValueType*>::iterator_category;
  using value_type        = typename std::iterator_traits<_ValueType*>::value_type;
  using difference_type   = typename std::iterator_traits<_ValueType*>::difference_type;
  using reference         = typename std::conditional<std::is_pointer_v<value_type>,
                                              std::remove_const_t<value_type>,
                                              typename std::iterator_traits<_ValueType*>::reference>::type;
  using const_reference   = typename std::conditional<std::is_pointer_v<value_type>,
                                                    std::remove_const_t<value_type>,
                                                    typename std::iterator_traits<const _ValueType*>::reference>::type;

  vector_reverse_iterator() noexcept {}

  reference operator*() noexcept
  {
    return *mIter;
  }
  pointer operator->() const noexcept
  {
    return mIter.operator->();
  }
  const_reference operator*() const noexcept
  {
    return *mIter;
  }
  vector_reverse_iterator& operator++() noexcept
  {
    ++mIter;
    return *this;
  }
  vector_reverse_iterator operator++(int) noexcept
  {
    return vector_reverse_iterator(mIter++);
  }

  vector_reverse_iterator& operator--() noexcept
  {
    --mIter;
    return *this;
  }
  vector_reverse_iterator operator--(int) noexcept
  {
    return vector_reverse_iterator(mIter--);
  }

  reference operator[](difference_type n) const noexcept
  {
    return mIter[n];
  }
  vector_reverse_iterator& operator+=(difference_type n) noexcept
  {
    mIter += n;
    return *this;
  }
  vector_reverse_iterator operator+(difference_type n) const noexcept
  {
    return vector_reverse_iterator(mIter + n);
  }
  vector_reverse_iterator& operator-=(difference_type n) noexcept
  {
    mIter -= n;
    return *this;
  }
  vector_reverse_iterator operator-(difference_type n) const noexcept
  {
    return vector_reverse_iterator(mIter - n);
  }

  bool operator==(const vector_reverse_iterator& rhs) noexcept
  {
    return mIter == rhs.mIter;
  }
  bool operator!=(const vector_reverse_iterator& rhs) noexcept
  {
    return mIter != rhs.mIter;
  }

  bool operator<(const vector_reverse_iterator& rhs) noexcept
  {
    return mIter < rhs.mIter;
  }
  bool operator>(const vector_reverse_iterator& rhs) noexcept
  {
    return mIter > rhs.mIter;
  }
  bool operator<=(const vector_reverse_iterator& rhs) noexcept
  {
    return mIter <= rhs.mIter;
  }
  bool operator>=(const vector_reverse_iterator& rhs) noexcept
  {
    return mIter >= rhs.mIter;
  }

  difference_type operator-(const vector_reverse_iterator& rhs) noexcept
  {
    return mIter - rhs.mIter;
  }
};
} // namespace __zz_cib_stl_helpers
