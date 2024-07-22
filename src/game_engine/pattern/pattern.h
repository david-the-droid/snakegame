#ifndef PATTERN_H
#define PATTERN_H

/* 100 by 100 array screen size */
#define PATTERN_LENGTH_MAX (10000)

typedef struct pattern_s {
  unsigned short rowCoordinate;
  unsigned short colCoordinate;
  char symbol;
} pattern_t;

typedef struct OuputToRender_s {
  pattern_t pattern[PATTERN_LENGTH_MAX];
  unsigned short length;
} OutputToRender_t;

#endif