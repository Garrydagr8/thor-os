//=======================================================================
// Copyright Baptiste Wicht 2013-2014.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//=======================================================================

#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "process.hpp"
#include "interrupts.hpp"

namespace scheduler {

void init();
void start();

void kill_current_process();

void reschedule(const interrupt::syscall_regs& regs);

process_t new_process();
void queue_process(process_t&& p);

} //end of namespace scheduler

#endif
