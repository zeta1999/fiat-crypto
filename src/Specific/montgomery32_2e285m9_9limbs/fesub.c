static void fesub(uint32_t out[9], const uint32_t in1[9], const uint32_t in2[9]) {
  { const uint32_t x18 = in1[8];
  { const uint32_t x19 = in1[7];
  { const uint32_t x17 = in1[6];
  { const uint32_t x15 = in1[5];
  { const uint32_t x13 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x34 = in2[8];
  { const uint32_t x35 = in2[7];
  { const uint32_t x33 = in2[6];
  { const uint32_t x31 = in2[5];
  { const uint32_t x29 = in2[4];
  { const uint32_t x27 = in2[3];
  { const uint32_t x25 = in2[2];
  { const uint32_t x23 = in2[1];
  { const uint32_t x21 = in2[0];
  { uint32_t x37; uint8_t/*bool*/ x38 = _subborrow_u32(0x0, x5, x21, &x37);
  { uint32_t x40; uint8_t/*bool*/ x41 = _subborrow_u32(x38, x7, x23, &x40);
  { uint32_t x43; uint8_t/*bool*/ x44 = _subborrow_u32(x41, x9, x25, &x43);
  { uint32_t x46; uint8_t/*bool*/ x47 = _subborrow_u32(x44, x11, x27, &x46);
  { uint32_t x49; uint8_t/*bool*/ x50 = _subborrow_u32(x47, x13, x29, &x49);
  { uint32_t x52; uint8_t/*bool*/ x53 = _subborrow_u32(x50, x15, x31, &x52);
  { uint32_t x55; uint8_t/*bool*/ x56 = _subborrow_u32(x53, x17, x33, &x55);
  { uint32_t x58; uint8_t/*bool*/ x59 = _subborrow_u32(x56, x19, x35, &x58);
  { uint32_t x61; uint8_t/*bool*/ x62 = _subborrow_u32(x59, x18, x34, &x61);
  { uint32_t x63 = cmovznz32(x62, 0x0, 0xffffffff);
  { uint32_t x64 = (x63 & 0xfffffff7);
  { uint32_t x66; uint8_t/*bool*/ x67 = _addcarryx_u32(0x0, x37, x64, &x66);
  { uint32_t x68 = (x63 & 0xffffffff);
  { uint32_t x70; uint8_t/*bool*/ x71 = _addcarryx_u32(x67, x40, x68, &x70);
  { uint32_t x72 = (x63 & 0xffffffff);
  { uint32_t x74; uint8_t/*bool*/ x75 = _addcarryx_u32(x71, x43, x72, &x74);
  { uint32_t x76 = (x63 & 0xffffffff);
  { uint32_t x78; uint8_t/*bool*/ x79 = _addcarryx_u32(x75, x46, x76, &x78);
  { uint32_t x80 = (x63 & 0xffffffff);
  { uint32_t x82; uint8_t/*bool*/ x83 = _addcarryx_u32(x79, x49, x80, &x82);
  { uint32_t x84 = (x63 & 0xffffffff);
  { uint32_t x86; uint8_t/*bool*/ x87 = _addcarryx_u32(x83, x52, x84, &x86);
  { uint32_t x88 = (x63 & 0xffffffff);
  { uint32_t x90; uint8_t/*bool*/ x91 = _addcarryx_u32(x87, x55, x88, &x90);
  { uint32_t x92 = (x63 & 0xffffffff);
  { uint32_t x94; uint8_t/*bool*/ x95 = _addcarryx_u32(x91, x58, x92, &x94);
  { uint32_t x96 = (x63 & 0x1fffffff);
  { uint32_t x98; uint8_t/*bool*/ _ = _addcarryx_u32(x95, x61, x96, &x98);
  out[0] = x66;
  out[1] = x70;
  out[2] = x74;
  out[3] = x78;
  out[4] = x82;
  out[5] = x86;
  out[6] = x90;
  out[7] = x94;
  out[8] = x98;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
