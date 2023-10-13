#
# Copyright (C) 2023 The Android Open Source Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Configure core_64_bit.mk
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit common LineageOS configurations
$(call inherit-product, vendor/derp/config/common_full_phone.mk)

# Inherit device configurations
$(call inherit-product, device/xiaomi/socrates/device.mk)

# Inherit from Gapps
# $(call inherit-product, vendor/gapps/arm64/arm64-vendor.mk)

## Device identifier
PRODUCT_DEVICE := socrates
PRODUCT_NAME := derp_socrates
PRODUCT_BRAND := Redmi
PRODUCT_MANUFACTURER := Xiaomi

# GMS
PRODUCT_GMS_CLIENTID_BASE := android-xiaomi

# Derp
TARGET_SUPPORTS_QUICK_TAP := true
