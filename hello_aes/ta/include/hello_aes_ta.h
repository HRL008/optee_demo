

#ifndef __HELLO_AES_TA_H__
#define __HELLO_AES_TA_H__

/* UUID of the AES example trusted application */
#define TA_HELLO_AES_UUID \
	{ 0xdcd6f10e, 0xc128, 0x4df6, \
		{ 0x83, 0x14, 0xe9, 0xd8, 0x6e, 0x3c, 0x6f, 0xd3 } }


//#define TA_HELLO_AES_CMD_INC_VALUE	0
//#define TA_HELLO_AES_CMD_DEC_VALUE	1

#define AES_INIT		0
#define AES_PROTECT		1
#define AES_VIEW		2




#endif /* __HELLO_AES_TA_H */
