#ifndef __TYPES_H__
#define __TYPES_H__

// Aritmetica
using T1  = int;
using TT1 = long long;

// Utilidad
using SUT1  = int;
using SUTT1 = long long;

using UUT1 = unsigned int;
using UUTT1 = unsigned long long; 

using ContainerElemType1 = int;
using ContainerRange = int; 

#define __U__
#if defined __U__
    using UT1 = UUT1;
    using UTT1 = UUTT1;
#else
    using UT1 = SUT1;
    using UTT1 = SUTT1;
#endif 

using ContainerRange = int;
inline bool Menor(int a, int b) { return a < b; }
inline bool Mayor(int a, int b) { return a > b; }

#endif
