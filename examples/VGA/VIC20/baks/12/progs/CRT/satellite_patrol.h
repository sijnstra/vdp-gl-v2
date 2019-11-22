const uint8_t satellite_patrol[] = {
  0x09, 0xa0, 0x56, 0xff, 0x41, 0x30, 0xc3, 0xc2, 0xcd, 0x78, 0x20, 0x82,
  0xaa, 0x20, 0xc4, 0xaa, 0xa9, 0x00, 0x85, 0x06, 0x85, 0x07, 0x4c, 0x66,
  0xaf, 0x20, 0xe9, 0xab, 0x29, 0x03, 0xe9, 0x02, 0x60, 0xa5, 0x18, 0x29,
  0x03, 0x18, 0x69, 0x03, 0x0a, 0x0a, 0x0a, 0x0a, 0x18, 0x69, 0x0f, 0x8d,
  0x0e, 0x90, 0x60, 0xad, 0xad, 0xad, 0xad, 0xad, 0xad, 0xad, 0xad, 0x04,
  0x24, 0x44, 0x64, 0x84, 0xa4, 0xc4, 0xe4, 0xa9, 0x50, 0x85, 0x0f, 0x85,
  0x10, 0xa5, 0x1a, 0xa8, 0xb9, 0x33, 0xa0, 0x85, 0x03, 0xb9, 0x3b, 0xa0,
  0x85, 0x02, 0x4c, 0x1d, 0xac, 0x20, 0x19, 0xa1, 0x20, 0xdb, 0xa3, 0xa5,
  0x13, 0x29, 0x9c, 0xc9, 0x9c, 0xf0, 0x20, 0xc9, 0x1c, 0xf0, 0x25, 0xc9,
  0x14, 0xf0, 0x25, 0xc9, 0x94, 0xf0, 0x25, 0xc9, 0x84, 0xf0, 0x25, 0xc9,
  0x8c, 0xf0, 0x25, 0xc9, 0x88, 0xf0, 0x25, 0xc9, 0x98, 0xf0, 0x05, 0xc9,
  0x18, 0xf0, 0x05, 0x60, 0xa9, 0x00, 0xf0, 0x1a, 0xa9, 0x01, 0xd0, 0x16,
  0xa9, 0x02, 0xd0, 0x12, 0xa9, 0x03, 0xd0, 0x0e, 0xa9, 0x04, 0xd0, 0x0a,
  0xa9, 0x05, 0xd0, 0x06, 0xa9, 0x06, 0xd0, 0x02, 0xa9, 0x07, 0xc5, 0x19,
  0xf0, 0xdd, 0x48, 0x20, 0x43, 0xa0, 0x68, 0x85, 0x1a, 0x85, 0x19, 0x4c,
  0x43, 0xa0, 0xfc, 0xfe, 0x00, 0x02, 0x04, 0x02, 0x00, 0xfe, 0xfc, 0xfe,
  0xb5, 0x1b, 0x85, 0x0f, 0xb5, 0x20, 0x85, 0x10, 0x20, 0xf9, 0xab, 0xa5,
  0x17, 0x4a, 0xa8, 0xb9, 0xe0, 0xa0, 0x48, 0xa0, 0x00, 0x51, 0x00, 0x91,
  0x00, 0x68, 0xc8, 0x51, 0x00, 0x91, 0x00, 0x60, 0xc0, 0x30, 0x0c, 0x03,
  0xa2, 0x04, 0x20, 0xed, 0xa0, 0xca, 0x10, 0xfa, 0x60, 0xb5, 0x25, 0xc9,
  0xff, 0xf0, 0xf9, 0x20, 0xc0, 0xa0, 0x20, 0x30, 0xa2, 0xb4, 0x25, 0xb5,
  0x1b, 0x20, 0x91, 0xa5, 0xc9, 0xae, 0xb0, 0x10, 0x95, 0x1b, 0xb5, 0x20,
  0x20, 0x88, 0xa5, 0xc9, 0xae, 0xb0, 0x05, 0x95, 0x20, 0x4c, 0xc0, 0xa0,
  0xa9, 0xff, 0x95, 0x25, 0x60, 0x20, 0xd3, 0xab, 0x29, 0x20, 0xd0, 0x0c,
  0xa5, 0x2a, 0xd0, 0xf4, 0x20, 0x30, 0xa1, 0xa9, 0x01, 0x85, 0x2a, 0x60,
  0xa9, 0x00, 0xf0, 0xf9, 0xa2, 0x04, 0xb5, 0x25, 0xc9, 0xff, 0xd0, 0x11,
  0xa9, 0x56, 0x95, 0x1b, 0x95, 0x20, 0xa5, 0x1a, 0x95, 0x25, 0xa9, 0xfe,
  0x85, 0xbb, 0x4c, 0xc0, 0xa0, 0xca, 0x10, 0xe6, 0x60, 0xb5, 0x2b, 0x85,
  0x0f, 0xb5, 0x33, 0x85, 0x10, 0xa9, 0xae, 0x85, 0x03, 0xa9, 0x44, 0x85,
  0x02, 0x4c, 0x1d, 0xac, 0x20, 0xe9, 0xab, 0xc9, 0x14, 0xb0, 0x03, 0x20,
  0x73, 0xa1, 0xa2, 0x07, 0x20, 0xc7, 0xa1, 0xca, 0x10, 0xfa, 0x60, 0xa2,
  0x07, 0xb5, 0x3b, 0xc9, 0xff, 0xd0, 0x0d, 0x20, 0x8c, 0xa1, 0x20, 0xe9,
  0xab, 0x29, 0x07, 0x95, 0x3b, 0x4c, 0x4d, 0xa1, 0xca, 0x10, 0xea, 0x60,
  0x20, 0xe9, 0xab, 0x29, 0x01, 0xf0, 0x0b, 0x20, 0xb1, 0xa1, 0x95, 0x33,
  0x20, 0xa9, 0xa1, 0x95, 0x2b, 0x60, 0x20, 0xb1, 0xa1, 0x95, 0x2b, 0x20,
  0xa9, 0xa1, 0x95, 0x33, 0x60, 0x20, 0xe9, 0xab, 0x29, 0x80, 0x69, 0x14,
  0x60, 0x20, 0xe9, 0xab, 0x29, 0x01, 0xa8, 0xb9, 0xbb, 0xa1, 0x60, 0x04,
  0x9a, 0x8a, 0x29, 0x01, 0xd0, 0xf8, 0xa9, 0x01, 0x4c, 0xf2, 0xa6, 0xb5,
  0x3b, 0xc9, 0xff, 0xf0, 0xf0, 0x20, 0x4d, 0xa1, 0xa5, 0x18, 0x29, 0x01,
  0xd0, 0x12, 0xb4, 0x3b, 0xb5, 0x2b, 0x18, 0x79, 0xb8, 0xa0, 0x95, 0x2b,
  0xb5, 0x33, 0x18, 0x79, 0xb6, 0xa0, 0x95, 0x33, 0x20, 0xd3, 0xab, 0x29,
  0x9c, 0xc9, 0x9c, 0xf0, 0x18, 0xa5, 0x1a, 0x18, 0x69, 0x04, 0x29, 0x07,
  0xa8, 0xb5, 0x2b, 0x18, 0x79, 0xb8, 0xa0, 0x95, 0x2b, 0xb5, 0x33, 0x18,
  0x79, 0xb6, 0xa0, 0x95, 0x33, 0xb5, 0x2b, 0xc9, 0x9e, 0xb0, 0x1c, 0xb5,
  0x33, 0xc9, 0x9e, 0xb0, 0x16, 0x20, 0x80, 0xa3, 0xf0, 0x03, 0x4c, 0x4d,
  0xa1, 0xa9, 0xff, 0x95, 0x3b, 0x8a, 0x48, 0xa9, 0x01, 0x20, 0x89, 0xa9,
  0x68, 0xaa, 0x60, 0xa9, 0xff, 0x95, 0x3b, 0x60, 0x20, 0xd3, 0xab, 0x29,
  0x9c, 0xc9, 0x9c, 0xf0, 0xf6, 0xa5, 0x1a, 0x18, 0x69, 0x04, 0x29, 0x07,
  0xa8, 0xb5, 0x1b, 0x18, 0x79, 0xb8, 0xa0, 0x95, 0x1b, 0xb5, 0x20, 0x18,
  0x79, 0xb6, 0xa0, 0x95, 0x20, 0x60, 0xb5, 0x43, 0xd0, 0xfb, 0xb5, 0x53,
  0xd0, 0xf7, 0xb5, 0x73, 0xc9, 0x9c, 0xb0, 0xf1, 0x85, 0x0f, 0xb5, 0x63,
  0xc9, 0x9c, 0xb0, 0xe9, 0x85, 0x10, 0xa9, 0xae, 0x85, 0x03, 0xa9, 0x64,
  0x85, 0x02, 0x4c, 0x1d, 0xac, 0xa2, 0x0f, 0x20, 0x7e, 0xa2, 0xca, 0x10,
  0xfa, 0x60, 0xb5, 0x43, 0xc9, 0x80, 0xf0, 0xf9, 0x20, 0x52, 0xa2, 0x20,
  0xd3, 0xab, 0x29, 0x9c, 0xc9, 0x9c, 0xf0, 0x34, 0xa5, 0x1a, 0x18, 0x69,
  0x04, 0x29, 0x07, 0xa8, 0xb5, 0x73, 0x85, 0x02, 0xb5, 0x43, 0x85, 0x03,
  0xb9, 0xb8, 0xa0, 0x20, 0xdf, 0xa2, 0xa5, 0x02, 0x95, 0x73, 0xa5, 0x03,
  0x95, 0x43, 0xb5, 0x63, 0x85, 0x02, 0xb5, 0x53, 0x85, 0x03, 0xb9, 0xb6,
  0xa0, 0x20, 0xdf, 0xa2, 0xa5, 0x02, 0x95, 0x63, 0xa5, 0x03, 0x95, 0x53,
  0xb5, 0x43, 0xd0, 0x09, 0xb5, 0x53, 0xd0, 0x05, 0x20, 0xc6, 0xa3, 0xf0,
  0x03, 0x4c, 0x52, 0xa2, 0xa9, 0x80, 0x95, 0x43, 0xc6, 0xba, 0xa9, 0x25,
  0x4c, 0x89, 0xa9, 0x48, 0xc9, 0x96, 0xb0, 0x0d, 0x68, 0x18, 0x65, 0x02,
  0x85, 0x02, 0xa5, 0x03, 0x69, 0x00, 0x85, 0x03, 0x60, 0x68, 0x49, 0xff,
  0x18, 0x69, 0x01, 0x85, 0x12, 0xa5, 0x02, 0x38, 0xe5, 0x12, 0x85, 0x02,
  0xa5, 0x03, 0xe9, 0x00, 0x85, 0x03, 0x60, 0xb5, 0xa1, 0x85, 0x0f, 0xb5,
  0xa9, 0x85, 0x10, 0x20, 0xf9, 0xab, 0xa5, 0x00, 0xa8, 0xb9, 0x7e, 0xaf,
  0x4c, 0xd2, 0xa0, 0xa2, 0x07, 0x20, 0x24, 0xa3, 0xca, 0x10, 0xfa, 0x60,
  0xb5, 0xb1, 0xc9, 0xff, 0xf0, 0xf9, 0x20, 0x07, 0xa3, 0xb4, 0xb1, 0xb5,
  0xa1, 0x20, 0x91, 0xa5, 0x20, 0x91, 0xa5, 0xc9, 0xa8, 0xb0, 0x13, 0x95,
  0xa1, 0xb5, 0xa9, 0x20, 0x88, 0xa5, 0x20, 0x88, 0xa5, 0xc9, 0xa8, 0xb0,
  0x05, 0x95, 0xa9, 0x4c, 0x07, 0xa3, 0xa9, 0xff, 0x95, 0xb1, 0x60, 0xb5,
  0x1b, 0x85, 0x9f, 0xb5, 0x20, 0x85, 0xa0, 0xa2, 0x08, 0x20, 0x64, 0xa3,
  0xca, 0x10, 0xfa, 0x60, 0xa2, 0x07, 0xb5, 0xb1, 0xc9, 0xff, 0xd0, 0x10,
  0xa5, 0x9f, 0x95, 0xa1, 0xa5, 0xa0, 0x95, 0xa9, 0x8a, 0x29, 0x07, 0x95,
  0xb1, 0x4c, 0x07, 0xa3, 0xca, 0x10, 0xe7, 0x60, 0xb5, 0x2b, 0x85, 0x0f,
  0xb5, 0x33, 0x85, 0x10, 0x8a, 0x48, 0x20, 0x99, 0xa3, 0xf0, 0x05, 0x68,
  0xaa, 0xa9, 0x01, 0x60, 0x68, 0xaa, 0xa9, 0x00, 0x60, 0xa2, 0x04, 0xb5,
  0x25, 0xc9, 0xff, 0xf0, 0x1f, 0xb5, 0x1b, 0x38, 0xe5, 0x0f, 0xc9, 0x10,
  0xb0, 0x16, 0xb5, 0x20, 0x38, 0xe5, 0x10, 0xc9, 0x10, 0xb0, 0x0d, 0x20,
  0xc0, 0xa0, 0xa9, 0xff, 0x95, 0x25, 0x20, 0x53, 0xa3, 0xa9, 0x00, 0x60,
  0xca, 0x10, 0xd8, 0xa9, 0x01, 0x60, 0xb5, 0x73, 0x85, 0x0f, 0xb5, 0x63,
  0x85, 0x10, 0x8a, 0x48, 0x20, 0x99, 0xa3, 0xf0, 0x03, 0x4c, 0x8f, 0xa3,
  0x4c, 0x94, 0xa3, 0xa2, 0x07, 0xb5, 0x3b, 0xc9, 0xff, 0xf0, 0x15, 0xb5,
  0x2b, 0x38, 0xe9, 0x4c, 0xc9, 0x14, 0xb0, 0x0c, 0xb5, 0x33, 0x38, 0xe9,
  0x4c, 0xc9, 0x14, 0xb0, 0x03, 0x4c, 0x3a, 0xa4, 0xca, 0x10, 0xe2, 0xa2,
  0x0f, 0xb5, 0x43, 0xd0, 0x19, 0xb5, 0x53, 0xd0, 0x15, 0xb5, 0x73, 0x38,
  0xe9, 0x4c, 0xc9, 0x14, 0xb0, 0x0c, 0xb5, 0x63, 0x38, 0xe9, 0x4c, 0xc9,
  0x14, 0xb0, 0x03, 0x4c, 0x3a, 0xa4, 0xca, 0x10, 0xe0, 0xa2, 0x05, 0xb5,
  0x83, 0xc9, 0xc8, 0xf0, 0x11, 0xe9, 0x4c, 0xc9, 0x10, 0xb0, 0x0b, 0xb5,
  0x89, 0xe9, 0x4c, 0xc9, 0x10, 0xb0, 0x03, 0x4c, 0x3a, 0xa4, 0xca, 0x10,
  0xe6, 0x60, 0xa0, 0x3c, 0x98, 0x48, 0xa9, 0x0e, 0x20, 0xf2, 0xa6, 0x20,
  0x43, 0xa0, 0xe6, 0x1a, 0xa5, 0x1a, 0x29, 0x07, 0x85, 0x1a, 0x20, 0x43,
  0xa0, 0x20, 0xe9, 0xab, 0x8d, 0x0d, 0x90, 0x68, 0xa8, 0x88, 0xd0, 0xe0,
  0x20, 0x82, 0xaa, 0x20, 0x5d, 0xaa, 0xc6, 0x08, 0xa5, 0x08, 0xc9, 0x80,
  0xb0, 0x03, 0x4c, 0x7e, 0xaf, 0x20, 0xc9, 0xa6, 0x4c, 0x66, 0xaf, 0xb5,
  0x83, 0x29, 0xfe, 0x85, 0x0f, 0xb5, 0x89, 0x85, 0x10, 0xa9, 0xaf, 0x85,
  0x03, 0xa9, 0x24, 0x85, 0x02, 0x4c, 0x40, 0xab, 0x20, 0xe9, 0xab, 0x29,
  0x7f, 0xc5, 0xb9, 0xb0, 0x03, 0x20, 0x9d, 0xa4, 0xa2, 0x05, 0x20, 0xf0,
  0xa4, 0xca, 0x10, 0xfa, 0x60, 0xa2, 0x0f, 0xb5, 0x43, 0xd0, 0x1a, 0xb5,
  0x53, 0xd0, 0x16, 0xb5, 0x73, 0xc9, 0xb0, 0xb0, 0x10, 0xb5, 0x63, 0xc9,
  0xb0, 0xb0, 0x0a, 0x20, 0xc1, 0xa4, 0xa9, 0xe6, 0x85, 0xbb, 0x4c, 0x73,
  0xa4, 0xca, 0x10, 0xdf, 0x60, 0xb5, 0x73, 0x85, 0x0f, 0xb5, 0x63, 0x85,
  0x10, 0xa2, 0x05, 0xb5, 0x83, 0xc9, 0xc8, 0xd0, 0x1b, 0xa5, 0x0f, 0x95,
  0x83, 0xa5, 0x10, 0x95, 0x89, 0x20, 0xe9, 0xab, 0x29, 0x0f, 0xe9, 0x08,
  0x95, 0x95, 0x20, 0xe9, 0xab, 0x29, 0x0f, 0xe9, 0x08, 0x95, 0x8f, 0x60,
  0xca, 0x10, 0xdc, 0x60, 0xb5, 0x83, 0xc9, 0xc8, 0xf0, 0xf9, 0x20, 0x73,
  0xa4, 0xa5, 0x18, 0x29, 0x01, 0xd0, 0x03, 0x20, 0x51, 0xa5, 0x20, 0xd3,
  0xab, 0x29, 0x9c, 0xc9, 0x9c, 0xf0, 0x18, 0xa5, 0x1a, 0x18, 0x69, 0x04,
  0x29, 0x07, 0xa8, 0xb5, 0x83, 0x18, 0x79, 0xb8, 0xa0, 0x95, 0x83, 0xb5,
  0x89, 0x18, 0x79, 0xb6, 0xa0, 0x95, 0x89, 0xb5, 0x83, 0xc9, 0xa6, 0xb0,
  0x0e, 0xb5, 0x89, 0xc9, 0xa6, 0xb0, 0x08, 0x20, 0x3c, 0xa5, 0xf0, 0x03,
  0x4c, 0x73, 0xa4, 0xa9, 0xc8, 0x95, 0x83, 0x60, 0xb5, 0x83, 0x85, 0x0f,
  0xb5, 0x89, 0x85, 0x10, 0x8a, 0x48, 0x20, 0x99, 0xa3, 0xf0, 0x03, 0x4c,
  0x8f, 0xa3, 0x4c, 0x94, 0xa3, 0x20, 0xe9, 0xab, 0x29, 0x01, 0xd0, 0x0d,
  0xb5, 0x83, 0xc9, 0x58, 0xb0, 0x05, 0xf6, 0x8f, 0x4c, 0x65, 0xa5, 0xd6,
  0x8f, 0x20, 0xe9, 0xab, 0x29, 0x01, 0xd0, 0x0d, 0xb5, 0x89, 0xc9, 0x58,
  0xb0, 0x05, 0xf6, 0x95, 0x4c, 0x79, 0xa5, 0xd6, 0x95, 0xb5, 0x83, 0x18,
  0x75, 0x8f, 0x95, 0x83, 0xb5, 0x89, 0x18, 0x75, 0x95, 0x95, 0x89, 0x60,
  0x18, 0x79, 0xb6, 0xa0, 0x18, 0x79, 0xb6, 0xa0, 0x60, 0x18, 0x79, 0xb8,
  0xa0, 0x18, 0x79, 0xb8, 0xa0, 0x60, 0x20, 0x24, 0xab, 0xa9, 0x00, 0x85,
  0x1a, 0x20, 0x43, 0xa0, 0xa9, 0x1e, 0x85, 0x0f, 0x85, 0x10, 0x20, 0x55,
  0xa1, 0xa9, 0x82, 0x85, 0x0f, 0x85, 0x10, 0x20, 0x6a, 0xa2, 0xa2, 0x00,
  0xa9, 0x08, 0x85, 0x10, 0x86, 0x0f, 0xbd, 0xd2, 0xa5, 0x20, 0xe9, 0xac,
  0x20, 0x82, 0xa8, 0xe8, 0xe0, 0x0e, 0xd0, 0xf2, 0x20, 0x76, 0xa9, 0x4c,
  0x17, 0xa6, 0x28, 0x43, 0x29, 0x31, 0x39, 0x38, 0x32, 0x20, 0x48, 0x2e,
  0x45, 0x2e, 0x53, 0x2e, 0x53, 0x41, 0x54, 0x45, 0x4c, 0x4c, 0x49, 0x54,
  0x45, 0x20, 0x50, 0x41, 0x54, 0x52, 0x4f, 0x4c, 0x20, 0x43, 0x52, 0x3a,
  0x54, 0x45, 0x44, 0x44, 0x59, 0x53, 0x4f, 0x46, 0x54, 0x20, 0x20, 0x53,
  0x41, 0x54, 0x45, 0x4c, 0x4c, 0x49, 0x54, 0x45, 0x20, 0x50, 0x41, 0x54,
  0x52, 0x4f, 0x4c, 0x20, 0x43, 0x52, 0x3a, 0x54, 0x45, 0x44, 0x44, 0xa9,
  0x00, 0x85, 0x9f, 0x20, 0x64, 0xa6, 0x20, 0x4e, 0xa6, 0x20, 0x8b, 0xa6,
  0x20, 0x94, 0xa4, 0x20, 0x94, 0xa4, 0xa9, 0x82, 0x85, 0x0f, 0x85, 0x10,
  0xa2, 0x05, 0x20, 0xcb, 0xa4, 0x20, 0x94, 0xa4, 0x20, 0x94, 0xa4, 0x20,
  0x26, 0xa7, 0x20, 0x00, 0xa7, 0xe6, 0x18, 0x20, 0x21, 0xa0, 0x20, 0xd3,
  0xab, 0x29, 0x20, 0xd0, 0xd1, 0x60, 0xad, 0x04, 0x90, 0xc9, 0x08, 0xd0,
  0xf9, 0x20, 0x64, 0xa6, 0xe6, 0x9f, 0xa5, 0x9f, 0xc9, 0x1e, 0xd0, 0x04,
  0xa9, 0x00, 0x85, 0x9f, 0xa5, 0x9f, 0x18, 0x69, 0xe0, 0x85, 0x0c, 0xa9,
  0x00, 0x69, 0xa5, 0x85, 0x0d, 0xa0, 0x00, 0xa9, 0x00, 0x85, 0x0f, 0x85,
  0x10, 0x98, 0x48, 0xb1, 0x0c, 0x20, 0xe9, 0xac, 0x68, 0xa8, 0x20, 0x82,
  0xa8, 0xc8, 0xc0, 0x16, 0xd0, 0xef, 0x60, 0x20, 0xd3, 0xab, 0x29, 0x80,
  0xf0, 0x13, 0xa5, 0x13, 0x29, 0x10, 0xf0, 0x13, 0xa5, 0x13, 0x29, 0x08,
  0xf0, 0x13, 0xa5, 0x13, 0x29, 0x04, 0xf0, 0x13, 0x60, 0xee, 0x00, 0x90,
  0x4c, 0x92, 0xa6, 0xce, 0x00, 0x90, 0x4c, 0x98, 0xa6, 0xee, 0x01, 0x90,
  0x4c, 0x9e, 0xa6, 0xce, 0x01, 0x90, 0x60, 0x87, 0x87, 0x93, 0x9f, 0x93,
  0x87, 0x93, 0x9f, 0x00, 0x87, 0x87, 0x00, 0x87, 0x87, 0xa2, 0x00, 0x20,
  0x82, 0xaa, 0xbd, 0xbb, 0xa6, 0x8d, 0x0b, 0x90, 0x8d, 0x0a, 0x90, 0x20,
  0xed, 0xa6, 0xe8, 0xe0, 0x0e, 0xd0, 0xef, 0xa9, 0xdc, 0x8d, 0x0d, 0x90,
  0x20, 0xed, 0xa6, 0x20, 0xed, 0xa6, 0x4c, 0x82, 0xaa, 0xa9, 0xff, 0x4c,
  0xf2, 0xa6, 0xa8, 0x8a, 0x48, 0xa2, 0x6e, 0xe8, 0xd0, 0xfd, 0x88, 0xd0,
  0xf8, 0x68, 0xaa, 0x60, 0xa2, 0x0f, 0x5e, 0x20, 0x1f, 0x90, 0x08, 0xbd,
  0x20, 0x1f, 0x09, 0x80, 0x9d, 0x20, 0x1f, 0xca, 0x10, 0xf0, 0x60, 0xa2,
  0x0f, 0x1e, 0x20, 0x1f, 0x90, 0x08, 0xbd, 0x20, 0x1f, 0x09, 0x01, 0x9d,
  0x20, 0x1f, 0xca, 0x10, 0xf0, 0x60, 0xad, 0x20, 0x1f, 0x48, 0xa2, 0x00,
  0xbd, 0x21, 0x1f, 0x9d, 0x20, 0x1f, 0xe8, 0xe0, 0x0f, 0xd0, 0xf5, 0x68,
  0x8d, 0x2f, 0x1f, 0x60, 0xad, 0x2f, 0x1f, 0x48, 0xa2, 0x0e, 0xbd, 0x20,
  0x1f, 0x9d, 0x21, 0x1f, 0xca, 0x10, 0xf7, 0x68, 0x8d, 0x20, 0x1f, 0x60,
  0x20, 0xd3, 0xab, 0x29, 0x80, 0xd0, 0x03, 0x20, 0x13, 0xa7, 0xa5, 0x13,
  0x29, 0x10, 0xd0, 0x03, 0x20, 0x00, 0xa7, 0xa5, 0x13, 0x29, 0x08, 0xd0,
  0x03, 0x20, 0x26, 0xa7, 0xa5, 0x13, 0x29, 0x04, 0xd0, 0x03, 0x20, 0x3c,
  0xa7, 0x60, 0xa9, 0x00, 0x85, 0x0f, 0x85, 0x10, 0xa5, 0x9e, 0x20, 0xf7,
  0xa7, 0xa9, 0x10, 0x85, 0x0f, 0xa5, 0x9c, 0x20, 0xf7, 0xa7, 0xa9, 0x10,
  0x85, 0x10, 0xa5, 0x9d, 0x20, 0xf7, 0xa7, 0xa9, 0x00, 0x85, 0x0f, 0xa5,
  0x9b, 0x4c, 0xf7, 0xa7, 0xa9, 0x08, 0x85, 0x0f, 0xa9, 0x00, 0x85, 0x10,
  0xa9, 0x5d, 0x20, 0xe9, 0xac, 0xa9, 0x10, 0x85, 0x10, 0xa9, 0x5d, 0x20,
  0xe9, 0xac, 0xa9, 0x08, 0x85, 0x10, 0xa9, 0x00, 0x85, 0x0f, 0xa9, 0x40,
  0x20, 0xe9, 0xac, 0x20, 0x82, 0xa8, 0xa9, 0x82, 0x85, 0x03, 0xa9, 0xb0,
  0x85, 0x02, 0x20, 0x40, 0xab, 0x20, 0x82, 0xa8, 0xa9, 0x40, 0x20, 0xe9,
  0xac, 0x20, 0x9e, 0xa8, 0x20, 0xde, 0xa9, 0x20, 0x5d, 0xaa, 0x20, 0x76,
  0xa9, 0x4c, 0x63, 0xa9, 0x20, 0xd3, 0xab, 0x29, 0x9c, 0xc9, 0x9c, 0xd0,
  0x01, 0x60, 0x20, 0x76, 0xa7, 0x20, 0xfd, 0xa7, 0x4c, 0x76, 0xa7, 0x18,
  0x69, 0x30, 0x4c, 0xe9, 0xac, 0xa2, 0x0f, 0xa9, 0x00, 0x85, 0x9c, 0x85,
  0x9e, 0x85, 0x9d, 0x85, 0x9b, 0xb5, 0x43, 0xc9, 0x80, 0xf0, 0x47, 0xb5,
  0x43, 0xf0, 0x3a, 0xc9, 0x80, 0x90, 0x1b, 0xb5, 0x53, 0xf0, 0x0e, 0xc9,
  0x80, 0x90, 0x05, 0xe6, 0x9e, 0x4c, 0x56, 0xa8, 0xe6, 0x9b, 0x4c, 0x56,
  0xa8, 0xb5, 0x63, 0xc9, 0x58, 0x90, 0xf0, 0x4c, 0x24, 0xa8, 0xb5, 0x53,
  0xf0, 0x0e, 0xc9, 0x80, 0x90, 0x05, 0xe6, 0x9c, 0x4c, 0x56, 0xa8, 0xe6,
  0x9d, 0x4c, 0x56, 0xa8, 0xb5, 0x63, 0xc9, 0x58, 0x90, 0xf0, 0x4c, 0x3f,
  0xa8, 0xb5, 0x73, 0xc9, 0x58, 0x90, 0xc4, 0x4c, 0x32, 0xa8, 0xca, 0x10,
  0xb0, 0xa5, 0x9c, 0x20, 0x76, 0xa8, 0x85, 0x9c, 0xa5, 0x9e, 0x20, 0x76,
  0xa8, 0x85, 0x9e, 0xa5, 0x9d, 0x20, 0x76, 0xa8, 0x85, 0x9d, 0xa5, 0x9b,
  0x20, 0x76, 0xa8, 0x85, 0x9b, 0x60, 0xf0, 0x07, 0xc9, 0x09, 0x90, 0xf9,
  0xa9, 0xfb, 0x60, 0xa9, 0xf0, 0x60, 0x48, 0xa5, 0x0f, 0x18, 0x69, 0x08,
  0x85, 0x0f, 0x68, 0x60, 0x52, 0x01, 0x0e, 0x0b, 0x09, 0x0e, 0x07, 0x20,
  0x53, 0x03, 0x0f, 0x12, 0x05, 0x20, 0x48, 0x09, 0x07, 0x08, 0xa2, 0x00,
  0xa9, 0x18, 0x85, 0x0f, 0xa9, 0x00, 0x85, 0x10, 0xbd, 0x8c, 0xa8, 0x20,
  0xe9, 0xac, 0x20, 0x82, 0xa8, 0xe8, 0xe0, 0x12, 0xd0, 0xf2, 0x60, 0xa2,
  0x0f, 0xb5, 0x43, 0xc9, 0x80, 0xd0, 0xf7, 0xca, 0x10, 0xf7, 0x20, 0x24,
  0xab, 0x20, 0x9c, 0xa7, 0xa2, 0x00, 0xa9, 0x32, 0x85, 0x0f, 0xa9, 0x50,
  0x85, 0x10, 0xbd, 0x10, 0xa9, 0x85, 0x03, 0xbd, 0x15, 0xa9, 0x85, 0x02,
  0x20, 0x1d, 0xac, 0x20, 0x82, 0xa8, 0x20, 0x82, 0xa8, 0xe8, 0xe0, 0x05,
  0xd0, 0xe8, 0x20, 0x82, 0xaa, 0xa2, 0x32, 0xe6, 0x18, 0x20, 0x21, 0xa0,
  0xa9, 0x46, 0x20, 0xf2, 0xa6, 0x8a, 0x48, 0xa9, 0x03, 0x20, 0x89, 0xa9,
  0x68, 0xaa, 0xca, 0xd0, 0xea, 0xa5, 0xb9, 0xc9, 0x0f, 0xf0, 0x02, 0xe6,
  0xb9, 0x4c, 0x7a, 0xaf, 0xae, 0xae, 0xae, 0xae, 0xaf, 0x84, 0xa4, 0xc4,
  0xe4, 0x04, 0xa0, 0x00, 0xb1, 0x0c, 0xf0, 0x19, 0xc9, 0x10, 0xb0, 0x06,
  0x20, 0x4f, 0xa9, 0x4c, 0x2f, 0xa9, 0xb1, 0x0c, 0x20, 0x44, 0xa9, 0xc8,
  0xc0, 0x02, 0xd0, 0xf6, 0xa9, 0x00, 0x4c, 0x4f, 0xa9, 0x20, 0x82, 0xa8,
  0xc8, 0xc0, 0x02, 0xd0, 0xdb, 0x4c, 0x34, 0xa9, 0x85, 0x9f, 0x4a, 0x4a,
  0x4a, 0x4a, 0x20, 0x4f, 0xa9, 0xa5, 0x9f, 0x29, 0x0f, 0x20, 0x58, 0xa9,
  0x20, 0x82, 0xa8, 0x60, 0x84, 0x11, 0x18, 0x69, 0x30, 0x20, 0xe9, 0xac,
  0xa4, 0x11, 0x60, 0xa9, 0x08, 0x85, 0x10, 0xa9, 0x5a, 0x85, 0x0f, 0xa9,
  0x00, 0x85, 0x0d, 0xa9, 0x04, 0x85, 0x0c, 0x4c, 0x1a, 0xa9, 0xa9, 0x08,
  0x85, 0x10, 0xa9, 0x88, 0x85, 0x0f, 0xa9, 0x00, 0x85, 0x0d, 0xa9, 0x06,
  0x85, 0x0c, 0x4c, 0x1a, 0xa9, 0x48, 0x20, 0x63, 0xa9, 0x20, 0xde, 0xa9,
  0x20, 0x76, 0xa9, 0xf8, 0x68, 0x18, 0x65, 0x05, 0x85, 0x05, 0xa5, 0x04,
  0x69, 0x00, 0x85, 0x04, 0xd8, 0xa5, 0x04, 0xc5, 0x06, 0x90, 0x10, 0xd0,
  0x06, 0xa5, 0x05, 0xc5, 0x07, 0x90, 0x08, 0xa5, 0x04, 0x85, 0x06, 0xa5,
  0x05, 0x85, 0x07, 0x20, 0x76, 0xa9, 0x20, 0xde, 0xa9, 0x4c, 0x63, 0xa9,
  0x00, 0x02, 0x04, 0x06, 0x08, 0x10, 0x15, 0x25, 0x50, 0x99, 0x15, 0xaa,
  0x1e, 0xaa, 0x27, 0xaa, 0x2d, 0xaa, 0x36, 0xaa, 0x3d, 0xaa, 0x43, 0xaa,
  0x48, 0xaa, 0x4c, 0xaa, 0x54, 0xaa, 0xa2, 0x09, 0xa5, 0x04, 0xdd, 0xc0,
  0xa9, 0x90, 0x2a, 0x8a, 0x0a, 0xaa, 0xbd, 0xca, 0xa9, 0x85, 0x0c, 0xbd,
  0xcb, 0xa9, 0x85, 0x0d, 0xa0, 0x00, 0xa9, 0x08, 0x85, 0x10, 0xa9, 0x18,
  0x85, 0x0f, 0x98, 0x48, 0xb1, 0x0c, 0xf0, 0x0b, 0x20, 0xe9, 0xac, 0x20,
  0x82, 0xa8, 0x68, 0xa8, 0xc8, 0xd0, 0xef, 0x68, 0x60, 0xca, 0x4c, 0xe0,
  0xa9, 0x42, 0x45, 0x47, 0x49, 0x4e, 0x4e, 0x45, 0x52, 0x00, 0x49, 0x4d,
  0x42, 0x45, 0x43, 0x49, 0x4c, 0x45, 0x00, 0x49, 0x4e, 0x45, 0x50, 0x54,
  0x00, 0x48, 0x4f, 0x53, 0x45, 0x48, 0x45, 0x41, 0x44, 0x00, 0x50, 0x52,
  0x45, 0x50, 0x50, 0x59, 0x00, 0x4d, 0x41, 0x43, 0x48, 0x4f, 0x00, 0x4a,
  0x4f, 0x43, 0x4b, 0x00, 0x50, 0x52, 0x4f, 0x00, 0x41, 0x57, 0x45, 0x53,
  0x4f, 0x4d, 0x45, 0x00, 0x43, 0x48, 0x45, 0x41, 0x54, 0x45, 0x52, 0x3f,
  0x00, 0xa6, 0x08, 0xf0, 0x20, 0xa9, 0x00, 0x85, 0x0f, 0xa9, 0x9f, 0x85,
  0x10, 0x8a, 0x48, 0xa9, 0xad, 0x85, 0x03, 0xa9, 0x04, 0x85, 0x02, 0x20,
  0x1d, 0xac, 0x20, 0x82, 0xa8, 0x20, 0x82, 0xa8, 0x68, 0xaa, 0xca, 0xd0,
  0xe8, 0x60, 0xa9, 0x00, 0x8d, 0x0a, 0x90, 0x8d, 0x0b, 0x90, 0x8d, 0x0c,
  0x90, 0x8d, 0x0d, 0x90, 0x60, 0xa5, 0xbb, 0xf0, 0x17, 0x38, 0xe9, 0x04,
  0x8d, 0x0a, 0x90, 0x8d, 0x0b, 0x90, 0x8d, 0x0d, 0x90, 0x85, 0xbb, 0xc9,
  0xc8, 0xb0, 0x05, 0x20, 0x82, 0xaa, 0x85, 0xbb, 0xa5, 0xb1, 0xc9, 0x07,
  0xb0, 0x0c, 0xa5, 0xa1, 0x65, 0xa9, 0x29, 0x7f, 0x69, 0x80, 0x8d, 0x0d,
  0x90, 0x60, 0xa9, 0x00, 0x8d, 0x0d, 0x90, 0x60, 0xa9, 0x8c, 0x8d, 0x05,
  0x90, 0xa9, 0x9a, 0x8d, 0x02, 0x90, 0xa9, 0x1b, 0x8d, 0x03, 0x90, 0xa9,
  0x01, 0x8d, 0x00, 0x90, 0xa9, 0x14, 0x8d, 0x01, 0x90, 0xa9, 0x1f, 0x8d,
  0x0e, 0x90, 0xa9, 0x0a, 0x8d, 0x0f, 0x90, 0xa9, 0x02, 0x85, 0x01, 0xa9,
  0x1c, 0x85, 0x00, 0xa2, 0x0b, 0xa9, 0x00, 0xa0, 0x00, 0x91, 0x00, 0x18,
  0x69, 0x0b, 0xc8, 0xc0, 0x16, 0xd0, 0xf6, 0x48, 0xa5, 0x00, 0x18, 0x69,
  0x1a, 0x85, 0x00, 0xa5, 0x01, 0x69, 0x00, 0x85, 0x01, 0x68, 0x38, 0xe9,
  0xf1, 0xca, 0xd0, 0xdf, 0xa2, 0x00, 0xa9, 0x0f, 0x9d, 0x00, 0x96, 0x9d,
  0x00, 0x97, 0xca, 0xd0, 0xf7, 0x20, 0x7c, 0xac, 0xa9, 0x00, 0x85, 0x00,
  0xa9, 0x10, 0x85, 0x01, 0xa9, 0x00, 0xa8, 0x91, 0x00, 0xe6, 0x00, 0xd0,
  0xfa, 0xe6, 0x01, 0xa5, 0x01, 0xc9, 0x20, 0xd0, 0xef, 0x4c, 0x3f, 0xaf,
  0x8a, 0x48, 0x20, 0xf9, 0xab, 0xc9, 0x04, 0xb0, 0x2d, 0xa0, 0x07, 0xb1,
  0x02, 0x85, 0x16, 0xa9, 0x00, 0xa6, 0x17, 0xf0, 0x06, 0x46, 0x16, 0x6a,
  0xca, 0xd0, 0xfa, 0x85, 0x15, 0xb1, 0x00, 0x45, 0x16, 0x91, 0x00, 0x98,
  0xaa, 0x09, 0xb0, 0xa8, 0xb1, 0x00, 0x45, 0x15, 0x91, 0x00, 0x8a, 0xa8,
  0x88, 0x10, 0xd8, 0x68, 0xaa, 0x60, 0xa0, 0x07, 0xb1, 0x02, 0x85, 0x15,
  0xa5, 0x17, 0x49, 0x07, 0x18, 0x69, 0x01, 0xaa, 0xa9, 0x00, 0x06, 0x15,
  0x2a, 0xca, 0xd0, 0xfa, 0x85, 0x16, 0xb1, 0x00, 0x45, 0x16, 0x91, 0x00,
  0x98, 0xaa, 0x09, 0xb0, 0xa8, 0xb1, 0x00, 0x45, 0x15, 0x91, 0x00, 0x8a,
  0xa8, 0x88, 0x10, 0xd4, 0x68, 0xaa, 0x60, 0x10, 0x10, 0x11, 0x12, 0x12,
  0x13, 0x14, 0x14, 0x15, 0x16, 0x16, 0x17, 0x18, 0x18, 0x19, 0x1a, 0x1b,
  0x1b, 0x1c, 0x1d, 0x1d, 0x1e, 0x00, 0xb0, 0x60, 0x10, 0xc0, 0x70, 0x20,
  0xd0, 0x80, 0x30, 0xe0, 0x90, 0x40, 0xf0, 0xa0, 0x50, 0x00, 0xb0, 0x60,
  0x10, 0xc0, 0x70, 0xa9, 0x7f, 0x8d, 0x22, 0x91, 0xad, 0x20, 0x91, 0x29,
  0x80, 0x85, 0x13, 0xad, 0x1f, 0x91, 0x29, 0x3c, 0x05, 0x13, 0x85, 0x13,
  0x60, 0x65, 0x0f, 0x65, 0x10, 0x6d, 0x04, 0x90, 0x75, 0x00, 0x65, 0x14,
  0x65, 0x18, 0x85, 0x14, 0x60, 0x8a, 0x48, 0xa5, 0x0f, 0x4a, 0x4a, 0x4a,
  0xaa, 0xbd, 0xa7, 0xab, 0x85, 0x01, 0xbd, 0xbd, 0xab, 0x18, 0x65, 0x10,
  0x85, 0x00, 0xa5, 0x01, 0x69, 0x00, 0x85, 0x01, 0xa5, 0x0f, 0x29, 0x07,
  0x85, 0x17, 0x68, 0xaa, 0x60, 0xa9, 0x20, 0x85, 0x0e, 0x8a, 0x48, 0xa5,
  0x0f, 0x29, 0xfe, 0x85, 0x0f, 0x20, 0xf9, 0xab, 0xa0, 0x00, 0xb1, 0x02,
  0x85, 0x0a, 0xc8, 0xb1, 0x02, 0x85, 0x09, 0xc8, 0xa9, 0x00, 0xa6, 0x17,
  0xf0, 0x08, 0x46, 0x09, 0x66, 0x0a, 0x6a, 0xca, 0xd0, 0xf8, 0x85, 0x0b,
  0x84, 0x11, 0xa0, 0x00, 0xb1, 0x00, 0x45, 0x09, 0x91, 0x00, 0xa0, 0xb0,
  0xb1, 0x00, 0x45, 0x0a, 0x91, 0x00, 0xa0, 0x60, 0xe6, 0x01, 0xb1, 0x00,
  0x45, 0x0b, 0x91, 0x00, 0xc6, 0x01, 0xa5, 0x00, 0x18, 0x69, 0x01, 0x85,
  0x00, 0xa5, 0x01, 0x69, 0x00, 0x85, 0x01, 0xa4, 0x11, 0xc4, 0x0e, 0xd0,
  0xb5, 0x68, 0xaa, 0x60, 0xa2, 0x19, 0xa9, 0xf2, 0x9d, 0x00, 0x02, 0x9d,
  0x38, 0x03, 0xa9, 0x05, 0x9d, 0x00, 0x96, 0x9d, 0x38, 0x97, 0xa9, 0x03,
  0x9d, 0x1a, 0x96, 0xca, 0x10, 0xe8, 0xa9, 0x02, 0x85, 0x01, 0xa9, 0x00,
  0x85, 0x00, 0xa2, 0x0c, 0xa9, 0xf2, 0xa0, 0x00, 0x20, 0xd2, 0xac, 0xc8,
  0x20, 0xd2, 0xac, 0xa0, 0x18, 0x20, 0xd2, 0xac, 0xc8, 0x20, 0xd2, 0xac,
  0xa5, 0x00, 0x18, 0x69, 0x1a, 0x85, 0x00, 0xa5, 0x01, 0x69, 0x00, 0x85,
  0x01, 0xca, 0x10, 0xdc, 0xa9, 0x01, 0xa2, 0x02, 0x9d, 0x36, 0x96, 0x9d,
  0x1c, 0x96, 0xca, 0x10, 0xf7, 0x60, 0x91, 0x00, 0xa5, 0x01, 0x18, 0x69,
  0x94, 0x85, 0x01, 0xa9, 0x05, 0x91, 0x00, 0xa5, 0x01, 0x38, 0xe9, 0x94,
  0x85, 0x01, 0xa9, 0xf2, 0x60, 0x85, 0x02, 0xa9, 0x00, 0x85, 0x03, 0x06,
  0x02, 0x26, 0x03, 0x06, 0x02, 0x26, 0x03, 0x06, 0x02, 0x26, 0x03, 0xa5,
  0x03, 0x09, 0x88, 0x85, 0x03, 0x4c, 0x40, 0xab, 0x00, 0x02, 0x00, 0x02,
  0x00, 0x02, 0x00, 0x02, 0x80, 0x0a, 0x80, 0x0b, 0x80, 0x0b, 0x80, 0x0b,
  0xe0, 0x2f, 0xe0, 0x2f, 0xe0, 0x2f, 0xe0, 0x2f, 0x48, 0x85, 0x48, 0x85,
  0x08, 0x81, 0x08, 0x81, 0x02, 0x00, 0x02, 0x00, 0x28, 0x00, 0x28, 0x00,
  0xb8, 0x02, 0xb8, 0x02, 0xe0, 0x2b, 0xe0, 0x2b, 0xe0, 0x87, 0xe0, 0x87,
  0x80, 0x05, 0x80, 0x05, 0x80, 0x00, 0x80, 0x00, 0x00, 0x02, 0x00, 0x02,
  0x00, 0xa0, 0x00, 0xa0, 0x00, 0x0a, 0x00, 0x0a, 0xa0, 0x1f, 0xa0, 0x1f,
  0xfa, 0x5f, 0xfa, 0x5f, 0xa0, 0x1f, 0xa0, 0x1f, 0x00, 0x0a, 0x00, 0x0a,
  0x00, 0xa0, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02,
  0x80, 0x00, 0x80, 0x00, 0x80, 0x05, 0x80, 0x05, 0xe0, 0x87, 0xe0, 0x87,
  0xe0, 0x2b, 0xe0, 0x2b, 0xb8, 0x02, 0xb8, 0x02, 0x28, 0x00, 0x28, 0x00,
  0x02, 0x00, 0x02, 0x00, 0x08, 0x81, 0x08, 0x81, 0x48, 0x85, 0x48, 0x85,
  0xe0, 0x2f, 0xe0, 0x2f, 0xe0, 0x2f, 0xe0, 0x2f, 0x80, 0x0b, 0x80, 0x0b,
  0x80, 0x0b, 0x80, 0x0a, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02,
  0x80, 0x00, 0x80, 0x00, 0x00, 0x02, 0x00, 0x02, 0x50, 0x02, 0x50, 0x02,
  0xd2, 0x0b, 0xd2, 0x0b, 0xe8, 0x0b, 0xe8, 0x0b, 0x80, 0x2e, 0x80, 0x2e,
  0x00, 0x28, 0x00, 0x28, 0x00, 0x80, 0x00, 0x80, 0x0a, 0x00, 0x0a, 0x00,
  0xa0, 0x00, 0xa0, 0x00, 0xf4, 0x0a, 0xf4, 0x0a, 0xf5, 0xaf, 0xf5, 0xaf,
  0xf4, 0x0a, 0xf4, 0x0a, 0xa0, 0x00, 0xa0, 0x00, 0x0a, 0x00, 0x0a, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x28, 0x00, 0x28,
  0x80, 0x2e, 0x80, 0x2e, 0xe8, 0x0b, 0xe8, 0x0b, 0xd2, 0x0b, 0xd2, 0x0b,
  0x50, 0x02, 0x50, 0x02, 0x00, 0x02, 0x00, 0x02, 0x80, 0x00, 0x80, 0x00,
  0x81, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42, 0x81, 0x81, 0x42, 0x24, 0x18,
  0x18, 0x24, 0x42, 0x81, 0x10, 0x10, 0x10, 0xff, 0x10, 0x10, 0x10, 0x10,
  0x10, 0x10, 0x10, 0xff, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x04, 0x02,
  0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x40, 0x20, 0x10,
  0x18, 0x3c, 0x7e, 0xff, 0xff, 0x7e, 0x3c, 0x18, 0x18, 0x3c, 0x7e, 0xff,
  0xff, 0x7e, 0x3c, 0x18, 0xa0, 0x02, 0x60, 0x09, 0x60, 0x09, 0x58, 0x09,
  0x58, 0xa9, 0x58, 0x95, 0x58, 0x95, 0x58, 0xa5, 0x56, 0x25, 0x56, 0x25,
  0x56, 0x25, 0x56, 0x25, 0x56, 0x09, 0x58, 0x09, 0x58, 0x09, 0xa0, 0x0a,
  0xc0, 0x00, 0xc0, 0x00, 0xe0, 0x02, 0xc8, 0x08, 0xc2, 0x20, 0x0a, 0x28,
  0xa6, 0x26, 0x66, 0x26, 0x66, 0x26, 0x66, 0x26, 0x66, 0x26, 0x68, 0x0a,
  0xa0, 0x02, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0x00, 0xc0, 0xff, 0xf0, 0xff,
  0xf0, 0xfc, 0x3c, 0x30, 0x3c, 0x30, 0xf0, 0x3c, 0xf0, 0x3f, 0xc0, 0x3f,
  0xc0, 0x3f, 0xf0, 0x3f, 0xf0, 0x3c, 0x3c, 0x30, 0x3c, 0x30, 0xf0, 0xfc,
  0xf0, 0xff, 0xc0, 0xff, 0x00, 0x0f, 0xc0, 0x3f, 0xc0, 0x3f, 0xf0, 0xff,
  0xf0, 0xf0, 0xf0, 0xf0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0, 0x30, 0xc0,
  0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xc0, 0x3f, 0xc0, 0x3f, 0x00, 0x0f,
  0x3c, 0xc0, 0x3c, 0xc0, 0x3c, 0xf0, 0x3c, 0xf0, 0x3c, 0xfc, 0x3c, 0xfc,
  0x3c, 0xff, 0x3c, 0xff, 0xfc, 0xff, 0xfc, 0xf3, 0xfc, 0xf3, 0xfc, 0xf0,
  0xfc, 0xf0, 0x3c, 0xf0, 0x3c, 0xf0, 0x3c, 0xf0, 0x3c, 0xf0, 0x3c, 0xf0,
  0x3c, 0xf0, 0x3c, 0xf0, 0x3c, 0xf0, 0x3c, 0xf0, 0x3c, 0xf0, 0x3c, 0xf0,
  0x3c, 0xf0, 0x3c, 0xf0, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xff, 0xf0, 0x3f,
  0xf0, 0x3f, 0xc0, 0x0f, 0xc0, 0x0f, 0xf0, 0x3f, 0x3c, 0xf0, 0x0c, 0xf0,
  0x0c, 0xf0, 0x00, 0xfc, 0xc0, 0xff, 0xf0, 0x3f, 0xf0, 0x0f, 0xfc, 0x03,
  0xfc, 0x00, 0x3c, 0xc0, 0x3c, 0xc0, 0x3c, 0xf0, 0xf0, 0x3f, 0xc0, 0x0f,
  0x28, 0x82, 0x82, 0xaa, 0xaa, 0x82, 0x82, 0x28, 0xa9, 0xc8, 0xa2, 0x05,
  0x95, 0x83, 0xca, 0x10, 0xfb, 0xa2, 0x04, 0xa9, 0xff, 0x95, 0x25, 0xca,
  0x10, 0xfb, 0x60, 0xa0, 0x0f, 0x20, 0xe9, 0xab, 0x29, 0x03, 0x0a, 0x0a,
  0x0a, 0x0a, 0x18, 0x69, 0x04, 0x85, 0x02, 0xa9, 0xae, 0x69, 0x00, 0x85,
  0x03, 0xb1, 0x02, 0x99, 0x20, 0x1f, 0x88, 0x10, 0xf8, 0x60, 0x20, 0xe9,
  0xab, 0x29, 0x3f, 0x69, 0xb0, 0x60, 0x20, 0x2c, 0xaf, 0x20, 0x9a, 0xa5,
  0xa9, 0x09, 0x85, 0xb9, 0xa2, 0x04, 0x86, 0x08, 0xa9, 0x00, 0x85, 0x04,
  0x85, 0x05, 0xa5, 0xb9, 0x85, 0xba, 0x20, 0x24, 0xab, 0xa9, 0x63, 0x85,
  0x19, 0xa9, 0x00, 0x85, 0x1a, 0x20, 0x43, 0xa0, 0xa9, 0xff, 0xa2, 0x07,
  0x95, 0x3b, 0xca, 0x10, 0xfb, 0xa2, 0x07, 0x95, 0xb1, 0xca, 0x10, 0xfb,
  0xa9, 0x80, 0xa2, 0x0f, 0x95, 0x43, 0xca, 0x10, 0xfb, 0x20, 0x2c, 0xaf,
  0xa6, 0xba, 0x20, 0x19, 0xa0, 0x95, 0x43, 0x20, 0x19, 0xa0, 0x95, 0x53,
  0x20, 0x5e, 0xaf, 0x95, 0x73, 0x20, 0x5e, 0xaf, 0x95, 0x63, 0xca, 0x10,
  0xe9, 0x20, 0xfd, 0xa7, 0x20, 0x76, 0xa7, 0x20, 0x9c, 0xa7, 0x20, 0x82,
  0xaa, 0x85, 0xbb, 0x20, 0x50, 0xa7, 0x20, 0xe4, 0xa0, 0x20, 0x59, 0xa0,
  0x20, 0x60, 0xa1, 0x20, 0x75, 0xa2, 0x20, 0xe4, 0xa7, 0x20, 0x1b, 0xa3,
  0x20, 0x91, 0xaa, 0x20, 0x88, 0xa4, 0xe6, 0x18, 0x20, 0x21, 0xa0, 0x20,
  0xb7, 0xa8, 0x4c, 0xcf, 0xaf, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
  0xaa, 0xaa, 0xaa, 0xaa
};

