// ╭─────────────────────────────┬─────────────────────────────╮
// │ LU5 LU4 LU3 LU2 LU1 LU0     │     RU0 RU1 RU2 RU3 RU4 RU5 │ UPPER
// │ LM5 LM4 LM3 LM2 LM1 LM0     │     RM0 RM1 RM2 RM3 RM4 RM5 │ MIDDLE
// │ LL5 LL4 LL3 LL2 LL1 LL0     │     RL0 RL1 RL2 RL3 RL4 RL5 │ LOWER
// ╰───────────────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───────────────╯
//        LEFT     ╰─────────────┴─────────────╯      RIGHT

// ╭─────────────────────────────┬─────────────────────────────╮
// │   0   1   2   3   4   5     │     6   7   8   9   10  11  │
// │  12  13  14  15  16  17     │     18  19  20  21  22  23  │
// │  24  25  26  27  28  29     │     30  31  32  33  34  35  │
// ╰────────────────╮ 36  37  38 │ 39  40  41 ╭────────────────╯
//                  ╰────────────┴────────────╯


#pragma once

// [L]eft [U]pper Row
#define LU5 0
#define LU4 1
#define LU3 2
#define LU2 3
#define LU1 4
#define LU0 5

// [R]ight [U]pper Row
#define RU0 6
#define RU1 7
#define RU2 8
#define RU3 9
#define RU4 10
#define RU5 11

// [L]eft [M]iddle Row
#define LM5 12
#define LM4 13
#define LM3 14
#define LM2 15
#define LM1 16
#define LM0 17

// [R]ight [M]iddle Row
#define RM0 18
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22
#define RM5 23

// [L]eft [L]ower Row
#define LL5 24
#define LL4 25
#define LL3 26
#define LL2 27
#define LL1 28
#define LL0 29

// [R]ight [L]ower Row
#define RL0 30
#define RL1 31
#define RL2 32
#define RL3 33
#define RL4 34
#define RL5 35

// [L]eft t[H]umb Row
#define LH2 36
#define LH1 37
#define LH0 38

// [R]ight t[H]umb Row
#define RH0 39
#define RH1 40
#define RH2 41

#define KEYS_L LU5 LU4 LU3 LU2 LU1 LU0 LM5 LM4 LM3 LM2 LM1 LM0 LL5 LL4 LL3 LL2 LL1 LL0 // Left Hand
#define KEYS_R RU5 RU4 RU3 RU2 RU1 RU0 RM5 RM4 RM3 RM2 RM1 RM0 RL5 RL4 RL3 RL2 RL1 RL0 // Right Hand
#define KEYS_T LH2 LH1 LH0 RH2 RH1 RH0 // Thumb
