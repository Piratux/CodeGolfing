a, b, c, d, p, N, i, r, g, h, l, k;
f(x, y, j) {
  for (
    i = p = r = g = h = l = k = 0;
    a > g       ? a = g
        : c > h ? c = h
        : b < g ? b = g
        : d < h ? d = h
        : 0,
    p = g - x | h - y ? p : 3, ++i < N;
    l = l < 0 ? j ^= k ^= j ^= k, k = -k, ++r - r % 2 : l - 1
    )
    g += j, h += k;
}
main(x, y) {
  scanf("%d", &N);
  f(0, 1, 1);
  for (y = c; y <= d; y++)
    for (x = a; x < b + 2; putchar(x++ - b - 1 ? p + 32 : 10))
      f(x, y, 1);
}

// Globals:
// - a: min x spiral position
// - b: max x spiral position
// - c: min y spiral position
// - d: max y spiral position
// - p: stores return result from f()
// - N: input N, indicating length of spiral
// - i: spiral iterator for f()
// - r: total turns made
// - g: current position x in spiral
// - h: current position y in spiral
// - l: tracks amount of steps that need to be taken before making a turn
// - k: added value to current position y each step

// f(x,y,j):
// - Performs a walk in spiral to check if (x, y) belongs to spiral.
// - If (x, y) belongs to spiral, when f() is computed, p = 3. Otherwise p = 0.
// - As a side effect, calculates min and max spiral positions into a,b,c,d
// variables. This is used to find iterations bounds in main().
// - x: position x to check if it belongs to spiral
// - y: position y to check if it belongs to spiral
// - j: added value to current position x each step

// main(x,y):
// - x: used for iterating position x of spiral
// - y: used for iterating position y of spiral

// Credits:
// - "j^=k^=j^=k,k=-k" trick was adapted from moon_president's python submission
// which is the "b,d=-d,b" part in 212.py