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
