#ifndef MROS2_PLATFORM_H
#define MROS2_PLATFORM_H

#define MROS2_PLATFORM_NAME "mros2-cube"
#define TARGET_NAME "F767Zi"

#include "cmsis_os.h"

/* convert TARGET_NAME to put into message */
#define quote(x) std::string(q(x))
#define q(x) #x


/* NOTE: this function has not been implemented and used yet */
int mros2_platform_network_connect(void);


#endif /* MROS2_PLATFORM_H */
