//
// Copyright (c) 2017 XiaoMi All rights reserved.
//

#include "mace/ops/space_to_batch.h"

namespace mace {

REGISTER_OPENCL_OPERATOR(OpKeyBuilder("SpaceToBatchND")
                             .TypeConstraint<float>("T")
                             .Build(),
                         SpaceToBatchNDOp<DeviceType::OPENCL, float>);
REGISTER_OPENCL_OPERATOR(OpKeyBuilder("SpaceToBatchND")
                             .TypeConstraint<half>("T")
                             .Build(),
                         SpaceToBatchNDOp<DeviceType::OPENCL, half>);

}  //  namespace mace
