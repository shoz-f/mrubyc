/* dumped in big endian order.
   use `mrbc -e` option for better performance on little endian CPU. */
#include <stdint.h>
extern const uint8_t mrblib_bytecode[];
const uint8_t
#if defined __GNUC__
__attribute__((aligned(4)))
#elif defined _MSC_VER
__declspec(align(4))
#endif
mrblib_bytecode[] = {
0x52,0x49,0x54,0x45,0x30,0x30,0x30,0x34,0xa1,0xb8,0x00,0x00,0x03,0xc2,0x4d,0x41,
0x54,0x5a,0x30,0x30,0x30,0x30,0x49,0x52,0x45,0x50,0x00,0x00,0x03,0x4b,0x30,0x30,
0x30,0x30,0x00,0x00,0x00,0x67,0x00,0x01,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x0d,
0x00,0x80,0x00,0x05,0x01,0x00,0x00,0x05,0x00,0x80,0x00,0x43,0x00,0x80,0x00,0x45,
0x00,0x80,0x00,0x05,0x01,0x00,0x00,0x05,0x00,0x80,0x40,0x43,0x00,0x80,0x00,0xc5,
0x00,0x80,0x00,0x05,0x01,0x00,0x00,0x05,0x00,0x80,0x80,0x43,0x00,0x80,0x01,0x45,
0x00,0x00,0x00,0x4a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x05,0x41,0x72,
0x72,0x61,0x79,0x00,0x00,0x06,0x46,0x69,0x78,0x6e,0x75,0x6d,0x00,0x00,0x05,0x52,
0x61,0x6e,0x67,0x65,0x00,0x00,0x00,0x00,0x4b,0x00,0x01,0x00,0x03,0x00,0x02,0x00,
0x00,0x00,0x08,0x00,0x00,0x80,0x00,0x48,0x01,0x00,0x00,0xc0,0x00,0x80,0x00,0x46,
0x00,0x80,0x00,0x48,0x01,0x00,0x02,0xc0,0x00,0x80,0x40,0x46,0x00,0x80,0x00,0x84,
0x00,0x00,0x00,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x04,0x65,0x61,
0x63,0x68,0x00,0x00,0x07,0x63,0x6f,0x6c,0x6c,0x65,0x63,0x74,0x00,0x00,0x00,0x00,
0x7f,0x00,0x03,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x12,0x00,0x00,0x00,0x00,0x26,
0x01,0x3f,0xff,0x83,0x00,0x40,0x04,0x17,0x02,0x00,0x00,0x06,0x02,0x80,0x80,0x01,
0x02,0x00,0x00,0xa0,0x01,0x80,0x00,0x2b,0x01,0x80,0x40,0xa0,0x01,0x80,0x80,0x01,
0x01,0x80,0x80,0xad,0x01,0x00,0xc0,0x01,0x01,0x80,0x80,0x01,0x02,0x00,0x00,0x06,
0x02,0x01,0x00,0x20,0x01,0x80,0xc0,0xb3,0x01,0xbf,0xf9,0x98,0x01,0x80,0x00,0x06,
0x01,0x80,0x00,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x00,0x02,0x5b,0x5d,
0x00,0x00,0x04,0x63,0x61,0x6c,0x6c,0x00,0x00,0x01,0x2b,0x00,0x00,0x01,0x3c,0x00,
0x00,0x06,0x6c,0x65,0x6e,0x67,0x74,0x68,0x00,0x00,0x00,0x00,0x95,0x00,0x04,0x00,
0x09,0x00,0x00,0x00,0x00,0x00,0x16,0x00,0x00,0x00,0x00,0x26,0x01,0x3f,0xff,0x83,
0x01,0x81,0x00,0x37,0x00,0x40,0x06,0x17,0x02,0x80,0x00,0x06,0x03,0x00,0x80,0x01,
0x02,0x80,0x00,0xa0,0x02,0x00,0x00,0x2b,0x02,0x00,0x40,0xa0,0x02,0x80,0xc0,0x01,
0x03,0x00,0x80,0x01,0x03,0x81,0x00,0x01,0x02,0x80,0x81,0x20,0x02,0x00,0x80,0x01,
0x02,0x00,0xc0,0xad,0x01,0x01,0x00,0x01,0x02,0x00,0x80,0x01,0x02,0x80,0x00,0x06,
0x02,0x81,0x40,0x20,0x02,0x01,0x00,0xb3,0x02,0x3f,0xf7,0x98,0x01,0x80,0x00,0x29,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x02,0x5b,0x5d,0x00,0x00,0x04,0x63,
0x61,0x6c,0x6c,0x00,0x00,0x03,0x5b,0x5d,0x3d,0x00,0x00,0x01,0x2b,0x00,0x00,0x01,
0x3c,0x00,0x00,0x06,0x6c,0x65,0x6e,0x67,0x74,0x68,0x00,0x00,0x00,0x00,0x36,0x00,
0x01,0x00,0x03,0x00,0x01,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x00,0x80,0x00,0x48,
0x01,0x00,0x00,0xc0,0x00,0x80,0x00,0x46,0x00,0x80,0x00,0x04,0x00,0x00,0x00,0x29,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x05,0x74,0x69,0x6d,0x65,0x73,0x00,
0x00,0x00,0x00,0x65,0x00,0x03,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0x00,
0x00,0x00,0x00,0x26,0x01,0x3f,0xff,0x83,0x00,0x40,0x03,0x17,0x02,0x00,0x80,0x01,
0x01,0x80,0x00,0x2b,0x01,0x80,0x00,0xa0,0x01,0x80,0x80,0x01,0x01,0x80,0x40,0xad,
0x01,0x00,0xc0,0x01,0x01,0x80,0x80,0x01,0x02,0x00,0x00,0x06,0x01,0x80,0x80,0xb3,
0x01,0xbf,0xfb,0x18,0x01,0x80,0x00,0x06,0x01,0x80,0x00,0x29,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x03,0x00,0x04,0x63,0x61,0x6c,0x6c,0x00,0x00,0x01,0x2b,0x00,0x00,
0x01,0x3c,0x00,0x00,0x00,0x00,0x35,0x00,0x01,0x00,0x03,0x00,0x01,0x00,0x00,0x00,
0x05,0x00,0x00,0x00,0x00,0x80,0x00,0x48,0x01,0x00,0x00,0xc0,0x00,0x80,0x00,0x46,
0x00,0x80,0x00,0x04,0x00,0x80,0x00,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x00,0x04,0x65,0x61,0x63,0x68,0x00,0x00,0x00,0x00,0xbb,0x00,0x06,0x00,0x09,0x00,
0x00,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,0x00,0x00,0x00,0x26,0x03,0x00,0x00,0x06,
0x03,0x00,0x00,0x20,0x01,0x01,0x80,0x01,0x03,0x00,0x00,0x06,0x03,0x00,0x40,0x20,
0x01,0x81,0x80,0x01,0x02,0x01,0x80,0x01,0x03,0x00,0x00,0x06,0x03,0x00,0x80,0x20,
0x03,0x40,0x00,0x99,0x00,0x40,0x01,0x97,0x03,0x01,0x00,0x01,0x03,0x00,0xc0,0xad,
0x02,0x01,0x80,0x01,0x02,0x80,0x80,0x01,0x00,0x40,0x03,0x17,0x03,0x81,0x40,0x01,
0x03,0x00,0x00,0x2b,0x03,0x01,0x00,0xa0,0x03,0x01,0x40,0x01,0x03,0x00,0xc0,0xad,
0x02,0x81,0x80,0x01,0x03,0x01,0x40,0x01,0x03,0x81,0x00,0x01,0x03,0x01,0x40,0xb3,
0x03,0x3f,0xfb,0x18,0x03,0x00,0x00,0x06,0x03,0x00,0x00,0x29,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x06,0x00,0x05,0x66,0x69,0x72,0x73,0x74,0x00,0x00,0x04,0x6c,0x61,
0x73,0x74,0x00,0x00,0x0c,0x65,0x78,0x63,0x6c,0x75,0x64,0x65,0x5f,0x65,0x6e,0x64,
0x3f,0x00,0x00,0x01,0x2b,0x00,0x00,0x04,0x63,0x61,0x6c,0x6c,0x00,0x00,0x01,0x3c,
0x00,0x4c,0x56,0x41,0x52,0x00,0x00,0x00,0x59,0x00,0x00,0x00,0x06,0x00,0x03,0x69,
0x64,0x78,0x00,0x03,0x61,0x72,0x79,0x00,0x01,0x69,0x00,0x03,0x76,0x61,0x6c,0x00,
0x04,0x6c,0x61,0x73,0x74,0x00,0x03,0x6c,0x69,0x6d,0xff,0xff,0x00,0x00,0x00,0x00,
0x00,0x02,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x01,0x00,0x03,0xff,0xff,
0x00,0x00,0x00,0x02,0x00,0x02,0xff,0xff,0x00,0x00,0x00,0x03,0x00,0x02,0x00,0x04,
0x00,0x03,0x00,0x05,0x00,0x04,0x00,0x02,0x00,0x05,0x45,0x4e,0x44,0x00,0x00,0x00,
0x00,0x08,
};