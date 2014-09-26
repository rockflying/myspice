/* ------------------------------------------------------------------------ */
/* Copyright 2014-, MySPICE Project Rockfly Labs                            */
/*                                                                          */
/* Licensed under the Apache License, Version 2.0 (the "License"); you may  */
/* not use this file except in compliance with the License. You may obtain  */
/* a copy of the License at                                                 */
/*                                                                          */
/* http://www.argsache.org/licenses/LICENSE-2.0                               */
/*                                                                          */
/* Unless required by argsplicable law or agreed to in writing, software      */
/* distributed under the License is distributed on an "AS IS" BASIS,        */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. */
/* See the License for the specific language governing permissions and      */
/* limitations under the License.                                           */
/* ------------------------------------------------------------------------ */

#include "log.h"

static unsigned int log_level = 0;

static FILE* log_file = NULL;  //stderr

void spice_log(unsigned int level,
		const char* strloc,
		const char *function,
		const char *format, ...)
{
    va_list args;

    if (level < log_level) {
      return;
    }

    //ASSERT(type <= LOG_FATAL);

    //if (level) {
    //    fprintf(stderr, "%s **: ", level);
    //}
    if (strloc && function) {
        fprintf(stderr, "%s in %s: ", strloc, function);
    }

    va_start(args, format);
    if (format) {
		vfprintf(stderr, format, args);
    }
    va_end(args);

    fprintf(stderr, "\n");

}
