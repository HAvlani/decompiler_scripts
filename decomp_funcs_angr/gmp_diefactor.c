extern unsigned int g_41b81a;
extern struct_0 stderr;

int gmp_die()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax
    unsigned int v3;  // edi

    v0 = v2;
    __fprintf_chk(((int)stderr), 0x1, &g_41b81a, v3);
    abort(); /* do not return */
}