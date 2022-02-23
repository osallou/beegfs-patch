#include <common/toolkit/TimeAbs.h>
#include <common/Common.h>


void TimeAbs_init(TimeAbs* this)
{
   struct timespec64 now;
#if defined(KERNEL_HAS_KTIME_GET)
   //now = ktime_to_timeval(ktime_get_real());
   ktime_get_real_ts64(&now);
#else
   do_gettimeofday(&now);
#endif

   this->now.tv_sec = now.tv_sec;
   //this->now.tv_usec = now.tv_usec;
   this->now.tv_nsec = now.tv_nsec;
}
