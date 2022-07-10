typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int fmt.4716;
extern unsigned int g_40af2e;

int lchmod()
{
    char v0;  // [bp-0xf8]
    unsigned int v1;  // [bp-0xe0]
    unsigned long long v10;  // r12
    unsigned int v11;  // r14d
    unsigned int v12;  // r15d
    char v2;  // [bp-0x68]
    unsigned int v4;  // rax
    unsigned long long v5;  // rax
    unsigned short v6;  // dx
    struct_0 *v7;  // rbx
    unsigned int v8;  // ebp
    char *v9;  // rdi

    v10 = (long long)open(v9, 0x2a0000, v6);
    if (v4 >= 0)
    {
        v11 = __fxstatat(0x1, v4, &g_40af2e, ((int)&v0), 0x1000);
        v7 = __errno_location();
        if (!(v11 == 0))
        {
            v8 = ((int)v7->field_0);
            close(((int)v7));
            v7->field_0 = v8;
            v5 = v10;
            return v5;
        }
        else if ((((short)v1) & 0xf000) != 0xa000)
        {
            __sprintf_chk(((int)&v2), 0x1, 0x1a, &fmt.4716, ((int)v7));
            v12 = ((int)v7->field_0);
            v11 = chmod();
            close(((int)v11));
            if (!(v11 != 0))
            {
                v5 = v10;
                return v5;
            }
            else if (v12 != 2)
            {
                v7->field_0 = v12;
                v5 = v10;
                return v5;
            }
            else
            {
                chmod();
                v5 = v10;
                return v5;
            }
        }
        else
        {
            close(((int)v7));
            v7->field_0 = 95;
            v5 = v10;
            return v5;
        }
    }
    v5 = v10;
    return v5;
}
