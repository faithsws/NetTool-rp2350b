#include "net_tester_trace.h"

#include <stdio.h>

#include <lvgl.h>
#include <rtthread.h>

static bool g_trace_running;

void net_tester_trace_start(void)
{
    if(g_trace_running) return;

    g_trace_running = true;
    rt_kprintf("[TRACE] start line search (slave mode)\n");
}

void net_tester_trace_stop(void)
{
    if(!g_trace_running) return;

    g_trace_running = false;
    rt_kprintf("[TRACE] stop line search\n");
}

bool net_tester_trace_is_running(void)
{
    return g_trace_running;
}
