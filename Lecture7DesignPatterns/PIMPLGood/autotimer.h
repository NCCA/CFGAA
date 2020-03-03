/// modified from the martin Reddy book
/// See http://APIBook.com/ for the latest version.
///

#ifndef AUTOTIMER_H
#define AUTOTIMER_H

#include <string>

/// An object that reports how long it was alive for when it
/// is destroyed.
///
class AutoTimer
{
public:
  /// Create a new timer object with a human-readable name
  explicit AutoTimer(const std::string &name);
  /// On destruction, the timer reports how long it was alive
  ~AutoTimer();

private:
  // Make this object be noncopyable because it holds a pointer
  AutoTimer(const AutoTimer &)=delete;
  const AutoTimer &operator =(const AutoTimer &)=delete;

  class Impl;
  Impl *m_impl;
};














#endif
