#ifndef NET_TESTER_TRACE_H
#define NET_TESTER_TRACE_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/* 开始从机寻线搜索（硬件层后续在此对接） */
void net_tester_trace_start(void);

/* 停止寻线搜索 */
void net_tester_trace_stop(void);

bool net_tester_trace_is_running(void);

#ifdef __cplusplus
}
#endif

#endif /* NET_TESTER_TRACE_H */
