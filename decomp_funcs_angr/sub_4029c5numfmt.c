extern struct_0 round_style;
extern struct_0 round_types;

int sub_4029c5()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned int v2;  // eax

    v0 = 1;
    v2 = ((int)*(round_types + (long long)__xargmatch_internal() * 4));
    round_style = v2;
}
