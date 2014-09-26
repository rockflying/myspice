/* ------------------------------------------------------------------------ */
/* Copyright 2014-, MySPICE Project Rockfly Labs                            */
/*                                                                          */
/* Licensed under the Apache License, Version 2.0 (the "License"); you may  */
/* not use this file except in compliance with the License. You may obtain  */
/* a copy of the License at                                                 */
/*                                                                          */
/* http://www.apache.org/licenses/LICENSE-2.0                               */
/*                                                                          */
/* Unless required by applicable law or agreed to in writing, software      */
/* distributed under the License is distributed on an "AS IS" BASIS,        */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. */
/* See the License for the specific language governing permissions and      */
/* limitations under the License.                                           */
/* ------------------------------------------------------------------------ */

#include <stdarg.h>
#include <stdio.h>

#define STRINGIFY(x) STRINGIFY_ARG (x)
#define STRINGIFY_ARG(x) #x

#define STRLOC  (__FILE__ ":" STRINGIFY (__LINE__))

typedef enum {
	LOG_LEVEL_ERROR,
	LOG_LEVEL_CRITICAL,
	LOG_LEVEL_WARNING,
	LOG_LEVEL_INFO,
	LOG_LEVEL_DEBUG,
} LogLevel;


