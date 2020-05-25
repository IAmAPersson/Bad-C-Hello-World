#include <stdio.h>
#include <stdlib.h>

int main(){int *hws=calloc(sizeof(unsigned long long)+sizeof(signed char)+sizeof(float)-1, 0);int f=0;for (char i=*"";i<'A'-'5';i-=-1){if (!(i%((char)'HI IM DAD'/17)))hws[f]|=(int)("Hsz"[f]-i);else if (!((int)i%(('|L'&0x000000FF)/17)-1))hws[f]|=((int)("f\%u"[f]-i))<<('@'/8);else if (!((int)i%((int)(char)'HMPH'/17)-2))hws[f]|=((int)("mxe"[f]-1))<<('P'/5);else if (!((int)i%(('LOL'&~-256)/17)-3)){hws[f]|=((int)("ih"[f]+i))<<'0'/2; ++f;}}hws[3]&=4294967040;printf("%s", (char*)hws);return (int)*"";}
