unsigned char c = -1;
cout<<c<<endl; //\377

Type conversion:
non-bool -> bool: 0 -> false, other -> true
bool -> arithmetic: true -> 1, false -> 0
float -> int: value is truncated, 1.6 -> 1
int -> float: 1 -> 1.0
out-of-range -> unsigned :8-bit unsigned char = -1 -> 255
out-of-range -> signed: undefined(overflow)

20 decimal
024 octal
0x14 hexadecimal
