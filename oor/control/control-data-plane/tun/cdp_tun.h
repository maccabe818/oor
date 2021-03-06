/*
 *
 * Copyright (C) 2011, 2015 Cisco Systems, Inc.
 * Copyright (C) 2015 CBA research group, Technical University of Catalonia.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef CDP_TUN_H_
#define CDP_TUN_H_

#include "../../../iface_list.h"

typedef struct tun_ctr_dplane_data_{
    iface_t *default_ctrl_iface_v4;
    iface_t *default_ctrl_iface_v6;
}tun_ctr_dplane_data_t;


#endif /* CDP_TUN_H_ */
