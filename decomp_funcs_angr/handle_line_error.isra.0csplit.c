typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_41801e;
extern unsigned int g_418248;
extern struct_0 stderr;

int handle_line_error.isra.0()
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x20]
    unsigned long v11;  // r13
    struct_0 *v12;  // fs
    unsigned long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    unsigned long v7;  // rbx
    unsigned long long v8;  // rbx
    unsigned long v9;  // rsi

    v3 = v11;
    v2 = (long long)imaxtostr();
    v1 = v7;
    v0 = *(v12 + 0x28);
    imaxtostr();
    v8 = (long long)quote();
    dcgettext(0x0, &g_418248, 0x5);
    __fprintf_chk();
    if (v9 != 0)
    {
        (long long)imaxtostr() = (long long)imaxtostr();
        dcgettext(0x0, &g_41801e, 0x5);
        __fprintf_chk();
        cleanup_fatal(); /* do not return */
    }
    fputc(0xa, stderr);
    cleanup_fatal(); /* do not return */
}
