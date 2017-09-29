/*
   Copyright (c) 2013, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>

#include "vendor_init.h"
#include "property_service.h"
#include "util.h"

void vendor_load_properties()
{
	char bootloader[PROP_VALUE_MAX];

	property_get("ro.bootloader");

	if (strstr(bootloader, "G930AZ")) {
		/* Cricket */
		property_set("ro.product.model", "SM-G930AZ");
		property_set("ro.product.name", "heroqltecri");
	} else if (strstr(bootloader, "G930A")) {
		/* AT&T */
		property_set("ro.product.model", "SM-G930A");
		property_set("ro.product.name", "heroqlteatt");
	} else if (strstr(bootloader, "G930T1")) {
		/* MetroPCS */
		property_set("ro.product.model", "SM-G930T1");
		property_set("ro.product.name", "heroqltemtr");
	} else if (strstr(bootloader, "G930T")) {
		/* T-Mobile */
		property_set("ro.product.model", "SM-G930T");
		property_set("ro.product.name", "heroqltetmo");
	} else if (strstr(bootloader, "G930P")) {
		/* Sprint */
		property_set("ro.product.model", "SM-G930P");
		property_set("ro.product.name", "heroqltespr");
	} else if (strstr(bootloader, "G930R4")) {
		/* US Cellular */
		property_set("ro.product.model", "SM-G930R4");
		property_set("ro.product.name", "heroqlteusc");
	} else if (strstr(bootloader, "G930R6")) {
		/* Verizon Rural LTE */
		property_set("ro.product.model", "SM-G930R6");
		property_set("ro.product.name", "heroqltelru");
	} else if (strstr(bootloader, "G930R7")) {
		/* C-Spire Wireless */
		property_set("ro.product.model", "SM-G930R7");
		property_set("ro.product.name", "heroqltespi");
	} else if (strstr(bootloader, "G930V")) {
		/* Verizon */
		property_set("ro.product.model", "SM-G930V");
		property_set("ro.product.name", "heroqltevzw");
	} else if (strstr(bootloader, "G930U")) {
		/* all other variants become USA Unbranded */
		property_set("ro.product.model", "SM-G930U");
		property_set("ro.product.name", "heroqlteusa");
	}
	property_set("ro.product.device", "heroqlte");
}
