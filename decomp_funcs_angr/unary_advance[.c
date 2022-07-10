extern struct_0 argc;
extern struct_0 pos;

int unary_advance()
{
    unsigned long v0;  // [bp-0x8]

    pos = ((int)(v0 + 1));
    if (((int)(v0 + 1)) < argc)
    {
        pos = ((int)(pos + 2));
        return ((long long)(((int)v0) + 2));
    }
    v0 = ((long long)pos);
    beyond(); /* do not return */
}
