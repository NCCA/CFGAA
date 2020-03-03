/// based on Martin Reddy book
/// See http://APIBook.com/ for the latest version.
///

#ifndef AUTOTIMER_H
#define AUTOTIMER_H

//#include <boost/scoped_ptr.hpp>
#include <string>
#include <memory>
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
	class Impl;
	std::unique_ptr<Impl> m_impl;
};


#endif






