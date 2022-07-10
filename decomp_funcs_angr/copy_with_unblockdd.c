extern unsigned long long col;
extern struct_0 conversion_blocksize;
extern char newline_character;
extern struct_0 obuf;
extern struct_0 oc;
extern struct_0 output_blocksize;
extern unsigned long long pending_spaces.7708;
extern char space_character;

int copy_with_unblock()
{
    BOT tmp_2;  // tmp #2
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbx
    char *|unsigned long long v12;  // rsi
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r12
    unsigned long long v15;  // r12
    unsigned long long v16;  // r12
    unsigned long long v17;  // r13
    unsigned long long v18;  // r13
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char *|unsigned long long v5;  // rax
    unsigned long v6;  // rax
    unsigned long long v7;  // rcx
    char * v8;  // rdx
    unsigned long long v9;  // rbx

    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))))
    {
        v3 = v17;
        v2 = v15;
        v16 = 0;
        v1 = &stack_base+0;
        v0 = v11;
        v10 = v12;
        while (true)
        {
            v5 = col;
            v17 = ((long long)*(v13 + v16));
            col = col + 1;
            if (v5 >= conversion_blocksize)
            {
                pending_spaces.7708 = 0;
                col = 0;
                v5 = oc + 1;
                *(obuf + oc) = newline_character;
                oc = oc + 1;
            }
            else
            {
                v7 = ((long long)space_character);
                v16 += 1;
                if (space_character == v17)
                {
                    pending_spaces.7708 = pending_spaces.7708 + 1;
                    v9 = v0;
                    v14 = v2;
                    v18 = v3;
                    return v5;
                }
                v12 = obuf;
                v5 = oc;
                if (pending_spaces.7708 == 0)
                {
                    v8 = oc;
                }
                else
                {
                    while (true)
                    {
                        v8 = v5 + 1;
                        *(v12 + v5) = v7;
                        oc = v5 + 1;
                        if (v5 + 1 >= output_blocksize)
                        {
                            write_output();
                            v12 = obuf;
                            v8 = oc;
                        }
                        tmp_2 = pending_spaces.7708;
                        pending_spaces.7708 = pending_spaces.7708 - 1;
                        if (tmp_2 == 1)
                        {
                            break;
                        }
                        v7 = ((long long)space_character);
                        v5 = v8;
                    }
                }
                *(rsi<8> + v8) = v17;
                oc = v8 + 1;
            }
            if (v5 >= conversion_blocksize || space_character != v17)
            {
                if ((v5 < conversion_blocksize || v5 >= output_blocksize) && (v8 + 1 >= output_blocksize || v5 >= conversion_blocksize))
                {
                    write_output();
                }
                v9 = v0;
                v14 = v2;
                v18 = v3;
                return v5;
            }
        }
    }
    return v6;
}
