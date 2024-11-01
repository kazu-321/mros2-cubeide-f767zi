/* target dependent procedure for mros2-HAL
 * Copyright (c) 2023 mROS-base
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "mros2.h"
#include "lwip/sys.h"
#include "mros2-platform.h"
#include "lwip.h"
#include "ethernetif.h"
#include "lwip/netif.h"
#include "lwip/dhcp.h"
#include "lwip/ip_addr.h"
#include <array>
#include <cstdio>

extern struct netif gnetif;

namespace mros2_platform
{

/*
 *  Setup network I/F
 */
err_t network_connect(void)
{
//    ip_addr_t ipaddr, netmask, gw;
//    err_t result = ERR_OK;
//
//#ifdef MROS2_IP_ADDRESS_STATIC
//    IP4_ADDR(&ipaddr, MROS2_IP_ADDRESS[0], MROS2_IP_ADDRESS[1], MROS2_IP_ADDRESS[2], MROS2_IP_ADDRESS[3]);
//    IP4_ADDR(&netmask, MROS2_SUBNET_MASK[0], MROS2_SUBNET_MASK[1], MROS2_SUBNET_MASK[2], MROS2_SUBNET_MASK[3]);
//    IP4_ADDR(&gw, MROS2_DEFAULT_GATEWAY[0], MROS2_DEFAULT_GATEWAY[1], MROS2_DEFAULT_GATEWAY[2], MROS2_DEFAULT_GATEWAY[3]);
//    netif_set_addr(&gnetif, &ipaddr, &netmask, &gw);
//#else  /* MROS2_IP_ADDRESS_STATIC */
//    ip_addr_set_zero_ip4(&ipaddr);
//    ip_addr_set_zero_ip4(&netmask);
//    ip_addr_set_zero_ip4(&gw);
//    netif_set_addr(&gnetif, &ipaddr, &netmask, &gw);
//    dhcp_start(&gnetif);
//    while (gnetif.ip_addr.addr == 0) {
//        sys_check_timeouts();
//    }
//#endif /* MROS2_IP_ADDRESS_STATIC */
//
//    if (gnetif.ip_addr.addr == 0)
//    {
//        MROS2_ERROR("Network connection failed");
//        result = ERR_CONN;
//    }
//    else
//    {
//        MROS2_DEBUG("Successfully connected to network");
//        MROS2_DEBUG("  IP Address: %s", ip4addr_ntoa(&gnetif.ip_addr));
//    }
//
//    /* convert IP address to be used in rtps/config.h */
//    std::array<uint8_t, 4> ipaddr_array;
//    sscanf(ip4addr_ntoa(&gnetif.ip_addr), "%hhd.%hhd.%hhd.%hhd", &ipaddr_array[0], &ipaddr_array[1], &ipaddr_array[2], &ipaddr_array[3]);
//
//    mros2::setIPAddrRTPS(ipaddr_array);
//
	MX_LWIP_Init();
	return ERR_OK;
}

}  /* namespace mros2_platform */
