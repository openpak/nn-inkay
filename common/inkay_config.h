//
// Created by ash on 17/12/24.
//

#ifndef INKAY_INKAY_CONFIG_H
#define INKAY_INKAY_CONFIG_H

#ifdef __has_include
#if __has_include("inkay_config.local.h")

#include "inkay_config.local.h"
#define INKAY_CUSTOM 1

#endif
#endif

#ifndef NETWORK_BASEURL
#define NETWORK_BASEURL "openpak.org"
// The console resolves every *.openpak.org name to these addresses itself (dns_hooks.cpp), so
// no public DNS record is needed. Override at build time: -DOPENPAK_SERVER_IP='"1.2.3.4"'.
#ifndef OPENPAK_SERVER_IP
#define OPENPAK_SERVER_IP "145.241.199.19"
#endif
#ifndef OPENPAK_NNCS2_IP
#define OPENPAK_NNCS2_IP "145.241.228.207"
#endif
#endif

#endif //INKAY_INKAY_CONFIG_H
