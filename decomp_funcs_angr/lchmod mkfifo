typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int fmt.4716;
extern unsigned int g_407d61;

int lchmod()
{
    char v0;  // [bp-0xf8]
    unsigned int v1;  // [bp-0xe0]
    char *v10;  // rdi
    unsigned long long v11;  // r12
    unsigned int v12;  // r13d
    unsigned int v13;  // r14d
    unsigned int v14;  // r15d
    char v2;  // [bp-0x68]
    unsigned int v4;  // eax
    unsigned long long v5;  // rax
    unsigned short v6;  // dx
    struct_0 *v7;  // rbx
    unsigned int v8;  // ebp
    unsigned int v9;  // esi

    v12 = v9;
    v11 = (long long)open(v10, 0x2a0000, v6);
    if (v4 >= 0)
    {
        v13 = __fxstatat(0x1, v4, &g_407d61, ((int)&v0), 0x1000);
        v7 = __errno_location();
        if (!(v13 == 0))
        {
            v8 = ((int)v7->field_0);
            close(((int)v7));
            v7->field_0 = v8;
            v5 = v11;
            return v5;
        }
        else if ((((short)v1) & 0xf000) != 0xa000)
        {
            __sprintf_chk(((int)&v2), 0x1, 0x1a, &fmt.4716, ((int)v7));
            v14 = ((int)v7->field_0);
            v13 = chmod(((int)&v2), v12);
            close(((int)v13));
            if (!(v13 != 0))
            {
                v5 = v11;
                return v5;
            }
            else if (v14 != 2)
            {
                v7->field_0 = v14;
                v5 = v11;
                return v5;
            }
            else
            {
                chmod(((int)v10), v12);
                v5 = v11;
                return v5;
            }
        }
        else
        {
            close(((int)v7));
            v7->field_0 = 95;
            v5 = v11;
            return v5;
        }
    }
    v5 = v11;
    return v5;
}
