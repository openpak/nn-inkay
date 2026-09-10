#ifndef _PATCHER_H
#define _PATCHER_H

typedef struct URL_Patch {
    unsigned int address;
    char url[80];
} URL_Patch;

static const URL_Patch url_patches[] = {
        //nim-boss .rodata
        {0xE2282550, "http://pushmore.wup.shop.openpak.org/pushmore/r/%s"},
        {0xE229A0A0, "http://npns-dev.c.app.openpak.org/bst.dat"},
        {0xE229A0D0, "http://npns-dev.c.app.openpak.org/bst2.dat"},
        {0xE2281964, "https://tagaya.wup.shop.openpak.org/tagaya/versionlist/%s/%s/%s"},
        {0xE22819B4, "https://tagaya.wup.shop.openpak.org/tagaya/versionlist/%s/%s/latest_version"},
        {0xE2282584, "http://pushmo.wup.shop.openpak.org/pushmo/d/%s/%u"},
        {0xE22825B8, "http://pushmo.wup.shop.openpak.org/pushmo/c/%u/%u"},
        {0xE2282DB4, "https://ecs.wup.shop.openpak.org/ecs/services/ECommerceSOAP"},
        {0xE22830A0, "https://ecs.wup.shop.openpak.org/ecs/services/ECommerceSOAP"},
        {0xE22830E0, "https://nus.wup.shop.openpak.org/nus/services/NetUpdateSOAP"},
        {0xE2299990, "nppl.app.openpak.org"},
        {0xE229A600, "https://pls.wup.shop.openpak.org/pls/upload"},
        {0xE229A6AC, "https://npvk-dev.app.openpak.org/reports"},
        {0xE229A6D8, "https://npvk.app.openpak.org/reports"},
        {0xE229B1F4, "https://npts.app.openpak.org/p01/tasksheet/%s/%s/%s/%s?c=%s&l=%s"},
        {0xE229B238, "https://npts.app.openpak.org/p01/tasksheet/%s/%s/%s?c=%s&l=%s"},
        {0xE22AB2D8, "https://idbe-wup.cdn.openpak.org/icondata/%02X/%016llX.idbe"},
        {0xE22AB318, "https://idbe-ctr.cdn.openpak.org/icondata/%02X/%016llX.idbe"},
        {0xE22AB358, "https://idbe-wup.cdn.openpak.org/icondata/%02X/%016llX-%d.idbe"},
        {0xE22AB398, "https://idbe-ctr.cdn.openpak.org/icondata/%02X/%016llX-%d.idbe"},
        {0xE22B3EF8, "https://ecs.c.shop.openpak.org"},
        {0xE22B3F30, "https://ecs.c.shop.openpak.org/ecs/services/ECommerceSOAP"},
        {0xE22B3F70, "https://ias.c.shop.openpak.org/ias/services/IdentityAuthenticationSOAP"},
        {0xE22B3FBC, "https://cas.c.shop.openpak.org/cas/services/CatalogingSOAP"},
        {0xE22B3FFC, "https://nus.c.shop.openpak.org/nus/services/NetUpdateSOAP"},
        {0xE229DE0C, "n.app.openpak.org"},
        //nim-boss .bss
        {0xE24B8A24, "https://nppl.app.openpak.org/p01/policylist/1/1/UNK"},
        {0xE31930D4, "https://%s%saccount.openpak.org/v%u/api/"}

};

#endif
