/* MIT License
 *
 * Copyright (c) 2016-2020 INRIA, CMU and Microsoft Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

//#include "evercrypt_targetconfig.h"
//#include "libintvector.h"
#include "kremlin/internal/types.h"
#include "kremlin/lowstar_endianness.h"
#include <linux/string.h>
#include "kremlin/internal/target.h"
#include <asm/hypsec_host.h>
#include <asm/kvm_hyp.h>
#include <asm/kvm_mmu.h>

#ifndef __Hacl_Kremlib_H
#define __Hacl_Kremlib_H




static inline uint8_t FStar_UInt8_eq_mask(uint8_t a, uint8_t b);

static inline uint64_t FStar_UInt64_eq_mask(uint64_t a, uint64_t b);

static inline uint64_t FStar_UInt64_gte_mask(uint64_t a, uint64_t b);

static inline FStar_UInt128_uint128
FStar_UInt128_add(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static inline FStar_UInt128_uint128
FStar_UInt128_add_mod(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static inline FStar_UInt128_uint128
FStar_UInt128_logor(FStar_UInt128_uint128 a, FStar_UInt128_uint128 b);

static inline FStar_UInt128_uint128
FStar_UInt128_shift_left(FStar_UInt128_uint128 a, uint32_t s);

static inline FStar_UInt128_uint128
FStar_UInt128_shift_right(FStar_UInt128_uint128 a, uint32_t s);

static inline FStar_UInt128_uint128 FStar_UInt128_uint64_to_uint128(uint64_t a);

static inline uint64_t FStar_UInt128_uint128_to_uint64(FStar_UInt128_uint128 a);

static inline FStar_UInt128_uint128 FStar_UInt128_mul_wide(uint64_t x, uint64_t y);

static inline void store128_le(uint8_t *x0, FStar_UInt128_uint128 x1);

static inline void store128_be(uint8_t *x0, FStar_UInt128_uint128 x1);

static inline FStar_UInt128_uint128 load128_be(uint8_t *x0);

uint32_t LowStar_Vector_new_capacity(uint32_t cap);

#define __Hacl_Kremlib_H_DEFINED
#endif
