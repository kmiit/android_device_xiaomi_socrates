/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>
#include <libinit_utils.h>

#include "vendor_init.h"

#define FINGERPRINT "Redmi/socrates/socrates:13/TKQ1.220905.001/V14.0.24.0.TMKCNXM:user/release-keys"

static const variant_info_t socrates_info = {
    .hwc_value = "CN",
    .sku_value = "kalama",

    .brand = "Redmi",
    .device = "scorates",
    .marketname = "Redmi K60 Pro",
    .model = "22127RK46C",
    .mod_device = "fuxi_global", // Fixed miuicamera crash
    .build_fingerprint = FINGERPRINT,
};

static const std::vector<variant_info_t> variants = {
    socrates_info,
};

void vendor_load_properties() {
    set_dalvik_heap();
    search_variant(variants);

    // SafetyNet workaround
    property_override("ro.boot.verifiedbootstate", "green");
}