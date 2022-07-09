typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_4154d8;
extern unsigned int g_415508;
extern unsigned int g_416b42;

int xstrxfrm()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // edx
    struct_0 *v3;  // rbx
    struct_0 *v4;  // rbx
    unsigned int v5;  // esi
    unsigned int v6;  // edi
    unsigned long long v7;  // r12

    v3->field_0 = 0;
    v3 = __errno_location();
    v1 = strxfrm(v6, v5, v2);
    if (v4->field_0 == 0)
    {
        return v1;
    }
    error(0x0, v4->field_0, dcgettext(0x0, &g_416b42, 0x5));
    error(0x0, 0x0, dcgettext(0x0, &g_4154d8, 0x5));
    v7 = (long long)quotearg_n_style();
    error(0x2, 0x0, dcgettext(0x0, &g_415508, 0x5));
}
