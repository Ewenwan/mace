//
// Copyright (c) 2017 XiaoMi All rights reserved.
//

#include "mace/ops/batch_to_space.h"

namespace mace {

REGISTER_OPENCL_OPERATOR(OpKeyBuilder("BatchToSpaceND")
                             .TypeConstraint<float>("T")
                             .Build(),
                         BatchToSpaceNDOp<DeviceType::OPENCL, float>);
REGISTER_OPENCL_OPERATOR(OpKeyBuilder("BatchToSpaceND")
                             .TypeConstraint<half>("T")
                             .Build(),
                         BatchToSpaceNDOp<DeviceType::OPENCL, half>);

}  //  namespace mace
