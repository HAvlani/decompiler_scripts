typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int fmt.4716;

int lchmod()
{
    unsigned int v0;  // [bp-0xe0]
    char v1;  // [bp-0x68]
    unsigned int v10;  // r14d
    unsigned int v11;  // r15d
    unsigned int v3;  // rax
    unsigned long long v4;  // rax
    unsigned short v5;  // dx
    struct_0 *v6;  // rbx
    unsigned int v7;  // ebp
    char *v8;  // rdi
    unsigned long long v9;  // r12

    v9 = (long long)open(v8, 0x2a0000, v5);
    if (v3 >= 0)
    {
        v10 = __fxstatat(0x1);
        v6 = __errno_location();
        if (!(v10 == 0))
        {
            v7 = ((int)v6->field_0);
            close(((int)v6));
            v6->field_0 = v7;
            v4 = v9;
            return v4;
        }
        else if ((((short)v0) & 0xf000) != 0xa000)
        {
            __sprintf_chk(((int)&v1), 0x1, 0x1a, &fmt.4716, ((int)v6));
            v11 = ((int)v6->field_0);
            v10 = chmod();
            close(((int)v10));
            if (!(v10 != 0))
            {
                v4 = v9;
                return v4;
            }
            else if (v11 != 2)
            {
                v6->field_0 = v11;
                v4 = v9;
                return v4;
            }
            else
            {
                chmod();
                v4 = v9;
                return v4;
            }
        }
        else
        {
            close(((int)v6));
            v6->field_0 = 95;
            v4 = v9;
            return v4;
        }
    }
    v4 = v9;
    return v4;
}
