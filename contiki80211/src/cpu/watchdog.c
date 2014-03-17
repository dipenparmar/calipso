/**
 * \addtogroup mb851-platform
 *
 * @{
 */

/*
 * Copyright (c) 2010, STMicroelectronics.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 * 3. The name of the author may not be used to endorse or promote
 *    products derived from this software without specific prior
 *    written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

/**
* \file
*			Watchdog
* \author
*			Salvatore Pitrulli <salvopitru@users.sourceforge.net>
*/

#include <stdio.h>
#include "dev/watchdog.h"
//#include PLATFORM_HEADER
#include "hal/error.h"
//#include "hal/hal.h"

/*---------------------------------------------------------------------------*/
void
watchdog_init(void)
{

}
/*---------------------------------------------------------------------------*/
void
watchdog_start(void)
{
  /* 
   * We setup the watchdog to reset the device after 2.048 seconds,
   * unless watchdog_periodic() is called.
   */
  // FIXME halInternalEnableWatchDog();
}
/*---------------------------------------------------------------------------*/
void
watchdog_periodic(void)
{
  /* This function is called periodically to restart the watchdog timer. */
  // FIXME halResetWatchdog();
}
/*---------------------------------------------------------------------------*/
void
watchdog_stop(void)
{
  // FIXME halInternalDisableWatchDog(MICRO_DISABLE_WATCH_DOG_KEY);
}
/*---------------------------------------------------------------------------*/
void
watchdog_reboot(void)
{
  // FIXME halReboot();
}
/*---------------------------------------------------------------------------*/
/** @} */ 
