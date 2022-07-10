typedef struct struct_1 {
    char padding_0[12];
    char field_c;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_416b5f;
extern unsigned int g_416b73;
extern struct_0 nprocs;

int reap()
{
    char v0;  // [bp-0x3c]
    unsigned int v1;  // [bp-0x30]
    unsigned long|unsigned long long|char v10;  // dl
    unsigned int v11;  // ebx
    unsigned int v12;  // edi
    unsigned int v13;  // rdi
    unsigned long v14;  // rdi
    unsigned long long v15;  // r12
    char *v16;  // r12
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned long long v19;  // cc_dep1
    unsigned long long|struct_1 * v5;  // rax
    unsigned long long v7;  // rax

    v10 = 0;
    v11 = v12;
    ((unsigned int)v13) = ((long long)(v12 != 0? ((int)v14) : -1));
    v10 = ((char)(v11 == 0));
    v5 = waitpid(((unsigned int)v13), ((int)&v0), rdx<4>);
    v19 = v5;
    if (((int)v5) >= 0)
    {
        v17 = v5;
        if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>))))
        {
            if (v11 <= 0)
            {
                v1 = ((int)v5);
                v5 = hash_remove();
                if (v5 == 0)
                {
                    v7 = v17;
                    return v7;
                }
                v5->field_c = 2;
            }
            if (v5 != 0 || v11 > 0)
            {
                v10 = ((long long)(v0 >> 8 | v0 & 127));
                if ((v0 >> 8 | v0 & 127) == 0)
                {
                    nprocs = nprocs - 1;
                    v7 = v17;
                    return v7;
                }
                v15 = quotearg_style();
                error(0x2, 0x0, dcgettext(0x0, &g_416b73, 0x5));
            }
        }
        else
        {
            v7 = v17;
            return v7;
        }
    }
    else
    {
        v18 = quotearg_style();
        v16 = dcgettext(0x0, &g_416b5f, 0x5);
        error(0x2, *(__errno_location()), v16);
    }
}
