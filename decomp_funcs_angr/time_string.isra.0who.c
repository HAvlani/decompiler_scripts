extern unsigned int buf.8014;
extern struct_0 time_format;

int time_string.isra.0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rdi

    v0 = v4;
    v2 = localtime(((int)&v0));
    if (v2 != 0)
    {
        strftime(&buf.8014, 0x21, ((int)time_format), ((int)v2));
        v3 = &buf.8014;
        return v3;
    }
    v3 = imaxtostr();
    return v3;
}
