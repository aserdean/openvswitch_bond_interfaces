/*
 * Copyright (c) 2014 VMware, Inc.
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
 */

#ifndef __TUNNEL_INTF_H_
#define __TUNNEL_INTF_H_ 1
#include <fwpmk.h>

/* Tunnel callout driver load/unload functions */
NTSTATUS OvsTunnelFilterInitialize(PDRIVER_OBJECT driverObject);

VOID OvsTunnelFilterUninitialize(PDRIVER_OBJECT driverObject);

NTSTATUS OvsTunnelEngineOpen(HANDLE *handle);

NTSTATUS
OvsTunnelEngineSubscribe(VOID* pContext,
                         FWPM_SERVICE_STATE bfeState);

VOID OvsTunnelEngineClose(HANDLE *handle);

VOID OvsTunnelAddSystemProvider(HANDLE handle);

VOID OvsTunnelRemoveSystemProvider(HANDLE handle);

#endif /* __TUNNEL_INTF_H_ */
