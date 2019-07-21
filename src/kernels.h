#pragma once
#include <float.h>
#include "common.h"
#include "tile.h"

namespace SCAMP {

SCAMPError_t gpu_kernel_self_join_upper(Tile *t);
SCAMPError_t gpu_kernel_self_join_lower(Tile *t);
SCAMPError_t gpu_kernel_ab_join_upper(Tile *t);
SCAMPError_t gpu_kernel_ab_join_lower(Tile *t);

}  // namespace SCAMP
