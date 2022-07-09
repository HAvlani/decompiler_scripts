extern struct_0 in_column;
extern char tabs;

int get_space()
{
    char * v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4[3];  // rbx
    unsigned long long v5;  // rsi
    unsigned long v6;  // rdi

    v2 = v5;
    v4 = v6;
    while (true)
    {
        if (((int)v2) != 32)
        {
            if (((int)v2) != 9)
            {
                break;
            }
        }
        else
        {
            in_column = in_column + 1;
            v1 = v4[1];
        }
        if (((int)v2) == 9)
        {
            v3 = ((long long)in_column);
            tabs = 1;
            in_column = ((int)((((long long)(((char)(v3 >> 31 & 1 ^ 1))? in_column : ((int)(v3 + 7)))) >> 3) * 8 + 8));
            v1 = v4[1];
        }
        if (((int)v2) == 32 || ((int)v2) == 9)
        {
            if ((v4[1] < v4[2] || ((int)v2) == 32) && (v4[1] < v4[2] || v4[1] < v4[2]) && (((int)v2) == 9 || v4[1] < v4[2]))
            {
                v4[1] = rax<8> + 1;
                v2 = ((long long)*(rax<8>));
            }
            if ((((int)v2) == 32 || v4[1] >= v4[2]) && (((int)v2) == 9 || v4[1] >= v4[2]) && (v4[1] >= v4[2] || v4[1] >= v4[2]))
            {
                v2 = __uflow();
            }
        }
    }
    return v2;
}
