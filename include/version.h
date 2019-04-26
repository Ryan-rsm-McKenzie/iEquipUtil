#ifndef IEQUIP_VERSION_INCLUDED
#define IEQUIP_VERSION_INCLUDED

#define MAKE_STR_HELPER(x) #x
#define MAKE_STR(x) MAKE_STR_HELPER(x)

#define IEQUIP_VERSION_MAJOR		6
#define IEQUIP_VERSION_MINOR		0
#define IEQUIP_VERSION_PATCH		4
#define IEQUIP_VERSION_BETA			0
#define IEQUIP_VERSION_VERSTRING	MAKE_STR(IEQUIP_VERSION_MAJOR) "." MAKE_STR(IEQUIP_VERSION_MINOR) "." MAKE_STR(IEQUIP_VERSION_PATCH) "." MAKE_STR(IEQUIP_VERSION_BETA)

#endif
