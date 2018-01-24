#include <sys/time.h>
#include <pthread.h>

static long get_time(){
	long time_ms;
	struct timeval t1;
	gettimeofday(&t1, NULL);
	time_ms = (t1.tv_sec) * 1000 + t1.tv_usec / 1000;
	return time_ms;
}

double markTime() {
  struct timeval timeMark;
  gettimeofday(&timeMark,NULL);
  return (double)timeMark.tv_sec + (double)timeMark.tv_usec/1000000.; 
}
