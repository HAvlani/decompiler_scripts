extern unsigned int digits;
extern unsigned int printf_flags;

int format_code_offset()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    char * v3;  // rbx
    unsigned long long v5;  // rbp
    unsigned long v6;  // rdi
    unsigned long long v7;  // rdi

    v5 = v7;
    v6 = v7 + 1;
    v1 = strspn(v6, &printf_flags);
    v3 = v5 + v1 + 1 + strspn(((int)(v5 + v1 + 1)), &digits);
    if (*(v3) == 46)
    {
        v3 = v3 + strspn(((int)v3) + 1, &digits) + 1;
        v2 = v3 - v5;
        return v2;
    }
    v2 = v3 - v5;
    return v2;
}
