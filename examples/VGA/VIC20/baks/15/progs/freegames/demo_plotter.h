const uint8_t demo_plotter_prg[] = {
  0x01, 0x10, 0x0b, 0x10, 0xef, 0x00, 0x9e, 0x34, 0x31, 0x30, 0x39, 0x00,
  0x00, 0x00, 0xa9, 0xaa, 0x85, 0x2d, 0xa9, 0x20, 0x85, 0x2e, 0xa2, 0x02,
  0xbd, 0x55, 0x19, 0x95, 0x4b, 0xca, 0x10, 0xf8, 0x9a, 0xa2, 0xfa, 0xbd,
  0x42, 0x10, 0x9d, 0xf6, 0x00, 0xca, 0xd0, 0xf7, 0xa0, 0x09, 0xca, 0xbd,
  0x55, 0x18, 0x9d, 0x00, 0x1f, 0x8a, 0xd0, 0xf6, 0xce, 0x33, 0x10, 0xce,
  0x30, 0x10, 0x88, 0xd0, 0xed, 0x4c, 0x17, 0x01, 0x80, 0x00, 0x09, 0x8d,
  0x00, 0x10, 0xe6, 0xfb, 0xd0, 0x02, 0xe6, 0xfc, 0xca, 0x60, 0xa4, 0xf8,
  0xa2, 0x02, 0x20, 0xcd, 0x01, 0x85, 0xf8, 0x98, 0xa2, 0x06, 0x20, 0xcd,
  0x01, 0x20, 0xfa, 0x00, 0xa0, 0x00, 0x98, 0xa2, 0x02, 0x20, 0xcd, 0x01,
  0xc5, 0xf8, 0xd0, 0xec, 0x20, 0xba, 0x01, 0x85, 0x2f, 0x4a, 0xd0, 0x3d,
  0x20, 0x97, 0x01, 0x90, 0x46, 0x20, 0x97, 0x01, 0x90, 0xd0, 0xc8, 0x20,
  0xba, 0x01, 0x85, 0x2f, 0xc9, 0x40, 0x90, 0x0b, 0xa2, 0x02, 0x20, 0xc8,
  0x01, 0x85, 0x2f, 0x20, 0xba, 0x01, 0xa8, 0x20, 0xba, 0x01, 0xaa, 0xbd,
  0xd0, 0x01, 0xe0, 0x20, 0x90, 0x06, 0x8a, 0xa2, 0x03, 0x20, 0xc8, 0x01,
  0xa6, 0x2f, 0xe8, 0x20, 0xfa, 0x00, 0xd0, 0xfb, 0x88, 0xd0, 0xf8, 0xf0,
  0xaf, 0x20, 0xba, 0x01, 0xc9, 0x7f, 0xf0, 0x25, 0xe9, 0x00, 0xa2, 0x00,
  0x20, 0xcd, 0x01, 0x85, 0x30, 0xa2, 0x08, 0x20, 0xc8, 0x01, 0x65, 0xfb,
  0xa6, 0x2f, 0x85, 0x2f, 0xa5, 0xfc, 0xe5, 0x30, 0x85, 0x30, 0xe8, 0xb1,
  0x2f, 0xc8, 0x20, 0xfa, 0x00, 0xd0, 0xf8, 0xf0, 0xd2, 0x4c, 0x00, 0x18,
  0x06, 0xf7, 0xd0, 0x1e, 0x48, 0xad, 0xe7, 0x17, 0x2a, 0x85, 0xf7, 0xee,
  0x9d, 0x01, 0xd0, 0x11, 0xee, 0x9e, 0x01, 0xc6, 0xf9, 0xd0, 0x0a, 0xa9,
  0x4b, 0x8d, 0x9d, 0x01, 0xa9, 0x00, 0x8d, 0x9e, 0x01, 0x68, 0x60, 0xe8,
  0x8a, 0x20, 0x97, 0x01, 0x90, 0x0b, 0xe8, 0xe0, 0x07, 0xd0, 0xf6, 0xf0,
  0x04, 0x20, 0x97, 0x01, 0x2a, 0xca, 0xd0, 0xf9, 0x18, 0x60, 0x00, 0xff,
  0x05, 0xfa, 0x0a, 0xf5, 0x0f, 0xaa, 0x50, 0x5a, 0x5f, 0x60, 0xa0, 0xa5,
  0xaf, 0xf0, 0x01, 0x02, 0x03, 0x04, 0x06, 0x07, 0x08, 0x09, 0x1e, 0x1f,
  0x2a, 0x55, 0x6a, 0x70, 0x80, 0x1f, 0x3f, 0x60, 0xef, 0x32, 0xbe, 0x07,
  0x78, 0x95, 0xf0, 0x3b, 0xc8, 0xaf, 0x81, 0xdd, 0x15, 0xf0, 0x3b, 0x0a,
  0xf8, 0x1d, 0xf0, 0x15, 0xf0, 0x3b, 0x82, 0xbe, 0x07, 0x69, 0x5f, 0x03,
  0xbb, 0x2b, 0xe0, 0x74, 0x57, 0xc0, 0xee, 0x4a, 0xf8, 0x1d, 0xec, 0x57,
  0xc0, 0xef, 0x72, 0xbe, 0x07, 0x7a, 0x95, 0xf0, 0x3b, 0xc0, 0xda, 0x30,
  0x7c, 0xf9, 0x95, 0x00, 0x57, 0xc1, 0x50, 0x05, 0x7c, 0x0e, 0xe8, 0xaf,
  0x81, 0xd8, 0x57, 0xc1, 0x50, 0x05, 0x7c, 0x0e, 0xe0, 0xaf, 0x81, 0xda,
  0x57, 0xc0, 0xee, 0xca, 0xf8, 0x1d, 0x15, 0xf0, 0x3b, 0x92, 0xbe, 0x0a,
  0x80, 0x2b, 0xe0, 0xa8, 0x02, 0xbe, 0x0a, 0x80, 0x2b, 0xe0, 0xa8, 0x03,
  0x61, 0x43, 0x68, 0xc1, 0xf3, 0xe2, 0x54, 0x01, 0x5f, 0x03, 0xba, 0x2b,
  0xe0, 0x76, 0x15, 0xf0, 0x54, 0x01, 0x5f, 0x03, 0xb8, 0x2b, 0xe0, 0x76,
  0x95, 0xf0, 0x3b, 0xb2, 0xbe, 0x07, 0x45, 0x7c, 0x0e, 0xe4, 0xaf, 0x82,
  0xa0, 0x0a, 0xf8, 0x2a, 0x00, 0xaf, 0x82, 0xa0, 0x0a, 0xf8, 0x2a, 0x00,
  0xdc, 0x9c, 0x36, 0x14, 0x36, 0x8c, 0x1f, 0x3e, 0x43, 0xba, 0x2b, 0xe0,
  0x76, 0x15, 0xf0, 0x54, 0x01, 0x5f, 0x03, 0xb8, 0x2b, 0xe0, 0x76, 0x95,
  0xf0, 0x3b, 0xb2, 0xbe, 0x07, 0x45, 0x7c, 0x0e, 0xe4, 0xaf, 0x82, 0xa0,
  0x0a, 0xf8, 0x2a, 0x00, 0xaf, 0x82, 0xa0, 0x0a, 0xf8, 0x2a, 0x00, 0xdc,
  0x24, 0x37, 0x27, 0x0d, 0x85, 0x0d, 0xa3, 0x07, 0xcf, 0x43, 0xb0, 0x77,
  0x45, 0x40, 0x0e, 0xe8, 0x77, 0x03, 0xba, 0x1d, 0xa3, 0xba, 0x1d, 0xd8,
  0xee, 0x87, 0x43, 0xba, 0x1d, 0xc8, 0xee, 0x8a, 0x80, 0x1d, 0xd1, 0x50,
  0x03, 0xba, 0x2a, 0x00, 0x77, 0x45, 0x40, 0x1b, 0xb5, 0x86, 0xe1, 0x21,
  0xb9, 0x38, 0x6c, 0x28, 0x6d, 0x18, 0x3e, 0x70, 0xa8, 0x01, 0xd8, 0x3b,
  0x81, 0xd8, 0x3b, 0x47, 0x60, 0xee, 0xc7, 0x60, 0xe8, 0x76, 0x0e, 0xe4,
  0x76, 0x15, 0x00, 0x3b, 0x0a, 0x80, 0x1d, 0x85, 0x40, 0x0e, 0xc2, 0xa0,
  0x0d, 0xd3, 0x43, 0x76, 0xb0, 0xdc, 0x24, 0x37, 0x27, 0x0d, 0x85, 0x0d,
  0xa3, 0x07, 0xcf, 0xc0, 0x3b, 0x82, 0xbe, 0x07, 0x69, 0x5f, 0x03, 0xbb,
  0x2b, 0xe0, 0x74, 0x57, 0xc0, 0xee, 0x4a, 0xf8, 0x2a, 0x00, 0xaf, 0x82,
  0xa0, 0x0a, 0xf8, 0x2a, 0x00, 0xaf, 0x82, 0xa0, 0x0d, 0xe2, 0xf0, 0xdd,
  0x34, 0x37, 0x6b, 0x0d, 0xc2, 0x43, 0x72, 0x70, 0xd8, 0x50, 0xda, 0x30,
  0x7c, 0xf0, 0x3b, 0x47, 0x70, 0x3b, 0xb1, 0xdc, 0x0e, 0x87, 0x70, 0x3b,
  0x91, 0xdc, 0x15, 0x00, 0x3b, 0x82, 0xa0, 0x07, 0x70, 0x54, 0x00, 0xee,
  0x0a, 0x80, 0x37, 0x84, 0x43, 0x78, 0xbc, 0x37, 0x4d, 0x0d, 0xda, 0xc3,
  0x70, 0x90, 0xdc, 0x9c, 0x36, 0x14, 0x36, 0x8c, 0x1f, 0x3a, 0x3b, 0xb1,
  0xda, 0x3a, 0x1d, 0xa3, 0xb9, 0x1d, 0xa5, 0x40, 0x0e, 0xd2, 0xa0, 0x07,
  0x69, 0x50, 0x03, 0xb4, 0xa8, 0x03, 0x79, 0xcc, 0x37, 0x84, 0x43, 0x78,
  0xbc, 0x37, 0x4d, 0x0d, 0xda, 0xc3, 0x70, 0x90, 0xdc, 0x9c, 0x36, 0x14,
  0x36, 0x8c, 0x1f, 0x3d, 0x8e, 0x87, 0x76, 0x3b, 0x91, 0xdd, 0x95, 0x00,
  0x3b, 0xb2, 0xa0, 0x07, 0x76, 0x54, 0x00, 0xee, 0xca, 0x80, 0x37, 0x95,
  0x43, 0x79, 0xcc, 0x37, 0x84, 0x43, 0x78, 0xbc, 0x37, 0x4d, 0x0d, 0xda,
  0xc3, 0x70, 0x90, 0xdc, 0x9c, 0x36, 0x14, 0x36, 0x8c, 0x1f, 0x30, 0xee,
  0x47, 0x45, 0x40, 0x0e, 0x8a, 0x80, 0x1d, 0x15, 0x00, 0x3a, 0x2a, 0x00,
  0xde, 0xb7, 0x0d, 0xe5, 0x50, 0xde, 0x73, 0x0d, 0xe1, 0x10, 0xde, 0x2f,
  0x0d, 0xd3, 0x43, 0x76, 0xb0, 0xdc, 0x24, 0x37, 0x27, 0x0d, 0x85, 0x0d,
  0xa3, 0x07, 0xcf, 0x25, 0x40, 0x0e, 0xe4, 0xa8, 0x01, 0xdc, 0x95, 0x00,
  0x3b, 0x92, 0xa0, 0x0d, 0xe9, 0x90, 0xde, 0xb7, 0x0d, 0xe5, 0x50, 0xde,
  0x73, 0x0d, 0xe1, 0x10, 0xde, 0x2f, 0x0d, 0xd3, 0x43, 0x76, 0xb0, 0xdc,
  0x24, 0x37, 0x27, 0x0d, 0x85, 0x0d, 0xa3, 0x07, 0xcf, 0xb1, 0x50, 0x05,
  0x7c, 0x15, 0x00, 0x57, 0xc1, 0x50, 0x06, 0xf7, 0xd8, 0x6f, 0x4c, 0x86,
  0xf5, 0xb8, 0x6f, 0x2a, 0x86, 0xf3, 0x98, 0x6f, 0x08, 0x86, 0xf1, 0x78,
  0x6e, 0x9a, 0x1b, 0xb5, 0x86, 0xe1, 0x21, 0xb9, 0x38, 0x6c, 0x28, 0x6d,
  0x18, 0x3e, 0x7d, 0xca, 0x80, 0x2b, 0xe0, 0xa8, 0x03, 0x7b, 0x74, 0x37,
  0xbe, 0xc3, 0x7a, 0x64, 0x37, 0xad, 0xc3, 0x79, 0x54, 0x37, 0x9c, 0xc3,
  0x78, 0x44, 0x37, 0x8b, 0xc3, 0x74, 0xd0, 0xdd, 0xac, 0x37, 0x09, 0x0d,
  0xc9, 0xc3, 0x61, 0x43, 0x68, 0xc1, 0xf3, 0xea, 0x3d, 0xf0, 0x39, 0xf0,
  0xf4, 0x1d, 0xe0, 0x73, 0xdf, 0x20, 0xef, 0x03, 0x9e, 0xb5, 0x07, 0x78,
  0x1c, 0xf3, 0x88, 0x3b, 0xc0, 0xe7, 0x8b, 0x41, 0xde, 0x07, 0x3b, 0x48,
  0x3b, 0xc0, 0xe7, 0x25, 0x0d, 0x83, 0x0d, 0xa1, 0x1e, 0x04, 0xc0, 0x00,
  0x3e, 0x89, 0xf5, 0x20, 0x13, 0x3c, 0x83, 0xd5, 0x24, 0x09, 0xf6, 0x3f,
  0x91, 0xa1, 0xe7, 0x40, 0x03, 0x4a, 0x2a, 0xa4, 0x90, 0x18, 0x51, 0x5a,
  0x25, 0x3d, 0xf6, 0x02, 0x48, 0x68, 0x7d, 0xd1, 0x0c, 0x65, 0x68, 0x7e,
  0xd1, 0x4e, 0x47, 0x01, 0x48, 0x46, 0x80, 0x48, 0x51, 0x79, 0x47, 0x02,
  0xc8, 0x46, 0x07, 0xc8, 0x52, 0x8a, 0x50, 0x06, 0x51, 0x40, 0x38, 0x70,
  0x46, 0xa7, 0x94, 0x62, 0x73, 0xd4, 0xfe, 0x46, 0xa7, 0x3d, 0x4c, 0xb4,
  0x6a, 0x6d, 0x26, 0x1e, 0x48, 0x2f, 0x80, 0xdd, 0x10, 0x05, 0xef, 0x28,
  0xfc, 0xea, 0x58, 0x74, 0x70, 0x0d, 0xe8, 0x7a, 0xd2, 0x0b, 0x5c, 0xc0,
  0x00, 0xc6, 0xff, 0xa5, 0x1c, 0xc1, 0x48, 0xfc, 0x28, 0xb1, 0x00, 0x30,
  0xe5, 0x28, 0x54, 0x28, 0x95, 0x28, 0x10, 0xc2, 0x9a, 0x40, 0x21, 0x40,
  0xaa, 0x2f, 0x80, 0x00, 0xa9, 0x40, 0xda, 0xf5, 0x03, 0xa8, 0x8a, 0x18,
  0x53, 0xc8, 0x03, 0x1d, 0x42, 0xf0, 0xa0, 0x14, 0xa0, 0x8d, 0x77, 0x02,
  0x38, 0x71, 0x82, 0xb5, 0xea, 0x0a, 0xed, 0xc6, 0x2d, 0x0a, 0x02, 0x41,
  0xce, 0x31, 0x8c, 0x25, 0xa1, 0x7e, 0xc5, 0xfa, 0xa9, 0x43, 0xa5, 0x0b,
  0x56, 0x1b, 0x28, 0x7c, 0x61, 0xd1, 0x9c, 0xca, 0x21, 0x19, 0xd4, 0x69,
  0x32, 0x88, 0xc6, 0x96, 0x30, 0x9e, 0x80, 0x4c, 0xb9, 0x48, 0x1a, 0x44,
  0x0a, 0x5c, 0x08, 0x1b, 0x06, 0x53, 0x04, 0xc6, 0x29, 0x40, 0x52, 0xaa,
  0xaf, 0x68, 0x46, 0x61, 0x75, 0xfb, 0x7b, 0x6f, 0x9f, 0x7a, 0xfe, 0x24,
  0x0b, 0x30, 0x33, 0x46, 0x00, 0xa4, 0x00, 0xb1, 0xd7, 0xec, 0x80, 0xa2,
  0x30, 0x0c, 0x80, 0x46, 0x50, 0x55, 0x14, 0x81, 0xea, 0x40, 0x71, 0x82,
  0x34, 0x23, 0xe0, 0xc3, 0x40, 0x51, 0x82, 0xc3, 0xb0, 0x0e, 0x3d, 0x03,
  0x34, 0x02, 0x23, 0xb1, 0x02, 0x3e, 0x30, 0x3c, 0x00, 0xe4, 0x95, 0x23,
  0xfa, 0xa6, 0x07, 0x4c, 0xd1, 0xc6, 0x38, 0x43, 0x18, 0xcf, 0xf0, 0xee,
  0x8a, 0x38, 0xe9, 0x01, 0x63, 0xa1, 0x8c, 0xbf, 0x0e, 0x26, 0x3d, 0x04,
  0x1a, 0xdc, 0x70, 0xe4, 0x0c, 0xf0, 0xd2, 0x63, 0xc0, 0x11, 0xc3, 0x91,
  0x30, 0xf1, 0x98, 0xf4, 0x56, 0x07, 0x1e, 0x90, 0xa4, 0x14, 0x02, 0x16,
  0x24, 0x13, 0x20, 0x40, 0x11, 0x02, 0x1a, 0xf8, 0xa5, 0x06, 0x8d, 0x7e,
  0xc6, 0xa0, 0x78, 0xd8, 0x9c, 0xfb, 0x08, 0x8d, 0x9b, 0xcf, 0xb0, 0x98,
  0xda, 0x61, 0x8a, 0xd0, 0xe9, 0x02, 0x90, 0xf0, 0x50, 0xc8, 0xdc, 0xf9,
  0xa5, 0x0d, 0x85, 0x14, 0xa5, 0x0b, 0x29, 0x7f, 0x85, 0x13, 0x60, 0x00,
  0x16, 0x2c, 0x42, 0x58, 0x6e, 0x84, 0x9a, 0xb0, 0xd4, 0x36, 0xe7, 0x90,
  0x40, 0xf1, 0xa2, 0x53, 0x03, 0xb4, 0xb3, 0x28, 0xae, 0x35, 0x1d, 0x3e,
  0x7e, 0x99, 0xf1, 0xf5, 0x4f, 0xe9, 0x00, 0x84, 0x8c, 0x88, 0x2a, 0xfc,
  0x00, 0x10, 0x30, 0x20, 0x57, 0x17, 0x37, 0xab, 0xd1, 0x02, 0xaf, 0xca,
  0x3c, 0x10, 0x2c, 0xbc, 0x18, 0xae, 0xce, 0x07, 0x2b, 0x4e, 0x06, 0x0b,
  0x0e, 0x0f, 0xe0, 0x09, 0xfd, 0xd8, 0x94, 0x01, 0xc2, 0x94, 0x6c, 0x94,
  0x90, 0x01, 0x47, 0xc0, 0x01, 0xb4, 0xe0, 0x28, 0x03, 0xa8, 0x2a, 0x3f,
  0x82, 0x3a, 0xa8, 0xf8, 0x9f, 0x03, 0xc7, 0x65, 0xa7, 0xc4, 0xe2, 0x49,
  0x4d, 0x7e, 0xf5, 0x45, 0x3b, 0x7b, 0x2c, 0x5b, 0xeb, 0xc6, 0xb8, 0x13,
  0xee, 0xf1, 0xae, 0x04, 0xf3, 0x4b, 0x85, 0x4b, 0x5a, 0x58, 0x4c, 0x8b,
  0x03, 0x02, 0xfc, 0x59, 0x99, 0x95, 0x6b, 0xe6, 0x64, 0x65, 0x62, 0xce,
  0xae, 0x4f, 0x0b, 0x0e, 0xdc, 0xc9, 0x66, 0x6f, 0x3e, 0xfa, 0x0c, 0xfd,
  0xdb, 0xa6, 0x7e, 0x03, 0xc7, 0xc6, 0xc6, 0x36, 0x26, 0x16, 0x6f, 0x8a,
  0x03, 0x78, 0xfa, 0x32, 0xb2, 0xb3, 0x3f, 0x1b, 0x1b, 0x33, 0xf0, 0x1b,
  0x31, 0xa3, 0x20, 0x65, 0xe6, 0x66, 0x3e, 0x0f, 0xe0, 0x08, 0xc8, 0xf8,
  0xa8, 0x7c, 0xfe, 0x83, 0x8c, 0x83, 0x87, 0x80, 0xcf, 0xd8, 0x38, 0x00,
  0xb9, 0xa9, 0x79, 0x8d, 0xf4, 0x71, 0x81, 0x59, 0xa8, 0xc9, 0x56, 0x51,
  0x58, 0xd9, 0x61, 0xf1, 0x3f, 0x02, 0x7a, 0xf0, 0x81, 0x08, 0x08, 0x00,
  0x10, 0x4c, 0x30, 0x00, 0xf1, 0xc1, 0x97, 0x0c, 0x0b, 0x32, 0x92, 0x09,
  0x89, 0x10, 0x96, 0xf2, 0xe3, 0xc2, 0x45, 0xc4, 0xc4, 0x8c, 0x47, 0x7b,
  0x20, 0xd0, 0xe8, 0x07, 0x87, 0xc8, 0x3b, 0x24, 0xa0, 0x9c, 0x58, 0x54,
  0x44, 0xe2, 0x48, 0xb2, 0x0a, 0x26, 0x42, 0x5a, 0x72, 0x86, 0x9e, 0xb2,
  0xc2, 0xd6, 0xe6, 0xf5, 0xe6, 0xf4, 0xc1, 0xc4, 0xc7, 0xca, 0xcd, 0xd0,
  0xd3, 0xd5, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe3, 0xe5, 0xe6, 0xe8,
  0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, 0xf0, 0xf1, 0xf2, 0xf3, 0xf4,
  0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0x52, 0x64,
  0xe0, 0xea, 0x93, 0x37, 0x47, 0x73, 0xbb, 0x00, 0xfc, 0x09, 0x2a, 0x42,
  0xa1, 0x7f, 0x68, 0x91, 0xe8, 0x68, 0x77, 0x99, 0x3e, 0x41, 0x1c, 0xbe,
  0x42, 0x1c, 0xbe, 0x43, 0x18, 0xf9, 0xad, 0xef, 0x03, 0xd0, 0x52, 0xb2,
  0x98, 0x2b, 0x7b, 0x40, 0xe3, 0x53, 0x52, 0xb7, 0xa8, 0x0f, 0x27, 0xff,
  0xc3, 0x3d, 0x8d, 0x3c, 0xd1, 0xc4, 0xd5, 0x6b, 0xec, 0x21, 0xaf, 0xb0,
  0xc6, 0x3e, 0xfb, 0xba, 0xd3, 0x89, 0x3f, 0x4a, 0x43, 0xf4, 0x2c, 0x63,
  0x7a, 0xda, 0xd8, 0x18, 0x53, 0x48, 0x24, 0x6a, 0x7d, 0x54, 0x5c, 0x80,
  0x0d, 0x64, 0xff, 0x78, 0x04, 0xc6, 0xf8, 0x01, 0x90, 0x65, 0x24, 0x78,
  0x58, 0xe5, 0xc8, 0x08, 0xd4, 0x6b, 0x57, 0x7a, 0x1c, 0xac, 0x79, 0xe7,
  0x77, 0x24, 0x10, 0x0a, 0x98, 0x2a, 0x60, 0x21, 0x7e, 0xea, 0x46, 0xe1,
  0x7f, 0x2b, 0x12, 0x5e, 0xc7, 0xed, 0x77, 0xda, 0x97, 0x68, 0xe0, 0x9e,
  0xc9, 0xf5, 0xe0, 0x25, 0x1a, 0x9b, 0xed, 0xc7, 0x27, 0x80, 0x2f, 0xeb,
  0x31, 0xc9, 0x91, 0x18, 0x9b, 0xea, 0x60, 0xa5, 0xfd, 0xf0, 0x0e, 0x61,
  0xb9, 0xc3, 0xb5, 0x3e, 0x6a, 0x15, 0x99, 0x2a, 0x39, 0xc7, 0xcb, 0x05,
  0x66, 0x46, 0xde, 0xe4, 0xf1, 0x80, 0x86, 0x64, 0x14, 0xb8, 0x04, 0xf5,
  0x62, 0x35, 0x96, 0x39, 0x7d, 0xa5, 0x04, 0xa4, 0x66, 0x62, 0x7f, 0x93,
  0x35, 0x2d, 0x4e, 0x3a, 0x42, 0x06, 0x14, 0xcb, 0xfd, 0x3b, 0xe2, 0x07,
  0x52, 0x03, 0x3b, 0xe4, 0xd4, 0xca, 0x6c, 0x4e, 0xf9, 0x81, 0xb8, 0x49,
  0x83, 0xa2, 0xe4, 0x40, 0xdb, 0x1a, 0xac, 0x5c, 0x27, 0x1b, 0x11, 0xea,
  0x60, 0xbd, 0xf3, 0x68, 0x6c, 0x43, 0x79, 0x36, 0x3c, 0x03, 0x14, 0xc1,
  0x49, 0xfb, 0x32, 0xcc, 0x8e, 0x7f, 0xb1, 0xa6, 0xd7, 0x44, 0x2b, 0xa3,
  0x02, 0x66, 0xc0, 0x0d, 0xb1, 0x70, 0xd2, 0x55, 0x00, 0x02, 0x59, 0x78,
  0x6c, 0xe4, 0x88, 0x48, 0x1c, 0x24, 0xa2, 0x06, 0x23, 0xf7, 0xf5, 0xea,
  0x4d, 0xb1, 0x2b, 0x51, 0x80, 0xa4, 0x09, 0x00, 0x2a, 0x03, 0xfc, 0x0c,
  0x06, 0x3e, 0x80, 0x2e, 0x70, 0x13, 0x5f, 0xf9, 0xad, 0x75, 0xdf, 0x5a,
  0x47, 0xb3, 0x3b, 0xec, 0x6f, 0x38, 0x53, 0x7f, 0x31, 0x50, 0xc0, 0x8a,
  0x2e, 0x7d, 0xb0, 0x5d, 0xfc, 0x94, 0x2c, 0x4c, 0x29, 0x31, 0x48, 0x83,
  0xa4, 0x1b, 0xa3, 0xb5, 0xbf, 0xe3, 0xb1, 0xbd, 0xad, 0x37, 0xf6, 0x27,
  0xdf, 0xfc, 0x6a, 0x75, 0x46, 0xfb, 0xa7, 0xef, 0xda, 0x7e, 0xff, 0xb9,
  0x9e, 0x01, 0x21, 0x0c, 0x9e, 0x15, 0xa0, 0x03, 0x4c, 0x95, 0x29, 0x52,
  0xd9, 0x5b, 0xe8, 0x07, 0x72, 0x04, 0x9f, 0x5f, 0x09, 0xf4, 0x06, 0x9f,
  0x5f, 0x89, 0x5b, 0x52, 0x01, 0x40, 0x2b, 0x33, 0xd4, 0x07, 0x80, 0x09,
  0x60, 0x07, 0x32, 0x15, 0x21, 0x10, 0x21, 0xe6, 0xae, 0x00, 0x04, 0x64,
  0x95, 0x34, 0x94, 0x34, 0x84, 0x54, 0xc4, 0xc4, 0x15, 0x63, 0x12, 0xe3,
  0x00, 0x00, 0x7f, 0x75, 0xf3, 0x77, 0xc5, 0xbb, 0xe3, 0xdd, 0xf2, 0x6e,
  0xdd, 0xe3, 0xcb, 0xbc, 0x79, 0xb7, 0x9f, 0x3e, 0xf5, 0xe8, 0xdf, 0xc2,
  0xcf, 0xa6, 0xb7, 0x96, 0x4f, 0x85, 0xf7, 0x85, 0xa6, 0xed, 0xea, 0x8f,
  0xa9, 0xbe, 0xa4, 0xfa, 0x8b, 0xdd, 0x6e, 0x4d, 0xdf, 0xbf, 0xb7, 0x7e,
  0xfd, 0xdd, 0xfb, 0xf3, 0x77, 0xef, 0xbd, 0xdc, 0x69, 0xe5, 0xaf, 0xff,
  0x86, 0xbf, 0xd7, 0x9f, 0xbd, 0xd7, 0xaf, 0xbd, 0x97, 0xf0, 0xb4, 0xe9,
  0xac, 0xe5, 0x92, 0xe1, 0x7c, 0xe1, 0x68, 0xbb, 0x86, 0xa8, 0xda, 0x9b,
  0x6a, 0x4d, 0xa8, 0xb5, 0xc9, 0x52, 0xa7, 0xf8, 0xd3, 0xe9, 0x18, 0xd3,
  0xd9, 0x12, 0x00, 0x01, 0xca, 0x01, 0x0b, 0x9e, 0x91, 0xf9, 0x9f, 0xf8,
  0xf8, 0x8d, 0x0f, 0x78, 0x41, 0x6a, 0x2a, 0x0b, 0xd5, 0x25, 0x0f, 0xce,
  0x80, 0x00, 0xe5, 0x27, 0x9d, 0x48, 0x0c, 0x29, 0x0d, 0x48, 0x2c, 0x28,
  0xad, 0xe8, 0x00, 0xf2, 0x77, 0x81, 0x54, 0x84, 0xa7, 0xdc, 0xb4, 0xef,
  0x24, 0xb3, 0x2d, 0xf7, 0x24, 0xbd, 0x48, 0x02, 0x79, 0x8f, 0x74, 0x68,
  0x72, 0xb3, 0x73, 0x6a, 0xa0, 0x75, 0x12, 0x42, 0x95, 0x60, 0x28, 0x0c,
  0x09, 0xb8, 0x4d, 0xd3, 0xa0, 0x0c, 0x04, 0x08, 0x0c, 0x50, 0xcd, 0x1a,
  0x53, 0x01, 0x21, 0x00, 0xc0, 0x2e, 0x1e, 0x08, 0x19, 0x00, 0x20, 0x60,
  0x80, 0x20, 0xd2, 0xaf, 0x34, 0x8c, 0x20, 0x50, 0x70, 0x29, 0xbd, 0xc4,
  0x12, 0xa8, 0x00, 0xa3, 0x7c, 0x10, 0x45, 0xfe, 0xcb, 0xc3, 0x80, 0x82,
  0x53, 0x11, 0xe4, 0x02, 0x00, 0xe7, 0x86, 0x5e, 0xc1, 0x1b, 0x00, 0x20,
  0xb1, 0x80, 0xa1, 0xf1, 0x46, 0x0c, 0x77, 0xc3, 0x69, 0x00, 0x08, 0x25,
  0x1e, 0x1c, 0x0a, 0x1b, 0x11, 0xb1, 0x1c, 0xca, 0x5e, 0x48, 0x46, 0x00,
  0x40, 0xe1, 0x20, 0x74, 0x60, 0x46, 0x80, 0x24, 0x67, 0xb3, 0x08, 0xca,
  0x27, 0xea, 0x8e, 0x80, 0x6a, 0xa8, 0x3f, 0xc1, 0x7f, 0x80, 0x54, 0xc2,
  0x23, 0xa8, 0x14, 0x10, 0x81, 0x10, 0x3c, 0x54, 0x08, 0x30, 0x14, 0x81,
  0x4c, 0x24, 0x38, 0x16, 0x8f, 0x41, 0x41, 0x32, 0xf4, 0x20, 0xc0, 0xf0,
  0x30, 0xb1, 0x32, 0x02, 0x00, 0xc2, 0x49, 0x4b, 0x17, 0x00, 0x7e, 0x4f,
  0x68, 0x5c, 0xaf, 0xff, 0x80
};


const Prog demo_plotter = { PRG, RAM_unexp, "Demo Plotter", demo_plotter_prg, sizeof(demo_plotter_prg), -1, nullptr, 0, -1 };
