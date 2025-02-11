https://www.tldraw.com/r/Pl3-gDQ8uNRafdxf0yx6R?d=v900.1203.903.1090.PRGTGzwK2W7kNHp-oIV08

**1 - reverse _bits**

exemple : `00100110`:

1. **Loop 1** (i=7, j=0):
   - Nchofo lbit f position j=0 (mn limin): `00100110` -> `0`
   - `(octet >> 0) & 1 = 0`
   - `if` maydkhulch hit bit = 0
   - result baqi = `00000000`

2. **Loop 2** (i=6, j=1):
   - Nchofo lbit f position j=1: `00100110` -> `1`
   - `(octet >> 1) & 1 = 1`
   - `if` ydkhul o dir: `result + (1 << 6)`
   - result wla = `01000000`

3. **Loop 3** (i=5, j=2):
   - Nchofo lbit f position j=2: `00100110` -> `1`
   - `(octet >> 2) & 1 = 1`
   - `if` ydkhul o dir: `result + (1 << 5)`
   - result wla = `01100000`

4. **Loop 4** (i=4, j=3):
   - Nchofo lbit f position j=3: `00100110` -> `0`
   - `(octet >> 3) & 1 = 0`
   - `if` maydkhulch hit bit = 0
   - result baqi = `01100000`

5. **Loop 5** (i=3, j=4):
   - Nchofo lbit f position j=4: `00100110` -> `0`
   - `(octet >> 4) & 1 = 0`
   - `if` maydkhulch hit bit = 0
   - result baqi = `01100000`

6. **Loop 6** (i=2, j=5):
   - Nchofo lbit f position j=5: `00100110` -> `1`
   - `(octet >> 5) & 1 = 1`
   - `if` ydkhul o dir: `result + (1 << 2)`
   - result wla = `01100100`

7. **Loop 7** (i=1, j=6):
   - Nchofo lbit f position j=6: `00100110` -> `0`
   - `(octet >> 6) & 1 = 0`
   - `if` maydkhulch hit bit = 0
   - result baqi = `01100100`

8. **Loop 8** (i=0, j=7):
   - Nchofo lbit f position j=7: `00100110` -> `0`
   - `(octet >> 7) & 1 = 0`
   - `if` maydkhulch hit bit = 0
   - result baqi = `01100100`

**Nticja finale**: `01100100`

Had function kat9leb bits:
- Input: `00100110`
- Output: `01100100`
