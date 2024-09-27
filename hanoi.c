{\rtf1\ansi\ansicpg1250\cocoartf2761
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fmodern\fcharset0 Courier;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs26 \cf0 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 #include <stdio.h>\
\
void hanoi(int n, int a, int b)\
\{\
  if (n == 1) \
    printf("move stone 1 from %d to %d\\n", a, b);\
  else\
  \{\
    hanoi(n - 1, a, 6 - a);\
    printf("move stone %d from %d to %d\\n", n, a, b);\
    hanoi(n, 6 - a - b, b);\
  \}\
\}\
\
int main()\
\{\
  int n = 4;\
\
  hanoi(n, 1, 2);\
  return 0;\
\}\
}