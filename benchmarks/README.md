### Atomic vs mutex

| Type | Time |
|-|-|
| Atomic - 1 thread | 6.86 ns |
| Atomic - 2 thread | 14 ns |
| Atomic - 4 thread | 16.7 ns |
| Atomic - 8 thread | 16.2 ns |
| Mutex - 1 thread | 21.8 ns |
| Mutex - 2 thread | 83.9 ns |
| Mutex - 4 thread | 118 ns |
| Mutex - 8 thread | 120 ns |

### Linux clocks

CPU time measures are significantly slower (10x), and coarse versions are significantly faster (3x).

| Type | Time |
|-|-|
| CLOCK_REALTIME | 18 ns |
| CLOCK_REALTIME_COARSE | 5.45 ns |
| CLOCK_MONOTONIC | 15.8 ns |
| CLOCK_MONOTONIC_COARSE | 5.29 ns |
| CLOCK_MONOTONIC_RAW | 16.5 ns |
| CLOCK_BOOTTIME | 15.9 ns |
| CLOCK_PROCESS_CPUTIME_ID | 151 ns |
| CLOCK_THREAD_CPUTIME_ID | 142 ns |

### Modulo vs minus

For situations where an integer is incremented and modulo a certain number multiple times.

| Type | Time |
|-|-|
| Modulo | 4.16 ns |
| Minus | 1.61 ns |
