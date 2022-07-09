int unescape_tab()
{
    unsigned long long v1;  // rax
    unsigned long long v10;  // r9
    unsigned long long v11;  // r10
    char * v2;  // rcx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rsi
    char *v8;  // rdi
    unsigned long long v9;  // r8

    v6 = v8;
    v1 = strlen(v8) + 1;
    while (true)
    {
        v9 = ((long long)*(v6 + rdx<8>));
        v7 = rdx<8> + 1;
        if (*(v6 + rdx<8>) == 92 && rdx<8> + 4 < v1)
        {
            v10 = ((long long)*(v6 + v7));
            if ((((long long)*(v6 + v7)) - 48 & 255) <= 3)
            {
                v11 = ((long long)*(v6 + rdx<8> + 2));
                if ((((long long)*(v6 + rdx<8> + 2)) - 48 & 255) <= 7)
                {
                    v5 = ((long long)*(v6 + rdx<8> + 3));
                    if ((v5 - 48 & 255) <= 7)
                    {
                        v2 += 1;
                        v7 = 4;
                        *(v8 + 1 + 1) = ((char)(v5 - 48 + (v11 + v10 * 8) * 8 - 128));
                        /* goto 4252708; */
                    }
                }
            }
        }
        if ((v5 - 48 & 255) > 7 || (((long long)*(v6 + v7)) - 48 & 255) > 3 || *(v6 + rdx<8>) != 92 || rdx<8> + 4 >= v1 || (((long long)*(v6 + rdx<8> + 2)) - 48 & 255) > 7)
        {
            *(v2) = v9;
            v2 += 1;
            if (v1 <= v7)
            {
                break;
            }
        }
        v5 = v7;
    }
    return v1;
}
