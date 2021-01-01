#include <sys/time.h>
//#include "/home/kau/zfs/lib/libspl/include/sys/time.h"
//#include "/home/kau/zfs/lib/libspl/include/linux/smp.h"
//#include <linux/smp.h>

extern unsigned long long a_t, a_c;
extern unsigned long long b_t, b_c;
extern unsigned long long c_t, c_c;
extern unsigned long long d_t, d_c;
extern unsigned long long e_t, e_c;
extern unsigned long long f_t, f_c;
extern unsigned long long g_t, g_c;
extern unsigned long long h_t, h_c;

//extern unsigned long long dbuf_t, dbuf_c;

extern unsigned long long aa_t, aa_c;

#define MILLION 1000000
#define NUMCORE 32
#define calclock(timevalue, total_time, total_count) do{      \
	unsigned long long timedelay;		               \
	timedelay = timevalue[1] - timevalue[0];		\
	*total_time += timedelay;\
	*total_count += 1;\
} while(0)  
/*
 *     *total_time += timedelay;\
 *         *total_count += 1;\
 *             __sync_fetch_and_add(total_time, timedelay); \
 *                 __sync_fetch_and_add(total_count, 1); \
 *                 */


