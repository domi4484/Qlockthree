/**
 * Staben
 * Definition der (Buch-)Staben fuer die QLOCKTWO.
 * Die Staben sind wie die Woerter Bitmasken fuer die Matrix.
 * Die Staben sind so ausgelegt, dass zwei nebeneinander passen.
 * Das ist wichtig fuewr die Konfiguration der Uhr.
 *
 * @mc       Arduino/RBBB
 * @autor    Christian Aschoff / caschoff _AT_ mac _DOT_ com
 * @version  1.1
 * @created  23.1.2013
 *
 * Versionshiostorie:
 * V 1.1:  - auf 5 Pixel Hoehe geandert, damit zwei Reihen auf das Display passen.
 */
#ifndef STABEN_H
#define STABEN_H

#include <avr/pgmspace.h>

//extern const char staben[][6] PROGMEM;
const char staben[][6] PROGMEM = {
  { // 0:A
    0b00001100,
    0b00010010,
    0b00011110,
    0b00010010,
    0b00010010,
    1
  }
  , { // 1:B
    0b00011100,
    0b00010010,
    0b00011100,
    0b00010010,
    0b00011100,
    1
  }
  , { // 2:C
    0b00001110,
    0b00010000,
    0b00010000,
    0b00010000,
    0b00001110,
    1
  }
  , { // 3:D
    0b00011100,
    0b00010010,
    0b00010010,
    0b00010010,
    0b00011100,
    1
  }
  , { // 4:E
    0b00011110,
    0b00010000,
    0b00011100,
    0b00010000,
    0b00011110,
    1
  }
  , { // 5:F
    0b00011110,
    0b00010000,
    0b00011100,
    0b00010000,
    0b00010000,
    1
  }
  , { // 6:G
    0b00001110,
    0b00010000,
    0b00010110,
    0b00010010,
    0b00001100,
    1
  }
  , { // 7:H
    0b00010010,
    0b00010010,
    0b00011110,
    0b00010010,
    0b00010010,
    1
  }
  , { // 8:I
    0b00010000,
    0b00010000,
    0b00010000,
    0b00010000,
    0b00010000,
    4
  }
  , { // 9:J
    0b00011110,
    0b00000010,
    0b00000010,
    0b00010010,
    0b00001100,
    1
  }
  , { // 10:K
    0b00010010,
    0b00010100,
    0b00011000,
    0b00010100,
    0b00010010,
    1
  }
  , { // 11:L
    0b00010000,
    0b00010000,
    0b00010000,
    0b00010000,
    0b00011110,
    1
  }
  , { // 12:M
    0b00010001,
    0b00011011,
    0b00010101,
    0b00010001,
    0b00010001,
    0
  }
  , { // 13:N
    0b00010001,
    0b00011001,
    0b00010101,
    0b00010011,
    0b00010001,
    0
  }
  , { // 14:O
    0b00001100,
    0b00010010,
    0b00010010,
    0b00010010,
    0b00001100,
    1
  }
  , { // 15:P
    0b00011100,
    0b00010010,
    0b00011100,
    0b00010000,
    0b00010000,
    1
  }
  , { // 16:Q
    0b00001100,
    0b00010010,
    0b00010010,
    0b00001100,
    0b00000010,
    1
  }
  , { // 17:R
    0b00011100,
    0b00010010,
    0b00011100,
    0b00010100,
    0b00010010,
    1
  }
  , { // 18:S
    0b00001110,
    0b00010000,
    0b00001100,
    0b00000010,
    0b00011100,
    1
  }
  , { // 19:T
    0b00011111,
    0b00000100,
    0b00000100,
    0b00000100,
    0b00000100,
    0
  }
  , { // 20:U
    0b00010001,
    0b00010001,
    0b00010001,
    0b00010001,
    0b00001110,
    0
  }
  , { // 21:V
    0b00010001,
    0b00010001,
    0b00010001,
    0b00001010,
    0b00000100,
    0
  }
  , { // 22:W
    0b00010001,
    0b00010001,
    0b00010101,
    0b00011011,
    0b00010001,
    0
  }
  , { // 23:X
    0b00010001,
    0b00001010,
    0b00000100,
    0b00001010,
    0b00010001,
    0
  }
  , { // 24:Y
    0b00010001,
    0b00001010,
    0b00000100,
    0b00000100,
    0b00000100,
    0
  }
  , { // 25:Z
    0b00011110,
    0b00000010,
    0b00000100,
    0b00001000,
    0b00011110,
    1
  }
};
//kompletter Zeichensatz
const char stabenBig[][8] PROGMEM = {
  {0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x10, 4}, // ASCII-Code 0x21 => ! (33)
  {0x14, 0x14, 0x14, 0x00, 0x00, 0x00, 0x00, 2}, // ASCII-Code 0x22 => " (34)
  {0x0a, 0x0a, 0x1f, 0x0a, 0x1f, 0x0a, 0x0a, 0}, // ASCII-Code 0x23 => # (35)
  {0x04, 0x0f, 0x14, 0x0e, 0x05, 0x1e, 0x04, 0}, // ASCII-Code 0x24 => $ (36)
  {0x18, 0x19, 0x02, 0x04, 0x08, 0x13, 0x03, 0}, // ASCII-Code 0x25 => % (37)
  {0x0c, 0x12, 0x14, 0x08, 0x15, 0x12, 0x0d, 0}, // ASCII-Code 0x26 => & (38)
  {0x18, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 3}, // ASCII-Code 0x27 => � (39)
  {0x04, 0x08, 0x10, 0x10, 0x10, 0x08, 0x04, 2}, // ASCII-Code 0x28 => { (40)
  {0x10, 0x08, 0x04, 0x04, 0x04, 0x08, 0x10, 2}, // ASCII-Code 0x29 => } (41)
  {0x00, 0x04, 0x15, 0x0e, 0x15, 0x04, 0x00, 0}, // ASCII-Code 0x2A => * (42)
  {0x00, 0x04, 0x04, 0x1f, 0x04, 0x04, 0x00, 0}, // ASCII-Code 0x2B => + (43)
  {0x00, 0x00, 0x00, 0x00, 0x18, 0x08, 0x10, 3}, // ASCII-Code 0x2C => , (44)
  {0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0}, // ASCII-Code 0x2D => - (45)
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 3}, // ASCII-Code 0x2E => . (46)
  {0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x00, 0}, // ASCII-Code 0x2F => / (47)
  {0x0e, 0x11, 0x13, 0x15, 0x19, 0x11, 0x0e, 0}, // ASCII-Code 0x30 => 0 (48)
  {0x08, 0x18, 0x08, 0x08, 0x08, 0x08, 0x1c, 2}, // ASCII-Code 0x31 => 1 (49)
  {0x0e, 0x11, 0x01, 0x02, 0x04, 0x08, 0x1f, 0}, // ASCII-Code 0x32 => 2 (50)
  {0x1f, 0x02, 0x04, 0x02, 0x01, 0x11, 0x0e, 0}, // ASCII-Code 0x33 => 3 (51)
  {0x02, 0x06, 0x0a, 0x12, 0x1f, 0x02, 0x02, 0}, // ASCII-Code 0x34 => 4 (52)
  {0x1f, 0x10, 0x1e, 0x01, 0x01, 0x11, 0x0e, 0}, // ASCII-Code 0x35 => 5 (53)
  {0x06, 0x08, 0x10, 0x1e, 0x11, 0x11, 0x0e, 0}, // ASCII-Code 0x36 => 6 (54)
  {0x1f, 0x01, 0x02, 0x04, 0x08, 0x08, 0x08, 0}, // ASCII-Code 0x37 => 7 (55)
  {0x0e, 0x11, 0x11, 0x0e, 0x11, 0x11, 0x0e, 0}, // ASCII-Code 0x38 => 8 (56)
  {0x0e, 0x11, 0x11, 0x0f, 0x01, 0x02, 0x0c, 0}, // ASCII-Code 0x39 => 9 (57)
  {0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, 3}, // ASCII-Code 0x3A => : (58)
  {0x00, 0x18, 0x18, 0x00, 0x18, 0x08, 0x10, 3}, // ASCII-Code 0x3B => ; (59)
  {0x02, 0x04, 0x08, 0x10, 0x08, 0x04, 0x02, 1}, // ASCII-Code 0x3C => < (60)
  {0x00, 0x00, 0x1f, 0x00, 0x1f, 0x00, 0x00, 0}, // ASCII-Code 0x3D => = (61)
  {0x10, 0x08, 0x04, 0x02, 0x04, 0x08, 0x10, 1}, // ASCII-Code 0x3E => > (62)
  {0x0e, 0x11, 0x01, 0x02, 0x04, 0x00, 0x04, 0}, // ASCII-Code 0x3F => ? (63)
  {0x0e, 0x11, 0x01, 0x0d, 0x15, 0x15, 0x0e, 0}, // ASCII-Code 0x40 => @ (64)
  {0x0e, 0x11, 0x11, 0x1f, 0x11, 0x11, 0x11, 0}, // ASCII-Code 0x41 => A (65)
  {0x1e, 0x11, 0x11, 0x1e, 0x11, 0x11, 0x1e, 0}, // ASCII-Code 0x42 => B (66)
  {0x0e, 0x11, 0x10, 0x10, 0x10, 0x11, 0x0e, 0}, // ASCII-Code 0x43 => C (67)
  {0x1c, 0x12, 0x11, 0x11, 0x11, 0x12, 0x1c, 0}, // ASCII-Code 0x44 => D (68)
  {0x1f, 0x10, 0x10, 0x1e, 0x10, 0x10, 0x1f, 0}, // ASCII-Code 0x45 => E (69)
  {0x1f, 0x10, 0x10, 0x1e, 0x10, 0x10, 0x10, 0}, // ASCII-Code 0x46 => F (70)
  {0x0e, 0x11, 0x10, 0x16, 0x11, 0x11, 0x0e, 0}, // ASCII-Code 0x47 => G (71)
  {0x11, 0x11, 0x11, 0x1f, 0x11, 0x11, 0x11, 0}, // ASCII-Code 0x48 => H (72)
  {0x1c, 0x08, 0x08, 0x08, 0x08, 0x08, 0x1c, 2}, // ASCII-Code 0x49 => I (73)
  {0x07, 0x02, 0x02, 0x02, 0x02, 0x12, 0x0c, 0}, // ASCII-Code 0x4A => J (74)
  {0x11, 0x12, 0x14, 0x18, 0x14, 0x12, 0x11, 0}, // ASCII-Code 0x4B => K (75)
  {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1f, 0}, // ASCII-Code 0x4C => L (76)
  {0x11, 0x1b, 0x15, 0x15, 0x11, 0x11, 0x11, 0}, // ASCII-Code 0x4D => M (77)
  {0x11, 0x11, 0x19, 0x15, 0x13, 0x11, 0x11, 0}, // ASCII-Code 0x4E => N (78)
  {0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0}, // ASCII-Code 0x4F => O (79)
  {0x1e, 0x11, 0x11, 0x1e, 0x10, 0x10, 0x10, 0}, // ASCII-Code 0x50 => P (80)
  {0x0e, 0x11, 0x11, 0x11, 0x15, 0x12, 0x0d, 0}, // ASCII-Code 0x51 => Q (81)
  {0x1e, 0x11, 0x11, 0x1e, 0x14, 0x12, 0x11, 0}, // ASCII-Code 0x52 => R (82)
  {0x0e, 0x11, 0x10, 0x0e, 0x01, 0x11, 0x0e, 0}, // ASCII-Code 0x53 => S (83)
  {0x1f, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0}, // ASCII-Code 0x54 => T (84)
  {0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0}, // ASCII-Code 0x55 => U (85)
  {0x11, 0x11, 0x11, 0x11, 0x11, 0x0a, 0x04, 0}, // ASCII-Code 0x56 => V (86)
  {0x11, 0x11, 0x11, 0x15, 0x15, 0x15, 0x0a, 0}, // ASCII-Code 0x57 => W (87)
  {0x11, 0x11, 0x0a, 0x04, 0x0a, 0x11, 0x11, 0}, // ASCII-Code 0x58 => X (88)
  {0x11, 0x11, 0x11, 0x0a, 0x04, 0x04, 0x04, 0}, // ASCII-Code 0x59 => Y (89)
  {0x1f, 0x01, 0x02, 0x04, 0x08, 0x10, 0x1f, 0}, // ASCII-Code 0x5A => Z (90)
  {0x1c, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1c, 2}, // ASCII-Code 0x5B => [ (91)
  {0x00, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00, 0}, // ASCII-Code 0x5C => \ (92)
  {0x1c, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1c, 2}, // ASCII-Code 0x5D => ] (93)
  {0x04, 0x0a, 0x11, 0x00, 0x00, 0x00, 0x00, 0}, // ASCII-Code 0x5E => ^ (94)
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0}, // ASCII-Code 0x5F => _ (95)
  {0x10, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 2}, // ASCII-Code 0x60 => ` (96)
  {0x00, 0x00, 0x0e, 0x01, 0x0f, 0x11, 0x0f, 0}, // ASCII-Code 0x61 => a (97)
  {0x10, 0x10, 0x10, 0x16, 0x19, 0x11, 0x1e, 0}, // ASCII-Code 0x62 => b (98)
  {0x00, 0x00, 0x0e, 0x10, 0x10, 0x11, 0x0e, 0}, // ASCII-Code 0x63 => c (99)
  {0x01, 0x01, 0x01, 0x0d, 0x13, 0x11, 0x0f, 0}, // ASCII-Code 0x64 => d (100)
  {0x00, 0x00, 0x0e, 0x11, 0x1f, 0x10, 0x0e, 0}, // ASCII-Code 0x65 => e (101)
  {0x06, 0x09, 0x08, 0x1c, 0x08, 0x08, 0x08, 0}, // ASCII-Code 0x66 => f (102)
  {0x00, 0x0f, 0x11, 0x11, 0x0f, 0x01, 0x0e, 0}, // ASCII-Code 0x67 => g (103)
  {0x10, 0x10, 0x16, 0x19, 0x11, 0x11, 0x11, 0}, // ASCII-Code 0x68 => h (104)
  {0x00, 0x10, 0x00, 0x10, 0x10, 0x10, 0x10, 4}, // ASCII-Code 0x69 => i (105)
  {0x02, 0x00, 0x06, 0x02, 0x02, 0x12, 0x0c, 1}, // ASCII-Code 0x6A => j (106)
  {0x10, 0x10, 0x12, 0x14, 0x18, 0x14, 0x12, 1}, // ASCII-Code 0x6B => k (107)
  {0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x1c, 2}, // ASCII-Code 0x6C => l (108)
  {0x00, 0x00, 0x1a, 0x15, 0x15, 0x11, 0x11, 0}, // ASCII-Code 0x6D => m (109)
  {0x00, 0x00, 0x16, 0x19, 0x11, 0x11, 0x11, 0}, // ASCII-Code 0x6E => n (110)
  {0x00, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x0e, 0}, // ASCII-Code 0x6F => o (111)
  {0x00, 0x00, 0x1e, 0x11, 0x1e, 0x10, 0x10, 0}, // ASCII-Code 0x70 => p (112)
  {0x00, 0x00, 0x0d, 0x13, 0x0f, 0x01, 0x01, 0}, // ASCII-Code 0x71 => q (113)
  {0x00, 0x00, 0x16, 0x19, 0x10, 0x10, 0x10, 0}, // ASCII-Code 0x72 => r (114)
  {0x00, 0x00, 0x0e, 0x10, 0x0e, 0x01, 0x1e, 0}, // ASCII-Code 0x73 => s (115)
  {0x08, 0x08, 0x1c, 0x08, 0x08, 0x09, 0x06, 0}, // ASCII-Code 0x74 => t (116)
  {0x00, 0x00, 0x11, 0x11, 0x11, 0x13, 0x0d, 0}, // ASCII-Code 0x75 => u (117)
  {0x00, 0x00, 0x11, 0x11, 0x11, 0x0a, 0x04, 0}, // ASCII-Code 0x76 => v (118)
  {0x00, 0x00, 0x11, 0x11, 0x15, 0x15, 0x0a, 0}, // ASCII-Code 0x77 => w (119)
  {0x00, 0x00, 0x11, 0x0a, 0x04, 0x0a, 0x11, 0}, // ASCII-Code 0x78 => x (120)
  {0x00, 0x00, 0x11, 0x11, 0x0f, 0x01, 0x0e, 0}, // ASCII-Code 0x79 => y (121)
  {0x00, 0x00, 0x1f, 0x02, 0x04, 0x08, 0x1f, 0}, // ASCII-Code 0x7A => z (122)
  {0x04, 0x08, 0x08, 0x10, 0x08, 0x08, 0x04, 2}, // ASCII-Code 0x7B => { (123)
  {0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 4}, // ASCII-Code 0x7C => | (124)
  {0x10, 0x08, 0x08, 0x04, 0x08, 0x08, 0x10, 2}, // ASCII-Code 0x7D => } (125)
  {0x00, 0x00, 0x00, 0x19, 0x26, 0x00, 0x00, 0} // ASCII-Code 0x7E => ~ (126)
};
#endif //STABEN_H



