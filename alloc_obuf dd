extern char g_41438d;
extern struct_0 ibuf;
extern struct_0 obuf;

int alloc_obuf()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v3;  // rax
    unsigned long v4;  // rax

    if (obuf != 0)
    {
        return v4;
    }
    else if (ibuf != 0)
    {
        obuf = ibuf;
        return ibuf;
    }
    else
    {
        v0 = v3;
        alloc_ibuf.part.0();
        obuf = ibuf;
        return ibuf;
    }
}
