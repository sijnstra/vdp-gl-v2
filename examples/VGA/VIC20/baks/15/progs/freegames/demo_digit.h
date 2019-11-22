const uint8_t demo_digit_prg[] = {
  0x01, 0x10, 0x0c, 0x10, 0x00, 0x00, 0x9e, 0x20, 0x34, 0x31, 0x31, 0x30,
  0x00, 0x00, 0x00, 0x78, 0x20, 0x5f, 0xe5, 0xa9, 0xff, 0x8d, 0x05, 0x90,
  0xa9, 0x9d, 0x8d, 0x02, 0x90, 0xa9, 0x08, 0x8d, 0x03, 0x90, 0xa9, 0x30,
  0x8d, 0xc9, 0x1a, 0xa9, 0x00, 0x8d, 0x0f, 0x90, 0x20, 0x6f, 0x10, 0xa2,
  0x00, 0xa9, 0x21, 0x9d, 0x00, 0x1e, 0xa9, 0x08, 0x9d, 0x00, 0x96, 0xe8,
  0xe0, 0x00, 0xd0, 0xf1, 0xa9, 0x10, 0x8d, 0xc0, 0x1a, 0xa9, 0x05, 0x8d,
  0xc3, 0x1a, 0xad, 0x04, 0x90, 0xc9, 0x00, 0xd0, 0xf9, 0xad, 0xc9, 0x1a,
  0x8d, 0x01, 0x90, 0xad, 0xc3, 0x1a, 0x8d, 0x00, 0x90, 0x20, 0x82, 0x10,
  0xad, 0x04, 0x90, 0xc9, 0x8a, 0xd0, 0xf9, 0x20, 0xa9, 0x13, 0x20, 0x8d,
  0x14, 0x4c, 0x49, 0x10, 0xa2, 0x00, 0x20, 0x08, 0x13, 0xe8, 0xe0, 0x04,
  0xd0, 0xf8, 0xa9, 0x06, 0x8d, 0xb7, 0x1a, 0x8d, 0xb8, 0x1a, 0x60, 0xad,
  0xb8, 0x1a, 0xcd, 0xb7, 0x1a, 0xd0, 0x0a, 0xa9, 0x00, 0x8d, 0xc1, 0x1a,
  0xa9, 0x20, 0x8d, 0xc2, 0x1a, 0xce, 0xb8, 0x1a, 0xad, 0xb8, 0x1a, 0xc9,
  0xff, 0xf0, 0x03, 0x4c, 0x6d, 0x11, 0xad, 0xb7, 0x1a, 0x8d, 0xb8, 0x1a,
  0xa2, 0x00, 0xde, 0x9e, 0x1a, 0xbd, 0x9e, 0x1a, 0x30, 0x03, 0x4c, 0x65,
  0x11, 0xbd, 0x3a, 0x18, 0x8d, 0xee, 0x10, 0x8d, 0x04, 0x11, 0x8d, 0x4d,
  0x11, 0xbd, 0x3e, 0x18, 0x8d, 0xef, 0x10, 0x8d, 0x05, 0x11, 0x8d, 0x4e,
  0x11, 0xa9, 0x00, 0x9d, 0x9e, 0x1a, 0xbd, 0xa2, 0x1a, 0x9d, 0x96, 0x1a,
  0x5d, 0x9e, 0x1a, 0x5d, 0xa6, 0x1a, 0xa9, 0xff, 0x9d, 0xaa, 0x1a, 0x18,
  0xbd, 0x8e, 0x1a, 0x7d, 0x86, 0x1a, 0xbc, 0x86, 0x1a, 0xa8, 0xb9, 0x00,
  0x10, 0x8c, 0xbe, 0x1a, 0xc9, 0x7f, 0x90, 0x2b, 0x49, 0x80, 0x8d, 0xbd,
  0x1a, 0xfe, 0x86, 0x1a, 0xc8, 0xee, 0xbe, 0x1a, 0xb9, 0x00, 0x10, 0x8d,
  0xbb, 0x1a, 0x18, 0x29, 0xf0, 0x6a, 0x6a, 0x6a, 0x6a, 0xc9, 0x00, 0xf0,
  0x03, 0x9d, 0x9a, 0x1a, 0xad, 0xbb, 0x1a, 0x29, 0x0f, 0x9d, 0x9e, 0x1a,
  0xad, 0xbd, 0x1a, 0xbc, 0x9a, 0x1a, 0xc9, 0x3f, 0x90, 0x13, 0x49, 0x40,
  0x8d, 0xbd, 0x1a, 0xa9, 0x00, 0x9d, 0xaa, 0x1a, 0x9d, 0xae, 0x1a, 0x9d,
  0xb2, 0x1a, 0xad, 0xbd, 0x1a, 0x9d, 0x8a, 0x1a, 0xfe, 0x86, 0x1a, 0xb9,
  0xc9, 0x17, 0x9d, 0xa6, 0x1a, 0xac, 0xbe, 0x1a, 0xc8, 0xb9, 0x00, 0x10,
  0xc9, 0xff, 0xd0, 0x12, 0xa9, 0x00, 0x9d, 0x86, 0x1a, 0xde, 0x92, 0x1a,
  0xbd, 0x92, 0x1a, 0xc9, 0xff, 0xd0, 0x03, 0x20, 0x08, 0x13, 0xe8, 0xe0,
  0x04, 0xf0, 0x03, 0x4c, 0xa9, 0x10, 0xa9, 0xff, 0x8d, 0xb6, 0x1a, 0xa9,
  0x00, 0x8d, 0xba, 0x1a, 0xa2, 0x00, 0xbc, 0x9a, 0x1a, 0xc0, 0x00, 0xf0,
  0x29, 0xb9, 0xf3, 0x17, 0xcd, 0xba, 0x1a, 0xb0, 0x03, 0x4c, 0x97, 0x11,
  0x8d, 0xba, 0x1a, 0xbc, 0xa6, 0x1a, 0xb9, 0x50, 0x17, 0x8d, 0xbc, 0x1a,
  0xbc, 0x9a, 0x1a, 0xb9, 0x01, 0x18, 0xc9, 0x00, 0xf0, 0x08, 0xb0, 0x03,
  0x4c, 0xa9, 0x11, 0x8e, 0xb6, 0x1a, 0xe8, 0xe0, 0x03, 0xd0, 0xcb, 0xa2,
  0x00, 0xe0, 0x03, 0xd0, 0x03, 0x4c, 0x9e, 0x12, 0xbd, 0x8a, 0x1a, 0xc9,
  0x00, 0xd0, 0x03, 0x4c, 0x78, 0x12, 0x18, 0x7d, 0x96, 0x1a, 0x8d, 0xbd,
  0x1a, 0xad, 0x0d, 0x90, 0xc9, 0x00, 0xd0, 0x05, 0xa9, 0x7f, 0x8d, 0x0d,
  0x90, 0xbc, 0x9a, 0x1a, 0xad, 0xb6, 0x1a, 0xc9, 0xff, 0xf0, 0x0e, 0xec,
  0xb6, 0x1a, 0xd0, 0x09, 0xbc, 0xa6, 0x1a, 0xb9, 0xba, 0x17, 0x8d, 0x0d,
  0x90, 0x18, 0xbc, 0xa6, 0x1a, 0xb9, 0x85, 0x17, 0xc9, 0x00, 0xf0, 0x1f,
  0xc9, 0x10, 0xb0, 0x18, 0xad, 0xbd, 0x1a, 0x79, 0x85, 0x17, 0x8d, 0xbd,
  0x1a, 0xad, 0xbd, 0x1a, 0xc9, 0x26, 0x90, 0x0b, 0xa9, 0x00, 0x8d, 0xbd,
  0x1a, 0x4c, 0x16, 0x12, 0x4c, 0x78, 0x12, 0xac, 0xbd, 0x1a, 0xb9, 0x29,
  0x17, 0x8d, 0xbd, 0x1a, 0xbd, 0xaa, 0x1a, 0xc9, 0xff, 0xf0, 0x4f, 0xbc,
  0x9a, 0x1a, 0xfe, 0xb2, 0x1a, 0xbd, 0xb2, 0x1a, 0xd9, 0x0f, 0x18, 0xd0,
  0x25, 0xa9, 0x00, 0x9d, 0xb2, 0x1a, 0xfe, 0xaa, 0x1a, 0x18, 0xbd, 0xaa,
  0x1a, 0xd9, 0x1d, 0x18, 0xd0, 0x14, 0xa9, 0x00, 0x9d, 0xaa, 0x1a, 0xfe,
  0xae, 0x1a, 0xbd, 0xae, 0x1a, 0xc9, 0x02, 0xd0, 0x05, 0xa9, 0x00, 0x9d,
  0xae, 0x1a, 0xbd, 0xae, 0x1a, 0xc9, 0x01, 0xf0, 0x0c, 0xad, 0xbd, 0x1a,
  0x7d, 0xaa, 0x1a, 0x8d, 0xbd, 0x1a, 0x4c, 0x75, 0x12, 0xad, 0xbd, 0x1a,
  0xfd, 0xaa, 0x1a, 0x8d, 0xbd, 0x1a, 0xad, 0xbd, 0x1a, 0x9d, 0x0a, 0x90,
  0xbc, 0x9a, 0x1a, 0xfe, 0xa6, 0x1a, 0xbd, 0xa6, 0x1a, 0xd9, 0xd7, 0x17,
  0xd0, 0x06, 0xb9, 0xe5, 0x17, 0x9d, 0xa6, 0x1a, 0xe8, 0x4c, 0xb0, 0x11,
  0x18, 0xad, 0xbc, 0x1a, 0x6d, 0xc0, 0x1a, 0x8d, 0x0e, 0x90, 0x60, 0xad,
  0xc2, 0x1a, 0xc9, 0x80, 0xf0, 0xee, 0xbd, 0x8a, 0x1a, 0xc9, 0x00, 0xf0,
  0xe7, 0xa8, 0xb9, 0x2b, 0x18, 0x8d, 0xc4, 0x12, 0xb9, 0x30, 0x18, 0x8d,
  0xc5, 0x12, 0xb9, 0x35, 0x18, 0x8d, 0xbe, 0x1a, 0xac, 0xc1, 0x1a, 0x18,
  0xb9, 0x00, 0x18, 0x8d, 0xbf, 0x1a, 0x29, 0x0f, 0x20, 0xf3, 0x12, 0x18,
  0xad, 0xbf, 0x1a, 0x29, 0xf0, 0x6a, 0x6a, 0x6a, 0x6a, 0x20, 0xf3, 0x12,
  0xc8, 0xcc, 0xc2, 0x1a, 0xd0, 0xe1, 0x18, 0xad, 0xc1, 0x1a, 0x69, 0x20,
  0x8d, 0xc1, 0x1a, 0xad, 0xc2, 0x1a, 0x69, 0x20, 0x8d, 0xc2, 0x1a, 0x60,
  0x6d, 0xc0, 0x1a, 0x8d, 0x0e, 0x90, 0x8c, 0xbd, 0x1a, 0xac, 0xbe, 0x1a,
  0x88, 0xc0, 0x00, 0xd0, 0xfb, 0xac, 0xbd, 0x1a, 0x60, 0xbd, 0x42, 0x18,
  0x8d, 0x75, 0x13, 0xbd, 0x46, 0x18, 0x8d, 0x76, 0x13, 0xbd, 0x5b, 0x18,
  0x8d, 0x39, 0x13, 0x8d, 0x46, 0x13, 0x8d, 0x5a, 0x13, 0xbd, 0x5f, 0x18,
  0x8d, 0x3a, 0x13, 0x8d, 0x47, 0x13, 0x8d, 0x5b, 0x13, 0xa9, 0x00, 0x9d,
  0xa2, 0x1a, 0x9d, 0x92, 0x1a, 0x18, 0xbc, 0x82, 0x1a, 0xb9, 0x00, 0x10,
  0xc9, 0xff, 0xd0, 0x09, 0xa9, 0x00, 0x9d, 0x82, 0x1a, 0xa8, 0xb9, 0x00,
  0x10, 0xc9, 0x0f, 0x90, 0x27, 0xc9, 0x7f, 0x90, 0x12, 0x49, 0x80, 0x8d,
  0xbb, 0x1a, 0xfe, 0x82, 0x1a, 0xc8, 0xb9, 0x00, 0x10, 0x9d, 0xa2, 0x1a,
  0x4c, 0x65, 0x13, 0x8d, 0xbb, 0x1a, 0xa0, 0x01, 0x20, 0x83, 0x13, 0xad,
  0xb9, 0x1a, 0x9d, 0x92, 0x1a, 0xad, 0xbb, 0x1a, 0xa8, 0xb9, 0x00, 0x10,
  0x9d, 0x8e, 0x1a, 0xa9, 0x00, 0x9d, 0x86, 0x1a, 0xfe, 0x82, 0x1a, 0x60,
  0xa9, 0x00, 0x8d, 0xb9, 0x1a, 0xb9, 0x21, 0x17, 0x2c, 0xbb, 0x1a, 0xf0,
  0x13, 0x18, 0xad, 0xb9, 0x1a, 0x79, 0x25, 0x17, 0x8d, 0xb9, 0x1a, 0xad,
  0xbb, 0x1a, 0x59, 0x21, 0x17, 0x8d, 0xbb, 0x1a, 0xc8, 0xc0, 0x04, 0xd0,
  0xe0, 0x60, 0xad, 0xc7, 0x1a, 0xc9, 0x00, 0xf0, 0x04, 0xce, 0xc7, 0x1a,
  0x60, 0xee, 0xc3, 0x1a, 0xad, 0xc3, 0x1a, 0xc9, 0x07, 0xd0, 0x06, 0xa9,
  0x05, 0x8d, 0xc3, 0x1a, 0x60, 0xc9, 0x06, 0xf0, 0x01, 0x60, 0xa2, 0x00,
  0xbd, 0x01, 0x1e, 0x9d, 0x00, 0x1e, 0xbd, 0x01, 0x96, 0x9d, 0x00, 0x96,
  0xbd, 0x1e, 0x1e, 0x9d, 0x1d, 0x1e, 0xbd, 0x1e, 0x96, 0x9d, 0x1d, 0x96,
  0xbd, 0x3b, 0x1e, 0x9d, 0x3a, 0x1e, 0xbd, 0x3b, 0x96, 0x9d, 0x3a, 0x96,
  0xbd, 0x58, 0x1e, 0x9d, 0x57, 0x1e, 0xbd, 0x58, 0x96, 0x9d, 0x57, 0x96,
  0xe8, 0xe0, 0x1c, 0xd0, 0xcb, 0x18, 0xad, 0xc6, 0x1a, 0xac, 0xc5, 0x1a,
  0x79, 0x07, 0x17, 0xa8, 0xb9, 0xf7, 0x14, 0x8d, 0x1c, 0x1e, 0xb9, 0x5f,
  0x15, 0x8d, 0x39, 0x1e, 0xb9, 0xc7, 0x15, 0x8d, 0x56, 0x1e, 0xb9, 0x2f,
  0x16, 0x8d, 0x73, 0x1e, 0xad, 0xc8, 0x1a, 0x8d, 0x1c, 0x96, 0x8d, 0x39,
  0x96, 0x8d, 0x56, 0x96, 0x8d, 0x73, 0x96, 0xa9, 0x04, 0x8d, 0xbd, 0x1a,
  0xad, 0xc5, 0x1a, 0xc9, 0x00, 0xd0, 0x03, 0xce, 0xbd, 0x1a, 0xee, 0xc6,
  0x1a, 0xad, 0xc6, 0x1a, 0xcd, 0xbd, 0x1a, 0xd0, 0x40, 0xa9, 0x00, 0x8d,
  0xc6, 0x1a, 0xee, 0xc4, 0x1a, 0xac, 0xc4, 0x1a, 0xb9, 0x97, 0x16, 0xc9,
  0x80, 0x90, 0x0b, 0x29, 0x7f, 0x6a, 0x6a, 0x6a, 0x8d, 0xc8, 0x1a, 0x4c,
  0x51, 0x14, 0x8d, 0xc5, 0x1a, 0xad, 0xc5, 0x1a, 0xc9, 0x7e, 0xd0, 0x0d,
  0xa9, 0xc0, 0x8d, 0xc7, 0x1a, 0xa9, 0x00, 0x8d, 0xc5, 0x1a, 0x4c, 0x8c,
  0x14, 0xc9, 0x7f, 0xd0, 0x08, 0xa9, 0x00, 0x8d, 0xc4, 0x1a, 0x8d, 0xc5,
  0x1a, 0x60, 0xad, 0xc9, 0x1a, 0xc9, 0x31, 0xb0, 0x13, 0xa9, 0x30, 0x8d,
  0xc9, 0x1a, 0xa9, 0x00, 0x8d, 0xca, 0x1a, 0x8d, 0xcc, 0x1a, 0x8d, 0xcb,
  0x1a, 0x4c, 0xb8, 0x14, 0xad, 0xc9, 0x1a, 0xc9, 0x70, 0x90, 0x0a, 0xa9,
  0x70, 0x8d, 0xc9, 0x1a, 0xa9, 0x01, 0x8d, 0xca, 0x1a, 0xac, 0xcb, 0x1a,
  0x18, 0xad, 0xca, 0x1a, 0xc9, 0x00, 0xd0, 0x0c, 0xad, 0xc9, 0x1a, 0x79,
  0xec, 0x14, 0x8d, 0xc9, 0x1a, 0x4c, 0xd8, 0x14, 0xad, 0xc9, 0x1a, 0xf9,
  0xec, 0x14, 0x8d, 0xc9, 0x1a, 0xad, 0xcc, 0x1a, 0xd9, 0xec, 0x14, 0xd0,
  0x08, 0xa9, 0x00, 0x8d, 0xcc, 0x1a, 0xee, 0xcb, 0x1a, 0xee, 0xcc, 0x1a,
  0x60, 0x00, 0x01, 0x02, 0x04, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02, 0x01,
  0x21, 0x21, 0x21, 0x21, 0x22, 0x23, 0x23, 0x24, 0x22, 0x23, 0x23, 0x2e,
  0x22, 0x23, 0x23, 0x2e, 0x22, 0x23, 0x23, 0x2e, 0x22, 0x23, 0x23, 0x2e,
  0x22, 0x23, 0x23, 0x2e, 0x22, 0x23, 0x23, 0x2e, 0x22, 0x24, 0x22, 0x2e,
  0x22, 0x23, 0x23, 0x24, 0x22, 0x23, 0x23, 0x24, 0x22, 0x24, 0x22, 0x2e,
  0x22, 0x24, 0x21, 0x21, 0x22, 0x2b, 0x2c, 0x24, 0x22, 0x23, 0x23, 0x2e,
  0x22, 0x23, 0x23, 0x24, 0x22, 0x23, 0x23, 0x2e, 0x22, 0x23, 0x23, 0x24,
  0x22, 0x23, 0x23, 0x24, 0x22, 0x23, 0x23, 0x24, 0x22, 0x23, 0x23, 0x24,
  0x22, 0x24, 0x22, 0x2e, 0x22, 0x24, 0x22, 0x2e, 0x22, 0x2b, 0x2c, 0x24,
  0x21, 0x22, 0x24, 0x21, 0x22, 0x23, 0x23, 0x2e, 0x21, 0x21, 0x21, 0x21,
  0x25, 0x29, 0x2a, 0x2d, 0x25, 0x32, 0x33, 0x30, 0x25, 0x35, 0x34, 0x34,
  0x39, 0x29, 0x2a, 0x2d, 0x25, 0x20, 0x3c, 0x3b, 0x25, 0x20, 0x3c, 0x3b,
  0x25, 0x35, 0x34, 0x34, 0x25, 0x2d, 0x25, 0x2d, 0x34, 0x20, 0x20, 0x35,
  0x34, 0x34, 0x39, 0x2d, 0x39, 0x20, 0x20, 0x30, 0x25, 0x2d, 0x37, 0x38,
  0x25, 0x20, 0x20, 0x2d, 0x25, 0x2d, 0x25, 0x2d, 0x25, 0x29, 0x2a, 0x2d,
  0x25, 0x32, 0x33, 0x2d, 0x25, 0x29, 0x2a, 0x2d, 0x39, 0x32, 0x33, 0x30,
  0x25, 0x3c, 0x3c, 0x3b, 0x26, 0x20, 0x20, 0x2d, 0x25, 0x2d, 0x25, 0x2d,
  0x25, 0x2d, 0x25, 0x2d, 0x25, 0x20, 0x20, 0x2d, 0x21, 0x25, 0x2d, 0x21,
  0x34, 0x22, 0x23, 0x2f, 0x21, 0x21, 0x21, 0x21, 0x25, 0x2b, 0x2c, 0x2d,
  0x25, 0x32, 0x33, 0x31, 0x25, 0x36, 0x37, 0x38, 0x3a, 0x2b, 0x2c, 0x2d,
  0x25, 0x20, 0x3c, 0x3b, 0x25, 0x2d, 0x34, 0x34, 0x25, 0x36, 0x22, 0x2e,
  0x25, 0x20, 0x20, 0x2d, 0x22, 0x20, 0x20, 0x24, 0x37, 0x37, 0x3a, 0x2d,
  0x3a, 0x20, 0x20, 0x31, 0x25, 0x2d, 0x20, 0x2d, 0x25, 0x3e, 0x3e, 0x2d,
  0x25, 0x2d, 0x25, 0x2d, 0x25, 0x2b, 0x2c, 0x2d, 0x25, 0x20, 0x27, 0x2f,
  0x25, 0x2b, 0x22, 0x24, 0x3a, 0x20, 0x20, 0x31, 0x1f, 0x3c, 0x3c, 0x2d,
  0x34, 0x25, 0x2d, 0x34, 0x25, 0x2d, 0x25, 0x2d, 0x26, 0x20, 0x20, 0x28,
  0x34, 0x34, 0x25, 0x2d, 0x21, 0x1f, 0x3b, 0x21, 0x21, 0x1f, 0x3b, 0x21,
  0x21, 0x21, 0x21, 0x21, 0x26, 0x29, 0x2a, 0x28, 0x26, 0x27, 0x27, 0x2f,
  0x26, 0x27, 0x27, 0x2f, 0x26, 0x27, 0x27, 0x2f, 0x26, 0x27, 0x27, 0x2f,
  0x26, 0x28, 0x21, 0x21, 0x26, 0x27, 0x27, 0x28, 0x26, 0x28, 0x26, 0x28,
  0x26, 0x27, 0x27, 0x28, 0x26, 0x27, 0x27, 0x2f, 0x26, 0x28, 0x26, 0x2f,
  0x26, 0x27, 0x27, 0x2f, 0x26, 0x3f, 0x3f, 0x28, 0x26, 0x28, 0x26, 0x28,
  0x26, 0x27, 0x27, 0x28, 0x26, 0x28, 0x21, 0x21, 0x26, 0x27, 0x26, 0x2f,
  0x26, 0x28, 0x26, 0x2f, 0x26, 0x27, 0x27, 0x2f, 0x21, 0x26, 0x28, 0x21,
  0x26, 0x27, 0x27, 0x2f, 0x21, 0x26, 0x28, 0x21, 0x21, 0x21, 0x26, 0x28,
  0x21, 0x26, 0x28, 0x21, 0x21, 0x26, 0x28, 0x21, 0x00, 0xc8, 0x03, 0xf8,
  0x0f, 0xd8, 0x13, 0xe8, 0x09, 0xe0, 0x0e, 0xf0, 0x05, 0x00, 0x7e, 0x00,
  0xd0, 0x10, 0x12, 0x05, 0x13, 0x05, 0x0e, 0x14, 0x13, 0x00, 0x00, 0x00,
  0xd8, 0x04, 0x09, 0x07, 0xf8, 0x09, 0x14, 0xc8, 0x18, 0x00, 0x7e, 0x00,
  0x00, 0xf8, 0x00, 0x00, 0x03, 0x0f, 0x04, 0x05, 0x00, 0xc8, 0x19, 0xf8,
  0x00, 0x02, 0x16, 0x00, 0x00, 0x00, 0xe8, 0x17, 0x0d, 0x01, 0x14, 0x00,
  0x00, 0x7e, 0x00, 0x00, 0xd0, 0x08, 0x09, 0x00, 0x14, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0xf8, 0x03, 0x0e, 0x03, 0x04, 0x00, 0xe8, 0x03, 0x12, 0x05,
  0x01, 0x14, 0x0f, 0x12, 0x13, 0x00, 0xd8, 0x10, 0x15, 0x00, 0xd0, 0x04,
  0x05, 0x0b, 0x01, 0x04, 0x05, 0x0e, 0x03, 0x05, 0x00, 0x00, 0x00, 0x7f,
  0x00, 0x04, 0x08, 0x0c, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c,
  0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c,
  0x60, 0x64, 0x80, 0x40, 0x20, 0x10, 0x00, 0x04, 0x02, 0x01, 0x00, 0x87,
  0x8f, 0x93, 0x97, 0x9f, 0xa3, 0xa7, 0xaf, 0xb3, 0xb7, 0xbb, 0xbf, 0xc3,
  0xc7, 0xc9, 0xcb, 0xcf, 0xd1, 0xd4, 0xd7, 0xd9, 0xdb, 0xdd, 0xdf, 0xe1,
  0xe3, 0xe4, 0xe5, 0xe7, 0xe8, 0xe9, 0xeb, 0xec, 0xed, 0xee, 0xef, 0xf0,
  0xf1, 0x08, 0x0c, 0x0c, 0x0a, 0x04, 0x0c, 0x0c, 0x0a, 0x08, 0x06, 0x0c,
  0x0a, 0x08, 0x06, 0x06, 0x0a, 0x09, 0x08, 0x04, 0x04, 0x04, 0x0a, 0x09,
  0x08, 0x04, 0x04, 0x04, 0x0a, 0x09, 0x08, 0x04, 0x04, 0x04, 0x0a, 0x0a,
  0x0a, 0x0a, 0x0c, 0x0c, 0x0a, 0x0a, 0x08, 0x08, 0x06, 0x08, 0x08, 0x08,
  0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x7f, 0x00, 0x0c, 0x0c, 0x00, 0x00,
  0x00, 0x0c, 0x0c, 0x7f, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x07,
  0x00, 0x04, 0x07, 0x00, 0x03, 0x08, 0x00, 0x03, 0x08, 0x00, 0x05, 0x09,
  0x00, 0x05, 0x09, 0x00, 0x00, 0x00, 0x7f, 0xb9, 0xb7, 0xb3, 0xac, 0xa3,
  0x97, 0x7f, 0x00, 0x00, 0x00, 0x04, 0x04, 0x04, 0x07, 0x07, 0x07, 0x00,
  0xfe, 0x00, 0x7f, 0x7f, 0xfe, 0xfe, 0x7f, 0x7f, 0x7f, 0xf4, 0xe0, 0xf4,
  0xe0, 0xf4, 0x00, 0x01, 0x05, 0x00, 0x0a, 0x01, 0x01, 0x0f, 0x15, 0x1b,
  0x21, 0x25, 0x2c, 0x03, 0x01, 0x05, 0x0a, 0x01, 0x0f, 0x02, 0x02, 0x15,
  0x1b, 0x21, 0x25, 0x2c, 0x35, 0x0a, 0x00, 0x04, 0x09, 0x00, 0x0c, 0x01,
  0x01, 0x12, 0x18, 0x1e, 0x24, 0x2b, 0x2c, 0x09, 0x01, 0x04, 0x04, 0x01,
  0x05, 0x02, 0x02, 0x03, 0x03, 0x03, 0x01, 0x04, 0x01, 0x01, 0x00, 0x02,
  0x02, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x1b, 0x1b, 0x1b,
  0x1c, 0x1c, 0x00, 0x1d, 0x1d, 0x12, 0x1d, 0xc0, 0xe4, 0x67, 0x2a, 0x18,
  0x18, 0x19, 0x1a, 0x4a, 0x4c, 0x50, 0x57, 0x18, 0x18, 0x18, 0x18, 0x00,
  0x03, 0x00, 0x03, 0x64, 0x6d, 0x00, 0x03, 0x3a, 0x73, 0x85, 0x24, 0xa5,
  0x00, 0x03, 0x24, 0x37, 0x63, 0x9f, 0xa9, 0xb9, 0x18, 0x18, 0x18, 0x18,
  0x30, 0x81, 0x02, 0x01, 0x81, 0x07, 0x81, 0x02, 0x81, 0x02, 0x01, 0x81,
  0x07, 0x81, 0x02, 0x81, 0x02, 0x01, 0x81, 0x07, 0x81, 0x02, 0x81, 0x0e,
  0x81, 0x0c, 0x81, 0x07, 0x81, 0x0e, 0x81, 0x02, 0x01, 0x81, 0x07, 0x81,
  0x02, 0x91, 0x09, 0x91, 0x02, 0x91, 0x09, 0x91, 0x02, 0x81, 0x02, 0x01,
  0x81, 0x07, 0x81, 0x02, 0x81, 0x02, 0x01, 0x81, 0x07, 0x81, 0x02, 0xff,
  0x31, 0x12, 0x03, 0x83, 0x05, 0x03, 0x83, 0x05, 0x11, 0xff, 0x70, 0x01,
  0x02, 0x81, 0x0c, 0x02, 0x10, 0x13, 0x93, 0x07, 0x13, 0x04, 0x05, 0x04,
  0x06, 0xff, 0x10, 0x02, 0x51, 0x33, 0x31, 0x33, 0xff, 0x83, 0x3f, 0xff,
  0x81, 0x10, 0x81, 0x20, 0x81, 0x20, 0x81, 0x10, 0x8d, 0x40, 0x81, 0x10,
  0x81, 0x20, 0x8d, 0x20, 0x81, 0x10, 0x81, 0x20, 0x81, 0x10, 0x81, 0x20,
  0x8d, 0x40, 0x81, 0x20, 0x88, 0x10, 0x8d, 0x20, 0xff, 0x83, 0x3f, 0xff,
  0x9e, 0x71, 0x9e, 0x01, 0x1e, 0x1e, 0xa2, 0xa0, 0x9e, 0x70, 0x9b, 0xa0,
  0x9e, 0x70, 0xa2, 0xa0, 0x9e, 0x70, 0x9b, 0xa0, 0x9e, 0x70, 0x1e, 0x00,
  0x9d, 0x81, 0x9d, 0x01, 0x1d, 0x1d, 0xa0, 0xa0, 0x9d, 0x80, 0x9b, 0xa0,
  0x9d, 0x80, 0xa0, 0xa0, 0x9d, 0x80, 0x9b, 0xa0, 0x9d, 0x80, 0x1d, 0x00,
  0x9b, 0x91, 0x9b, 0x01, 0x1b, 0x1b, 0xa0, 0xa0, 0x9b, 0x90, 0x9b, 0xa0,
  0x9b, 0x90, 0xa0, 0xa0, 0x9b, 0x90, 0x9b, 0xa0, 0x9b, 0x90, 0x1b, 0x00,
  0x99, 0x91, 0x99, 0x01, 0x19, 0x19, 0x9e, 0xa0, 0x99, 0x90, 0x9b, 0xa0,
  0x99, 0x90, 0x9e, 0xa0, 0x99, 0x90, 0x9b, 0xa0, 0x99, 0x90, 0x19, 0x00,
  0xff, 0x9e, 0xcf, 0x99, 0xcf, 0x94, 0xcf, 0x92, 0xcf, 0xff, 0x99, 0xcf,
  0x99, 0x70, 0x19, 0x19, 0x00, 0x19, 0x19, 0x00, 0x98, 0x80, 0x00, 0x18,
  0x00, 0x99, 0x70, 0x00, 0x19, 0x19, 0x00, 0xff, 0x83, 0x3f, 0xff, 0x8d,
  0x50, 0x0f, 0x03, 0x0d, 0x0f, 0x03, 0x0d, 0x0f, 0x03, 0x0d, 0x0f, 0x03,
  0x0d, 0x0f, 0x03, 0x0d, 0x0f, 0x03, 0x0d, 0x0f, 0x03, 0x0d, 0x0f, 0x03,
  0x0d, 0x0f, 0x03, 0x0d, 0x0f, 0x03, 0xcd, 0x61, 0xcf, 0x57, 0x16, 0x94,
  0x01, 0x0f, 0x12, 0x11, 0x0f, 0x0d, 0xcf, 0x07, 0x85, 0xb0, 0x05, 0x00,
  0x05, 0x00, 0x05, 0x85, 0x01, 0xff, 0x8d, 0x50, 0x0f, 0x14, 0x01, 0x03,
  0x08, 0x0d, 0x0f, 0x14, 0x01, 0x03, 0x08, 0x0d, 0x0f, 0x14, 0x0f, 0xd1,
  0x03, 0x92, 0x01, 0xd1, 0x01, 0x8d, 0x05, 0x92, 0x61, 0xd4, 0x56, 0xcd,
  0x60, 0x8f, 0x50, 0xd2, 0x01, 0x0f, 0x14, 0x12, 0x0f, 0x12, 0x0f, 0x0d,
  0x0f, 0x12, 0x0f, 0x0d, 0x0a, 0x86, 0x01, 0x03, 0x85, 0xb1, 0x05, 0x05,
  0x00, 0x05, 0xff, 0x8f, 0xd0, 0x12, 0x11, 0x0d, 0x08, 0x0a, 0x0f, 0x12,
  0x11, 0x0d, 0x08, 0x0a, 0x0f, 0x12, 0x11, 0x08, 0xff, 0x00, 0x8f, 0x50,
  0x12, 0x0f, 0xd4, 0x01, 0x14, 0x0f, 0x16, 0x94, 0x01, 0xd2, 0x01, 0x14,
  0xd2, 0x01, 0x11, 0x12, 0x11, 0x8d, 0x01, 0x8a, 0x01, 0x88, 0x03, 0x08,
  0x8a, 0x01, 0xcd, 0x01, 0xff, 0x0f, 0x14, 0x1b, 0x20, 0x25, 0x24, 0x08,
  0x0f, 0x14, 0x1b, 0x19, 0x18, 0x16, 0x14, 0x12, 0x0f, 0xd2, 0x02, 0x0f,
  0x14, 0xd4, 0x01, 0x0f, 0xd6, 0x02, 0x0f, 0xd9, 0x52, 0x1b, 0xff, 0x80,
  0x0f, 0xff, 0x01, 0x03, 0x04, 0x01, 0x02, 0x03, 0x03, 0x01, 0x01, 0x03,
  0x03, 0x01, 0x02, 0x00, 0x04, 0x01, 0x01, 0x03, 0x03, 0x01, 0x02, 0x03,
  0x00, 0x01, 0x01, 0x04, 0x00, 0x01, 0x02, 0x03, 0x02, 0x02, 0xff, 0x80,
  0x0f, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x03, 0x03, 0x04, 0x00,
  0x04, 0x03, 0x02, 0x02, 0x02, 0xff, 0x01, 0x00, 0x01, 0x01, 0x02, 0x03,
  0x03, 0x01, 0x00, 0x01, 0x01, 0x03, 0x02, 0x00, 0x04, 0x04, 0x00, 0x01,
  0x03, 0x01, 0x02, 0x00, 0x03, 0x01, 0x04, 0x01, 0x01, 0x00, 0x02, 0x04,
  0x03, 0x01, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x78, 0x67,
  0x67, 0x67, 0x88, 0xba, 0xdb, 0x8b, 0x58, 0x76, 0x44, 0x63, 0x54, 0x85,
  0xa8, 0xca, 0xdd, 0xcc, 0xbb, 0x7c, 0x47, 0x13, 0x00, 0x00, 0x00, 0x10,
  0x73, 0x98, 0xcb, 0xed, 0xff, 0xff, 0xff, 0xff, 0xbe, 0x89, 0x68, 0x35,
  0x11, 0x00, 0x00, 0x00, 0x10, 0x22, 0x53, 0x97, 0xb9, 0xeb, 0xee, 0xff,
  0xff, 0xff, 0xff, 0xef, 0xde, 0xab, 0x69, 0x46, 0x22, 0x12, 0x01, 0x00,
  0x00, 0x00, 0x10, 0x31, 0x43, 0x75, 0xa9, 0xcc, 0xfe, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xef, 0xdd, 0x9b, 0x78, 0x55, 0x24, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x32, 0x64, 0x87, 0xba, 0xec, 0xfe, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xee, 0xcd, 0xbc, 0x9a, 0x77, 0x56, 0x34,
  0x22, 0x22, 0x22, 0x22, 0x32, 0x33, 0x43, 0x44, 0x55, 0x76, 0x77, 0x99,
  0x99, 0x89, 0x88, 0x88, 0x48, 0x11, 0x00, 0x30, 0xd9, 0xef, 0xcc, 0x47,
  0x21, 0x03, 0x64, 0x75, 0x65, 0xa7, 0xed, 0xde, 0xde, 0xdf, 0x6a, 0x10,
  0x20, 0x02, 0x21, 0x65, 0xfb, 0xed, 0xee, 0xef, 0x59, 0x35, 0x21, 0x11,
  0x44, 0x77, 0xab, 0xc9, 0xbc, 0xcc, 0xbf, 0xed, 0xa8, 0x77, 0x85, 0x64,
  0x44, 0x23, 0x05, 0x35, 0x68, 0xca, 0xfc, 0xfc, 0xef, 0xdf, 0x9a, 0x44,
  0x13, 0x11, 0x22, 0x72, 0x64, 0x9a, 0xc9, 0xdc, 0xad, 0xbd, 0xac, 0x8b,
  0x68, 0x56, 0x53, 0x74, 0x73, 0x45, 0x37, 0x36, 0x97, 0xb8, 0xcb, 0xec,
  0xed, 0xdd, 0xab, 0x68, 0x35, 0x14, 0x22, 0x24, 0x46, 0x66, 0x89, 0xb9,
  0xbc, 0xdb, 0xc9, 0xba, 0x98, 0x67, 0x56, 0x55, 0x74, 0x75, 0x67, 0x48,
  0x77, 0x77, 0x8a, 0x9b, 0xcc, 0xca, 0x9c, 0x9c, 0x98, 0x74, 0x43, 0x33,
  0x43, 0x55, 0x65, 0x96, 0xa8, 0xca, 0x9a, 0xbd, 0x9a, 0x89, 0x58, 0x67,
  0x88, 0x88, 0x78, 0x78, 0xc8, 0x97, 0x76, 0x88, 0x73, 0xb6, 0xcc, 0xba,
  0x58, 0x34, 0x63, 0x97, 0xed, 0xbe, 0x58, 0x15, 0x23, 0x95, 0xce, 0xcf,
  0x7b, 0x15, 0x23, 0x86, 0xda, 0xcf, 0x89, 0x54, 0x33, 0x85, 0xdb, 0xcb,
  0x9b, 0x56, 0x53, 0x75, 0xb9, 0xdc, 0x89, 0x57, 0x45, 0x65, 0x99, 0xab,
  0xab, 0x68, 0x57, 0x66, 0x87, 0xaa, 0xaa, 0x89, 0x66, 0x66, 0x86, 0x99,
  0x9b, 0x89, 0x87, 0x67, 0x87, 0xa7, 0x98, 0x99, 0x88, 0x77, 0x77, 0x87,
  0x99, 0x99, 0x89, 0x78, 0x77, 0x77, 0x88, 0x98, 0x89, 0x88, 0x77, 0x77,
  0x88, 0x88, 0x88, 0x89, 0x78, 0x77, 0x87, 0x88, 0x98, 0x88, 0x78, 0x77,
  0x87, 0x88, 0x98, 0x99, 0x87, 0x78, 0x87, 0x87, 0x98, 0x89, 0x88, 0x77,
  0x87, 0x87, 0x88, 0x89, 0x88, 0x87, 0x77, 0x78, 0x88, 0x88, 0x89, 0x87,
  0x88, 0x78, 0x88, 0x88, 0x88, 0x88, 0x87, 0x87, 0x78, 0x78, 0x78, 0x88,
  0x88, 0x78, 0x88, 0x87, 0x5a, 0x93, 0x8c, 0x66, 0xba, 0x66, 0x67, 0x97,
  0x97, 0x68, 0x79, 0x96, 0x87, 0x78, 0x86, 0x89, 0x67, 0x97, 0x8a, 0x77,
  0x77, 0x87, 0x88, 0x78, 0x88, 0x78, 0x78, 0x59, 0x96, 0x2a, 0xf5, 0x7a,
  0x33, 0x7a, 0xda, 0x34, 0x94, 0x9d, 0x57, 0x97, 0xa6, 0x5b, 0x97, 0x74,
  0x9c, 0x58, 0x76, 0xa8, 0x6c, 0x64, 0xb6, 0x6a, 0x6b, 0x72, 0xac, 0x58,
  0x85, 0xe7, 0x77, 0x65, 0xa8, 0x77, 0x5b, 0x58, 0x88, 0x99, 0x48, 0xb7,
  0x79, 0x66, 0x97, 0x7a, 0x94, 0xa9, 0x49, 0x87, 0xa8, 0x47, 0x87, 0xb8,
  0x4a, 0x94, 0xb8, 0x58, 0x97, 0x78, 0x68, 0x88, 0x78, 0x98, 0xa7, 0x58,
  0x77, 0x99, 0x76, 0x00, 0x00, 0xa9, 0xa9, 0xa4, 0xa4, 0x90, 0x90, 0x40,
  0x40, 0xea, 0xea, 0x3a, 0x3a, 0x0e, 0x0e, 0x03, 0x03, 0xea, 0xea, 0xea,
  0x55, 0xff, 0xea, 0xea, 0xea, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
  0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xea, 0xea,
  0xea, 0xea, 0xea, 0xea, 0xea, 0xff, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
  0xaa, 0xfd, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xea, 0xea, 0xea,
  0xea, 0xea, 0xea, 0xea, 0xea, 0xea, 0xea, 0xea, 0xea, 0xea, 0xea, 0xea,
  0xd5, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x55, 0xa9, 0xa9, 0xa9,
  0xa9, 0xa9, 0xa9, 0xa9, 0x55, 0xaa, 0xaa, 0xaa, 0x55, 0x40, 0x40, 0x40,
  0x40, 0xaa, 0xaa, 0xaa, 0x57, 0x03, 0x03, 0x03, 0x03, 0x40, 0x40, 0x40,
  0x40, 0x7f, 0xaa, 0xaa, 0xaa, 0x03, 0x03, 0x03, 0x03, 0xff, 0xaa, 0xaa,
  0xaa, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xf0, 0xac, 0xab,
  0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa4,
  0x50, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0x95, 0xbd, 0xa9, 0xa9,
  0xa9, 0xa9, 0xa9, 0xa9, 0xa9, 0xaa, 0x55, 0x40, 0x40, 0x40, 0x7f, 0xaa,
  0xaa, 0xaa, 0x57, 0x03, 0x03, 0x03, 0xff, 0xaa, 0xaa, 0x55, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40,
  0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0xff, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xfd, 0xfa, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a, 0x3a,
  0x3a, 0x3a, 0x3a, 0x3a, 0xfa, 0xa9, 0xa9, 0xa9, 0x55, 0xfd, 0xa9, 0xa9,
  0xa9, 0xaa, 0xaa, 0xaa, 0x55, 0xff, 0xaa, 0xaa, 0xaa, 0xff, 0xb6, 0xb6,
  0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6,
  0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0x55
};


const Prog demo_digit = { PRG, RAM_unexp, "Demo Digit", demo_digit_prg, sizeof(demo_digit_prg), -1, nullptr, 0, -1 };
