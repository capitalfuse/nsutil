#ifndef _PROCESS_INFO_H_
#define _PROCESS_INFO_H_

#include <assert.h>
#include <errno.h>
#include <limits.h>  // for INT_MAX
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <sys/sysctl.h>
#include <libproc.h>
#include <string.h>

#include <vector>
#include <string>
#include "../sutil_common.h"

bool sutil_pid_exists(const int32_t &pid);
int sutil_get_kinfo_proc(const pid_t &pid, struct kinfo_proc *kp);
int sutil_get_proc_list(struct kinfo_proc **procList, size_t *procCount);
int sutil_get_argmax(void);
int sutil_proc_pidinfo(const int32_t &pid, const int &flavor, void *pti, const int &size);
int sutil_get_arg_list(const int32_t &pid, std::vector<std::string> &arg_list);

#endif
