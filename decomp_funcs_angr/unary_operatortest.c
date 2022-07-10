typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_2 argv;
extern unsigned int g_40a0b6;
extern struct_0 pos;

int unary_operator()
{
    char v0;  // [bp-0xb8]
    struct_0 *v10;  // rbx
    struct_0 *v11;  // rbx
    unsigned long long v12;  // rbp
    unsigned int v14;  // r8d
    unsigned long long v2;  // rax
    unsigned int v7;  // edx
    struct_0 * v8;  // rbx
    struct_0 *v9;  // rbx

    switch (...)
    {
    case 0:
        unary_advance();
        v2 = __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v2 == 0)
        {
            v10->field_0 = 0;
            v10 = __errno_location();
            v7 = (int)getegid();
            if (v7 != -1)
            {
                break;
                return v2;
            }
            else if (v8->field_0 != 0)
            {
                return v2;
            }
            else
            {
                break;
                return v2;
            }
        }
        break;
        return v2;
    case 5: case 33:
        unary_advance();
        v14 = __lxstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v14 == 0)
        {
            break;
            return v2;
        }
        return v2;
    case 7:
        unary_advance();
        v2 = __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v2 == 0)
        {
            break;
            return v2;
        }
        break;
        return v2;
    case 8:
        unary_advance();
        v2 = __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v2 == 0)
        {
            v11->field_0 = 0;
            v11 = __errno_location();
            v7 = (int)geteuid();
            if (v7 != -1)
            {
                break;
                return v2;
            }
            else if (v8->field_0 != 0)
            {
                return v2;
            }
            else
            {
                break;
                return v2;
            }
        }
        break;
        return v2;
    case 12:
        unary_advance();
        v14 = __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v14 != 0)
        {
            return v2;
        }
        break;
        return v2;
    case 27:
        unary_advance();
        v14 = __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v14 != 0)
        {
            return v2;
        }
        break;
        return v2;
    case 28:
        unary_advance();
        v14 = __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v14 != 0)
        {
            return v2;
        }
        break;
        return v2;
    case 29:
        unary_advance();
        v14 = __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v14 != 0)
        {
            return v2;
        }
        break;
        return v2;
    case 30:
        unary_advance();
        __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        break;
        return v2;
    case 31:
        unary_advance();
        v14 = __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v14 != 0)
        {
            return v2;
        }
        break;
        return v2;
    case 32:
        unary_advance();
        v14 = __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v14 != 0)
        {
            return v2;
        }
        break;
        return v2;
    case 36:
        unary_advance();
        v14 = __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v14 != 0)
        {
            return v2;
        }
        break;
        return v2;
    case 39:
        unary_advance();
        break;
        return v2;
    case 41:
        unary_advance();
        v14 = __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v14 != 0)
        {
            return v2;
        }
        break;
        return v2;
    case 43:
        unary_advance();
        euidaccess(((int)*(argv + ((long long)pos) * 8 + 8)), 0x4);
        break;
        return v2;
    case 44:
        unary_advance();
        v14 = __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v14 != 0)
        {
            return v2;
        }
        break;
        return v2;
    case 45:
        unary_advance();
        v9->field_0 = 0;
        v9 = __errno_location();
        if (v8->field_0 == 34)
        {
            return v2;
        }
        else if (strtol((long long)find_int(), NULL, 0xa) > 2147483647)
        {
            return v2;
        }
        else
        {
            isatty();
            break;
            return v2;
        }
    case 46:
        unary_advance();
        v14 = __xstat(0x1, ((int)*(argv + ((long long)pos) * 8 + 8)), ((int)&v0));
        if (v14 != 0)
        {
            return v2;
        }
        break;
        return v2;
    case 48:
        unary_advance();
        euidaccess(((int)*(argv + ((long long)pos) * 8 + 8)), 0x2);
        break;
        return v2;
    case 49:
        unary_advance();
        euidaccess(((int)*(argv + ((long long)pos) * 8 + 8)), 0x1);
        break;
        return v2;
    case 51:
        unary_advance();
        break;
        return v2;
    default:
        v12 = (long long)quote();
        dcgettext(0x0, &g_40a0b6, 0x5);
        test_syntax_error(); /* do not return */
    }
    v12 = (long long)quote();
    dcgettext(0x0, &g_40a0b6, 0x5);
    test_syntax_error(); /* do not return */
}
