/*
  Copyright (c) INRIA and Microsoft Corporation. All rights reserved.
  Licensed under the Apache 2.0 License.
*/

//#include <inttypes.h>
//#include <stdbool.h>
#include "../internal/compat.h"
#include "../lowstar_endianness.h"
#include "../internal/types.h"
#include "../internal/target.h"

#ifndef __LowStar_Endianness_H
#define __LowStar_Endianness_H

#include "FStar_UInt128.h"


static inline void store128_le(uint8_t *x0, FStar_UInt128_uint128 x1);

static inline FStar_UInt128_uint128 load128_le(uint8_t *x0);

static inline void store128_be(uint8_t *x0, FStar_UInt128_uint128 x1);

static inline FStar_UInt128_uint128 load128_be(uint8_t *x0);

#define __LowStar_Endianness_H_DEFINED
#endif
