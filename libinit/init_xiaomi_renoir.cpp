/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>

#include "vendor_init.h"

#define FINGERPRINT_GL "Xiaomi/renoir_global/renoir:13/TKQ1.220829.002/V14.0.7.0.TKIMIXM:user/release-keys"
#define FINGERPRINT_CN "Xiaomi/renoir/renoir:13/TKQ1.220829.002/V14.0.16.0.TKICNXM:user/release-keys"
#define FINGERPRINT_JP "Xiaomi/renoir_jp/renoir:13/TKQ1.220829.002/V14.0.4.0.TKIJPXM:user/release-keys"

static const variant_info_t renoir_global_info = {
    .hwc_value = "GL",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "renoir",
    .marketname = "Mi 11 Lite 5G",
    .model = "M2101K9G",
    .mod_device = "renoir_global",
    .build_fingerprint = FINGERPRINT_GL,
};

static const variant_info_t renoir_info = {
    .hwc_value = "CN",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "renoir",
    .marketname = "Mi 11 Lite",
    .model = "M2101K9C",
    .mod_device = "renoir_global",
    .build_fingerprint = FINGERPRINT_CN,
};

static const variant_info_t renoir_jp_info = {
    .hwc_value = "JP",
    .sku_value = "",

    .brand = "Xiaomi",
    .device = "renoir",
    .marketname = "Mi 11 Lite 5G",
    .model = "M2101K9R",
    .mod_device = "renoir_global",
    .build_fingerprint = FINGERPRINT_JP,
};

static const std::vector<variant_info_t> variants = {
    renoir_global_info,
    renoir_info,
    renoir_jp_info,
};

void vendor_load_properties() {
    search_variant(variants);
}
