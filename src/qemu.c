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

#include <pthread.h>
#include <sys/select.h>
#include <stdio.h>
#include <unistd.h>

static const char *optString = "p:hl:";

static int port;
static log_level;

int main(int argc, char* argv[])
{
	int c;
	while((c = getopt(argc, argv, optString)) != -1) {
		switch(c) {
			case 'p':
				port = atoi(optarg);
				break;

			case 'h':
				break;

			case 'l':
				log_level = atoi(optarg);
				break;

			default:
				printf("Usage:");
		}
	}
}
