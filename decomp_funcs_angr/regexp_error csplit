typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_41801e;
extern unsigned int g_41806e;
extern struct_0 stderr;

int regexp_error()
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x20]
    unsigned long v10;  // rsi
    unsigned long v11;  // r12
    unsigned long long v12;  // r12
    unsigned long v13;  // r13
    struct_0 *v14;  // fs
    unsigned long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    char v8;  // dl
    unsigned long v9;  // rbx

    v3 = v13;
    v2 = v11;
    v1 = v9;
    v0 = *(v14 + 0x28);
    v12 = (long long)quote();
    dcgettext(0x0, &g_41806e, 0x5);
    __fprintf_chk();
    if (v10 != 0)
    {
        v12 = (long long)imaxtostr();
        dcgettext(0x0, &g_41801e, 0x5);
        __fprintf_chk();
    }
    else
    {
        fputc(0xa, stderr);
    }
    if (((long long)v8) != 0)
    {
        cleanup_fatal(); /* do not return */
    }
    dump_rest_of_file();
    close_output_file();
    cleanup_fatal(); /* do not return */
}
