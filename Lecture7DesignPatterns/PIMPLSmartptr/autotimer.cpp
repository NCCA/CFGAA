/// See http://APIBook.com/ for the latest version.

#include "autotimer.h"

#include <iostream>

#ifdef _WIN32
#include <windows.h>
#else
#include <sys/time.h>
#endif

class AutoTimer::Impl
{
public:

	/// Return how long the object has been alive
	double GetElapsed() const
	{
#ifdef _WIN32
		return (GetTickCount() - mStartTime) / 1e3;
#else
		struct timeval end_time;
		gettimeofday(&end_time, NULL);
    double t1 = m_startTime.tv_usec / 1e6 + m_startTime.tv_sec;
		double t2 = end_time.tv_usec / 1e6 + end_time.tv_sec;
		return t2 - t1;
#endif
	}

  std::string m_name;
#ifdef _WIN32
	DWORD mStartTime;
#else
  struct timeval m_startTime;
#endif
};

AutoTimer::AutoTimer(const std::string &name) :
  m_impl(new AutoTimer::Impl())
{
  m_impl->m_name = name;

#ifdef _WIN32
  m_impl->m_startTime = GetTickCount();
#else
  gettimeofday(&m_impl->m_startTime, NULL);
#endif
}

AutoTimer::~AutoTimer()
{
  std::cout << m_impl->m_name << ": took " << m_impl->GetElapsed()
        << " secs\n";
}

