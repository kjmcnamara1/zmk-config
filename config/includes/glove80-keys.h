// ╭─────────────────────────────────┬─────────────────────────────────╮
// │ LN5 LN4 LN3 LN2 LN1             │             RN1 RN2 RN3 RN4 RN5 │ NUMBER
// │ LT5 LT4 LT3 LT2 LT1 LT0         │         RT0 RT1 RT2 RT3 RT4 RT5 │ TOP
// │ LU5 LU4 LU3 LU2 LU1 LU0         │         RU0 RU1 RU2 RU3 RU4 RU5 │ UPPER
// │ LM5 LM4 LM3 LM2 LM1 LM0         │         RM0 RM1 RM2 RM3 RM4 RM5 │ MIDDLE
// │ LL5 LL4 LL3 LL2 LL1 LL0         │         RL0 RL1 RL2 RL3 RL4 RL5 │ LOWER
// │ LB5 LB4 LB3 LB2 LB1             │             RB1 RB2 RB3 RB4 RB5 │ BOTTOM
// ╰───────────────────╮ LH3 LH4 LH5 │ RH5 RH4 RH3 ╭───────────────────╯
//          LEFT       │ LH0 LH1 LH2 │ RH2 RH1 RH0 │       RIGHT
//                     ╰─────────────┴─────────────╯

// ╭─────────────────────────────────┬─────────────────────────────────╮
// │   0   1   2   3   4             │             5   6   7   8   9   │
// │  10  11  12  13  14  15         │         16  17  18  19  20  21  │
// │  22  23  24  25  26  27         │         28  29  30  31  32  33  │
// │  34  35  36  37  38  39         │         40  41  42  43  44  45  │
// │  46  47  48  49  50  51         │         58  59  60  61  62  63  │
// │  64  65  66  67  68             │             75  76  77  78  79  │
// ╰───────────────────╮  52  53  54 │ 55  56  57  ╭───────────────────╯
//                     │  69  70  71 │ 72  73  74  │
//                     ╰─────────────┴─────────────╯



#pragma once

// [L]eft [N]umber Row
#define LN5 0
#define LN4 1
#define LN3 2
#define LN2 3
#define LN1 4

// [R]ight [N]umber Row
#define RN1 5
#define RN2 6
#define RN3 7
#define RN4 8
#define RN5 9

// [L]eft [T]op Row
#define LT5 10
#define LT4 11
#define LT3 12
#define LT2 13
#define LT1 14
#define LT0 15

// [R]ight [T]op Row
#define RT0 16
#define RT1 17
#define RT2 18
#define RT3 19
#define RT4 20
#define RT5 21

// [L]eft [U]pper Row
#define LU5 22
#define LU4 23
#define LU3 24
#define LU2 25
#define LU1 26
#define LU0 27

// [R]ight [U]pper Row
#define RU0 28
#define RU1 29
#define RU2 30
#define RU3 31
#define RU4 32
#define RU5 33

// [L]eft [M]iddle Row
#define LM5 34
#define LM4 35
#define LM3 36
#define LM2 37
#define LM1 38
#define LM0 39

// [R]ight [M]iddle Row
#define RM0 40
#define RM1 41
#define RM2 42
#define RM3 43
#define RM4 44
#define RM5 45

// [L]eft [L]ower Row
#define LL5 46
#define LL4 47
#define LL3 48
#define LL2 49
#define LL1 50
#define LL0 51

// [R]ight [L]ower Row
#define RL0 58
#define RL1 59
#define RL2 60
#define RL3 61
#define RL4 62
#define RL5 63

// [L]eft [B]ottom Row
#define LB5 64
#define LB4 65
#define LB3 66
#define LB2 67
#define LB1 68

// [R]ight [B]ottom Row
#define RB1 75
#define RB2 76
#define RB3 77
#define RB4 78
#define RB5 79

// [L]eft t[H]umb Row
#define LH3 52
#define LH4 53
#define LH5 54
#define LH0 69
#define LH1 70
#define LH2 71

// [R]ight t[H]umb Row
#define RH5 55
#define RH4 56
#define RH3 57
#define RH2 72
#define RH1 73
#define RH0 74

#define KEYS_L LN5 LN4 LN3 LN2 LN1 LT5 LT4 LT3 LT2 LT1 LT0 LU5 LU4 LU3 LU2 LU1 LU0 LM5 LM4 LM3 LM2 LM1 LM0 LL5 LL4 LL3 LL2 LL1 LL0 LB5 LB4 LB3 LB2 LB1 // Left Hand
#define KEYS_R RN5 RN4 RN3 RN2 RN1 RT5 RT4 RT3 RT2 RT1 RT0 RU5 RU4 RU3 RU2 RU1 RU0 RM5 RM4 RM3 RM2 RM1 RM0 RL5 RL4 RL3 RL2 RL1 RL0 RB5 RB4 RB3 RB2 RB1 // Right Hand
#define KEYS_T LH3 LH4 LH5 LH0 LH1 LH2 RH5 RH4 RH3 RH2 RH1 RH0 // Thumb
