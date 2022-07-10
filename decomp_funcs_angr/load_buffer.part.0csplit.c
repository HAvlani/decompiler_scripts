extern unsigned int g_418042;
extern char have_read_eof;
extern unsigned long long head[9];
extern struct_1 hold_area;
extern unsigned long long hold_count;
extern struct_1 last_line_number;

int load_buffer.part.0()
{
    BOT tmp_11;  // tmp #11
    BOT tmp_9;  // tmp #9
    unsigned long|unsigned long long v0;  // [bp-0x40]
    char *|unsigned long long v10;  // rbx
    unsigned long long|void * v12;  // r8
    unsigned long long v14;  // r12
    unsigned long|unsigned long long v15;  // r13
    unsigned long long v16;  // r13
    unsigned long long v17;  // r15
    unsigned long long v2;  // [bp+0x100008]
    unsigned long long v3;  // rax
    unsigned long long [9] v4;  // rax
    unsigned long long v9[9];  // rdx

    while (true)
    {
        v2 = 0;
        v15 = hold_count;
        *(head + 8) = 0;
        *(head + 40) = v12;
        v12 = (long long)xpalloc();
        *(head + 32) = 0;
        *(head + 56) = 0;
        *(head + 48) = 0;
        *(head + 24) = last_line_number + 1;
        *(head + 16) = last_line_number + 1;
        *(head + 64) = 0;
        if (hold_count != 0)
        {
            v14 = *(head) - v15;
            tmp_11 = *(head + 8);
            hold_count = 0;
            v12 = memcpy(v12, hold_area, v15);
            v10 = tmp_11 + v15;
            *(head + 8) = tmp_11 + v15;
            if (v14 != 1)
            {
                v3 = safe_read();
            }
        }
        else if (*(head) != 1)
        {
            v3 = safe_read();
        }
        if (hold_count == 0 || v14 != 1)
        {
            if ((hold_count == 0 || v3 != 0) && (hold_count != 0 || *(head) != 1) && (hold_count != 0 || v3 != 0))
            {
                if (rax<8> != 18446744069414584319)
                {
                    v3 = rax<8> + *(head + 8);
                    v10 = v3;
                    /* goto 4211503; */
                }
                else
                {
                    error(0x0, *(__errno_location()), dcgettext(0x0, &g_418042, 0x5));
                    cleanup_fatal(); /* do not return */
                }
            }
            if ((hold_count == 0 || v3 == 0) && (v3 == 0 || hold_count != 0) && (hold_count != 0 || *(head) != 1))
            {
                have_read_eof = 1;
                v10 = *(head + 8);
            }
        }
        if (v14 == 1 && hold_count != 0 || v3 == 0 && hold_count != 0 || hold_count != 0 && rax<8> != 18446744069414584319 || *(head) != 1 && rax<8> != 18446744069414584319 || hold_count == 0 && v3 == 0 && *(head) != 1)
        {
            *(head + 8) = rbx<8>;
        }
        if (rbx<8> != 0 && (hold_count != 0 || *(head) != 1) && (v3 == 0 || hold_count != 0 || rax<8> != 18446744069414584319) && (hold_count == 0 || v14 == 1 || v3 == 0 || rax<8> != 18446744069414584319))
        {
            v17 = *(head + 40);
            v15 = 0;
            v10 = rbx<8> + *(head + 40);
            *(v10) = 10;
            while (true)
            {
                v14 = rawmemchr(((int)v17), 0xa);
                if (v10 == v14)
                {
                    break;
                }
                keep_new_line.isra.0();
                v17 = v14 + 1;
                v15 += 1;
            }
            if (v0 != 0)
            {
                if (have_read_eof != 0)
                {
                    v16 = v15 + 1;
                    keep_new_line.isra.0();
                    *(head + 32) = v16;
                    v15 = v16 + last_line_number;
                    *(head + 16) = last_line_number + 1;
                    *(head + 24) = last_line_number + 1;
                    last_line_number = v15;
                    break;
                }
                else
                {
                    v0 = v14 - v17;
                    rpl_free();
                    hold_area = (long long)ximemdup();
                    hold_count = v0;
                }
            }
        }
        if (rbx<8> != 0 && v0 != 0 && (hold_count != 0 || *(head) != 1) && (v3 == 0 || hold_count != 0 || rax<8> != 18446744069414584319) && (hold_count == 0 || v14 == 1 || v3 == 0 || rax<8> != 18446744069414584319) && have_read_eof == 0 || rbx<8> != 0 && (hold_count != 0 || *(head) != 1) && (v3 == 0 || hold_count != 0 || rax<8> != 18446744069414584319) && (hold_count == 0 || v14 == 1 || v3 == 0 || rax<8> != 18446744069414584319) && v0 == 0)
        {
            *(head + 32) = v15;
            *(head + 16) = last_line_number + 1;
            *(head + 24) = last_line_number + 1;
            last_line_number = last_line_number + v15;
            if (v15 != 0)
            {
                break;
            }
        }
        if (...)
        {
            if (have_read_eof != 0)
            {
                free_buffer();
                return 0;
            }
            else if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x34<64>, Load(addr=Load(addr=0x41f220<64>, size=8, endness=Iend_LE), size=8, endness=Iend_LE), 0x2<64>, cc_ndep<8>))))
            {
                free_buffer();
            }
            else
            {
                xalloc_die(); /* do not return */
            }
        }
    }
    tmp_9 = *(head + 48);
    *(head + 64) = 0;
    *(head + 56) = tmp_9;
    v4 = head;
    if (head != 0)
    {
        do
        {
            v9 = v4;
            v4 = v4[8];
        }
        while (v4 != 0);
        v9[8] = head;
        return 1;
    }
    head = (long long)xmalloc();
    return 1;
}
