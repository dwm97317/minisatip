#if !defined(DISABLE_DVBCA) || !defined(DISABLE_DVBCSA)								 

#ifndef TABLES_H
#define TABLES_H

#define TABLES_ITEM 0x2000000000000

#include "adapter.h"

#define PID_FROM_TS(b) ((b[1] & 0x1F)*256 + b[2])

int process_pat(unsigned char *b, adapter *ad);
int assemble_packet(uint8_t **b, adapter *ad);


#endif

#endif
